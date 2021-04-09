//
//  MKAnnotationView+SMWebCache.h
//  SDWebImage
//
//  Created by Olivier Poitrey on 14/03/12.
//  Copyright (c) 2012 Dailymotion. All rights reserved.
//

#import "MapKit/MapKit.h"
#import "SMSDWebImageManager.h"

/**
 * Integrates SDWebImage async downloading and caching of remote images with MKAnnotationView.
 */
@interface MKAnnotationView (SMWebCache)

/**
 * Get the current image URL.
 *
 * Note that because of the limitations of categories this property can get out of sync
 * if you use smSd_setImage: directly.
 */
- (NSURL *)smSd_imageURL;

/**
 * Set the imageView `image` with an `url`.
 *
 * The download is asynchronous and cached.
 *
 * @param url The url for the image.
 */
- (void)smSd_setImageWithURL:(NSURL *)url;

/**
 * Set the imageView `image` with an `url` and a placeholder.
 *
 * The download is asynchronous and cached.
 *
 * @param url         The url for the image.
 * @param placeholder The image to be set initially, until the image request finishes.
 * @see smSd_setImageWithURL:placeholderImage:options:
 */
- (void)smSd_setImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholder;

/**
 * Set the imageView `image` with an `url`, placeholder and custom options.
 *
 * The download is asynchronous and cached.
 *
 * @param url         The url for the image.
 * @param placeholder The image to be set initially, until the image request finishes.
 * @param options     The options to use when downloading the image. @see SDWebImageOptions for the possible values.
 */

- (void)smSd_setImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholder options:(SMSDWebImageOptions)options;

/**
 * Set the imageView `image` with an `url`.
 *
 * The download is asynchronous and cached.
 *
 * @param url            The url for the image.
 * @param completedBlock A block called when operation has been completed. This block has no return value
 *                       and takes the requested UIImage as first parameter. In case of error the image parameter
 *                       is nil and the second parameter may contain an NSError. The third parameter is a Boolean
 *                       indicating if the image was retrieved from the local cache or from the network.
 *                       The fourth parameter is the original image url.
 */
- (void)smSd_setImageWithURL:(NSURL *)url completed:(SMSDWebImageCompletionBlock)completedBlock;

/**
 * Set the imageView `image` with an `url`, placeholder.
 *
 * The download is asynchronous and cached.
 *
 * @param url            The url for the image.
 * @param placeholder    The image to be set initially, until the image request finishes.
 * @param completedBlock A block called when operation has been completed. This block has no return value
 *                       and takes the requested UIImage as first parameter. In case of error the image parameter
 *                       is nil and the second parameter may contain an NSError. The third parameter is a Boolean
 *                       indicating if the image was retrieved from the local cache or from the network.
 *                       The fourth parameter is the original image url.
 */
- (void)smSd_setImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholder completed:(SMSDWebImageCompletionBlock)completedBlock;

/**
 * Set the imageView `image` with an `url`, placeholder and custom options.
 *
 * The download is asynchronous and cached.
 *
 * @param url            The url for the image.
 * @param placeholder    The image to be set initially, until the image request finishes.
 * @param options        The options to use when downloading the image. @see SDWebImageOptions for the possible values.
 * @param completedBlock A block called when operation has been completed. This block has no return value
 *                       and takes the requested UIImage as first parameter. In case of error the image parameter
 *                       is nil and the second parameter may contain an NSError. The third parameter is a Boolean
 *                       indicating if the image was retrieved from the local cache or from the network.
 *                       The fourth parameter is the original image url.
 */
- (void)smSd_setImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholder options:(SMSDWebImageOptions)options completed:(SMSDWebImageCompletionBlock)completedBlock;

/**
 * Cancel the current download
 */
- (void)smSd_cancelCurrentImageLoad;

@end


@interface MKAnnotationView (SMWebCacheDeprecated)

- (NSURL *)smImageURL __deprecated_msg("Use `smSd_imageURL`");

- (void)smSetImageWithURL:(NSURL *)url __deprecated_msg("Method deprecated. Use `smSd_setImageWithURL:`");
- (void)smSetImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholder __deprecated_msg("Method deprecated. Use `smSd_setImageWithURL:placeholderImage:`");
- (void)smSetImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholder options:(SMSDWebImageOptions)options __deprecated_msg("Method deprecated. Use `smSd_setImageWithURL:placeholderImage:options:`");

- (void)smSetImageWithURL:(NSURL *)url completed:(SMSDWebImageCompletedBlock)completedBlock __deprecated_msg("Method deprecated. Use `smSd_setImageWithURL:completed:`");
- (void)smSetImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholder completed:(SMSDWebImageCompletedBlock)completedBlock __deprecated_msg("Method deprecated. Use `smSd_setImageWithURL:placeholderImage:completed:`");
- (void)smSetImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholder options:(SMSDWebImageOptions)options completed:(SMSDWebImageCompletedBlock)completedBlock __deprecated_msg("Method deprecated. Use `smSd_setImageWithURL:placeholderImage:options:completed:`");

- (void)smCancelCurrentImageLoad __deprecated_msg("Use `smSd_cancelCurrentImageLoad`");

@end
