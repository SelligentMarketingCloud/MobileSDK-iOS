/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <Foundation/Foundation.h>
#import "SMSDWebImageCompat.h"

typedef NS_ENUM(NSInteger, SMSDImageCacheType) {
    /**
     * The image wasn't available the SDWebImage caches, but was downloaded from the web.
     */
    SMSDImageCacheTypeNone,
    /**
     * The image was obtained from the disk cache.
     */
    SMSDImageCacheTypeDisk,
    /**
     * The image was obtained from the memory cache.
     */
    SMSDImageCacheTypeMemory
};

typedef void(^SMSDWebImageQueryCompletedBlock)(UIImage *image, SMSDImageCacheType cacheType);

typedef void(^SMSDWebImageCheckCacheCompletionBlock)(BOOL isInCache);

typedef void(^SMSDWebImageCalculateSizeBlock)(NSUInteger fileCount, NSUInteger totalSize);

/**
 * SDImageCache maintains a memory cache and an optional disk cache. Disk cache write operations are performed
 * asynchronous so it doesn’t add unnecessary latency to the UI.
 */
@interface SMSDImageCache : NSObject

/**
 * Decompressing images that are downloaded and cached can improve performance but can consume lot of memory.
 * Defaults to YES. Set this to NO if you are experiencing a crash due to excessive memory consumption.
 */
@property (assign, nonatomic) BOOL smShouldDecompressImages;

/**
 *  disable iCloud backup [defaults to YES]
 */
@property (assign, nonatomic) BOOL smShouldDisableiCloud;

/**
 * use memory cache [defaults to YES]
 */
@property (assign, nonatomic) BOOL smShouldCacheImagesInMemory;

/**
 * The maximum "total cost" of the in-memory image cache. The cost function is the number of pixels held in memory.
 */
@property (assign, nonatomic) NSUInteger smMaxMemoryCost;

/**
 * The maximum number of objects the cache should hold.
 */
@property (assign, nonatomic) NSUInteger smMaxMemoryCountLimit;

/**
 * The maximum length of time to keep an image in the cache, in seconds
 */
@property (assign, nonatomic) NSInteger smMaxCacheAge;

/**
 * The maximum size of the cache, in bytes.
 */
@property (assign, nonatomic) NSUInteger smMaxCacheSize;

/**
 * Returns global shared cache instance
 *
 * @return SDImageCache global instance
 */
+ (SMSDImageCache *)smSharedImageCache;

/**
 * Init a new cache store with a specific namespace
 *
 * @param ns The namespace to use for this cache store
 */
- (id)initSMWithNamespace:(NSString *)ns;

/**
 * Init a new cache store with a specific namespace and directory
 *
 * @param ns        The namespace to use for this cache store
 * @param directory Directory to cache disk images in
 */
- (id)initSMWithNamespace:(NSString *)ns diskCacheDirectory:(NSString *)directory;

-(NSString *)smMakeDiskCachePath:(NSString*)fullNamespace;

/**
 * Add a read-only cache path to search for images pre-cached by SDImageCache
 * Useful if you want to bundle pre-loaded images with your app
 *
 * @param path The path to use for this read-only cache path
 */
- (void)smAddReadOnlyCachePath:(NSString *)path;

/**
 * Store an image into memory and disk cache at the given key.
 *
 * @param image The image to store
 * @param key   The unique image cache key, usually it's image absolute URL
 */
- (void)smStoreImage:(UIImage *)image forKey:(NSString *)key;

/**
 * Store an image into memory and optionally disk cache at the given key.
 *
 * @param image  The image to store
 * @param key    The unique image cache key, usually it's image absolute URL
 * @param toDisk Store the image to disk cache if YES
 */
- (void)smStoreImage:(UIImage *)image forKey:(NSString *)key toDisk:(BOOL)toDisk;

/**
 * Store an image into memory and optionally disk cache at the given key.
 *
 * @param image       The image to store
 * @param recalculate BOOL indicates if imageData can be used or a new data should be constructed from the UIImage
 * @param imageData   The image data as returned by the server, this representation will be used for disk storage
 *                    instead of converting the given image object into a storable/compressed image format in order
 *                    to save quality and CPU
 * @param key         The unique image cache key, usually it's image absolute URL
 * @param toDisk      Store the image to disk cache if YES
 */
- (void)smStoreImage:(UIImage *)image recalculateFromImage:(BOOL)recalculate imageData:(NSData *)imageData forKey:(NSString *)key toDisk:(BOOL)toDisk;

/**
 * Store image NSData into disk cache at the given key.
 *
 * @param imageData The image data to store
 * @param key   The unique image cache key, usually it's image absolute URL
 */
- (void)smStoreImageDataToDisk:(NSData *)imageData forKey:(NSString *)key;

/**
 * Query the disk cache asynchronously.
 *
 * @param key The unique key used to store the wanted image
 */
- (NSOperation *)smQueryDiskCacheForKey:(NSString *)key done:(SMSDWebImageQueryCompletedBlock)doneBlock;

/**
 * Query the memory cache synchronously.
 *
 * @param key The unique key used to store the wanted image
 */
- (UIImage *)smImageFromMemoryCacheForKey:(NSString *)key;

/**
 * Query the disk cache synchronously after checking the memory cache.
 *
 * @param key The unique key used to store the wanted image
 */
- (UIImage *)smImageFromDiskCacheForKey:(NSString *)key;

/**
 * Remove the image from memory and disk cache asynchronously
 *
 * @param key The unique image cache key
 */
- (void)smRemoveImageForKey:(NSString *)key;


/**
 * Remove the image from memory and disk cache asynchronously
 *
 * @param key             The unique image cache key
 * @param completion      An block that should be executed after the image has been removed (optional)
 */
- (void)smRemoveImageForKey:(NSString *)key withCompletion:(SMSDWebImageNoParamsBlock)completion;

/**
 * Remove the image from memory and optionally disk cache asynchronously
 *
 * @param key      The unique image cache key
 * @param fromDisk Also remove cache entry from disk if YES
 */
- (void)smRemoveImageForKey:(NSString *)key fromDisk:(BOOL)fromDisk;

/**
 * Remove the image from memory and optionally disk cache asynchronously
 *
 * @param key             The unique image cache key
 * @param fromDisk        Also remove cache entry from disk if YES
 * @param completion      An block that should be executed after the image has been removed (optional)
 */
- (void)smRemoveImageForKey:(NSString *)key fromDisk:(BOOL)fromDisk withCompletion:(SMSDWebImageNoParamsBlock)completion;

/**
 * Clear all memory cached images
 */
- (void)smClearMemory;

/**
 * Clear all disk cached images. Non-blocking method - returns immediately.
 * @param completion    An block that should be executed after cache expiration completes (optional)
 */
- (void)smClearDiskOnCompletion:(SMSDWebImageNoParamsBlock)completion;

/**
 * Clear all disk cached images
 * @see clearDiskOnCompletion:
 */
- (void)smClearDisk;

/**
 * Remove all expired cached image from disk. Non-blocking method - returns immediately.
 * @param completionBlock An block that should be executed after cache expiration completes (optional)
 */
- (void)smCleanDiskWithCompletionBlock:(SMSDWebImageNoParamsBlock)completionBlock;

/**
 * Remove all expired cached image from disk
 * @see cleanDiskWithCompletionBlock:
 */
- (void)smCleanDisk;

/**
 * Get the size used by the disk cache
 */
- (NSUInteger)smGetSize;

/**
 * Get the number of images in the disk cache
 */
- (NSUInteger)smGetDiskCount;

/**
 * Asynchronously calculate the disk cache's size.
 */
- (void)smCalculateSizeWithCompletionBlock:(SMSDWebImageCalculateSizeBlock)completionBlock;

/**
 *  Async check if image exists in disk cache already (does not load the image)
 *
 *  @param key             the key describing the url
 *  @param completionBlock the block to be executed when the check is done.
 *  @note the completion block will be always executed on the main queue
 */
- (void)smDiskImageExistsWithKey:(NSString *)key completion:(SMSDWebImageCheckCacheCompletionBlock)completionBlock;

/**
 *  Check if image exists in disk cache already (does not load the image)
 *
 *  @param key the key describing the url
 *
 *  @return YES if an image exists for the given key
 */
- (BOOL)smDiskImageExistsWithKey:(NSString *)key;

/**
 *  Get the cache path for a certain key (needs the cache path root folder)
 *
 *  @param key  the key (can be obtained from url using cacheKeyForURL)
 *  @param path the cache path root folder
 *
 *  @return the cache path
 */
- (NSString *)smCachePathForKey:(NSString *)key inPath:(NSString *)path;

/**
 *  Get the default cache path for a certain key
 *
 *  @param key the key (can be obtained from url using cacheKeyForURL)
 *
 *  @return the default cache path
 */
- (NSString *)smDefaultCachePathForKey:(NSString *)key;

@end
