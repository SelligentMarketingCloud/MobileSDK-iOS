/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import "SMSDWebImageCompat.h"
#import "SMSDWebImageManager.h"

/**
 * Integrates SDWebImage async downloading and caching of remote images with UIButtonView.
 */
@interface UIButton (SMWebCache)

/**
 * Get the current image URL.
 */
- (NSURL *)smSd_currentImageURL;

/**
 * Get the image URL for a control state.
 * 
 * @param state Which state you want to know the URL for. The values are described in UIControlState.
 */
- (NSURL *)smSd_imageURLForState:(UIControlState)state;

/**
 * Set the imageView `image` with an `url`.
 *
 * The download is asynchronous and cached.
 *
 * @param url   The url for the image.
 * @param state The state that uses the specified title. The values are described in UIControlState.
 */
- (void)smSd_setImageWithURL:(NSURL *)url forState:(UIControlState)state;

/**
 * Set the imageView `image` with an `url` and a placeholder.
 *
 * The download is asynchronous and cached.
 *
 * @param url         The url for the image.
 * @param state       The state that uses the specified title. The values are described in UIControlState.
 * @param placeholder The image to be set initially, until the image request finishes.
 * @see smSd_setImageWithURL:placeholderImage:options:
 */
- (void)smSd_setImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder;

/**
 * Set the imageView `image` with an `url`, placeholder and custom options.
 *
 * The download is asynchronous and cached.
 *
 * @param url         The url for the image.
 * @param state       The state that uses the specified title. The values are described in UIControlState.
 * @param placeholder The image to be set initially, until the image request finishes.
 * @param options     The options to use when downloading the image. @see SDWebImageOptions for the possible values.
 */
- (void)smSd_setImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder options:(SMSDWebImageOptions)options;

/**
 * Set the imageView `image` with an `url`.
 *
 * The download is asynchronous and cached.
 *
 * @param url            The url for the image.
 * @param state          The state that uses the specified title. The values are described in UIControlState.
 * @param completedBlock A block called when operation has been completed. This block has no return value
 *                       and takes the requested UIImage as first parameter. In case of error the image parameter
 *                       is nil and the second parameter may contain an NSError. The third parameter is a Boolean
 *                       indicating if the image was retrieved from the local cache or from the network.
 *                       The fourth parameter is the original image url.
 */
- (void)smSd_setImageWithURL:(NSURL *)url forState:(UIControlState)state completed:(SMSDWebImageCompletionBlock)completedBlock;

/**
 * Set the imageView `image` with an `url`, placeholder.
 *
 * The download is asynchronous and cached.
 *
 * @param url            The url for the image.
 * @param state          The state that uses the specified title. The values are described in UIControlState.
 * @param placeholder    The image to be set initially, until the image request finishes.
 * @param completedBlock A block called when operation has been completed. This block has no return value
 *                       and takes the requested UIImage as first parameter. In case of error the image parameter
 *                       is nil and the second parameter may contain an NSError. The third parameter is a Boolean
 *                       indicating if the image was retrieved from the local cache or from the network.
 *                       The fourth parameter is the original image url.
 */
- (void)smSd_setImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder completed:(SMSDWebImageCompletionBlock)completedBlock;

/**
 * Set the imageView `image` with an `url`, placeholder and custom options.
 *
 * The download is asynchronous and cached.
 *
 * @param url            The url for the image.
 * @param state          The state that uses the specified title. The values are described in UIControlState.
 * @param placeholder    The image to be set initially, until the image request finishes.
 * @param options        The options to use when downloading the image. @see SDWebImageOptions for the possible values.
 * @param completedBlock A block called when operation has been completed. This block has no return value
 *                       and takes the requested UIImage as first parameter. In case of error the image parameter
 *                       is nil and the second parameter may contain an NSError. The third parameter is a Boolean
 *                       indicating if the image was retrieved from the local cache or from the network.
 *                       The fourth parameter is the original image url.
 */
- (void)smSd_setImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder options:(SMSDWebImageOptions)options completed:(SMSDWebImageCompletionBlock)completedBlock;

/**
 * Set the backgroundImageView `image` with an `url`.
 *
 * The download is asynchronous and cached.
 *
 * @param url   The url for the image.
 * @param state The state that uses the specified title. The values are described in UIControlState.
 */
- (void)smSd_setBackgroundImageWithURL:(NSURL *)url forState:(UIControlState)state;

/**
 * Set the backgroundImageView `image` with an `url` and a placeholder.
 *
 * The download is asynchronous and cached.
 *
 * @param url         The url for the image.
 * @param state       The state that uses the specified title. The values are described in UIControlState.
 * @param placeholder The image to be set initially, until the image request finishes.
 * @see smSd_setImageWithURL:placeholderImage:options:
 */
- (void)smSd_setBackgroundImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder;

/**
 * Set the backgroundImageView `image` with an `url`, placeholder and custom options.
 *
 * The download is asynchronous and cached.
 *
 * @param url         The url for the image.
 * @param state       The state that uses the specified title. The values are described in UIControlState.
 * @param placeholder The image to be set initially, until the image request finishes.
 * @param options     The options to use when downloading the image. @see SDWebImageOptions for the possible values.
 */
- (void)smSd_setBackgroundImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder options:(SMSDWebImageOptions)options;

/**
 * Set the backgroundImageView `image` with an `url`.
 *
 * The download is asynchronous and cached.
 *
 * @param url            The url for the image.
 * @param state          The state that uses the specified title. The values are described in UIControlState.
 * @param completedBlock A block called when operation has been completed. This block has no return value
 *                       and takes the requested UIImage as first parameter. In case of error the image parameter
 *                       is nil and the second parameter may contain an NSError. The third parameter is a Boolean
 *                       indicating if the image was retrieved from the local cache or from the network.
 *                       The fourth parameter is the original image url.
 */
- (void)smSd_setBackgroundImageWithURL:(NSURL *)url forState:(UIControlState)state completed:(SMSDWebImageCompletionBlock)completedBlock;

/**
 * Set the backgroundImageView `image` with an `url`, placeholder.
 *
 * The download is asynchronous and cached.
 *
 * @param url            The url for the image.
 * @param state          The state that uses the specified title. The values are described in UIControlState.
 * @param placeholder    The image to be set initially, until the image request finishes.
 * @param completedBlock A block called when operation has been completed. This block has no return value
 *                       and takes the requested UIImage as first parameter. In case of error the image parameter
 *                       is nil and the second parameter may contain an NSError. The third parameter is a Boolean
 *                       indicating if the image was retrieved from the local cache or from the network.
 *                       The fourth parameter is the original image url.
 */
- (void)smSd_setBackgroundImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder completed:(SMSDWebImageCompletionBlock)completedBlock;

/**
 * Set the backgroundImageView `image` with an `url`, placeholder and custom options.
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
- (void)smSd_setBackgroundImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder options:(SMSDWebImageOptions)options completed:(SMSDWebImageCompletionBlock)completedBlock;

/**
 * Cancel the current image download
 */
- (void)smSd_cancelImageLoadForState:(UIControlState)state;

/**
 * Cancel the current backgroundImage download
 */
- (void)smSd_cancelBackgroundImageLoadForState:(UIControlState)state;

@end


@interface UIButton (SMWebCacheDeprecated)

- (NSURL *)currentImageURL __deprecated_msg("Use `smSd_currentImageURL`");
- (NSURL *)imageURLForState:(UIControlState)state __deprecated_msg("Use `smSd_imageURLForState:`");

- (void)setImageWithURL:(NSURL *)url forState:(UIControlState)state __deprecated_msg("Method deprecated. Use `smSd_setImageWithURL:forState:`");
- (void)setImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder __deprecated_msg("Method deprecated. Use `smSd_setImageWithURL:forState:placeholderImage:`");
- (void)setImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder options:(SMSDWebImageOptions)options __deprecated_msg("Method deprecated. Use `smSd_setImageWithURL:forState:placeholderImage:options:`");

- (void)setImageWithURL:(NSURL *)url forState:(UIControlState)state completed:(SMSDWebImageCompletedBlock)completedBlock __deprecated_msg("Method deprecated. Use `smSd_setImageWithURL:forState:completed:`");
- (void)setImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder completed:(SMSDWebImageCompletedBlock)completedBlock __deprecated_msg("Method deprecated. Use `smSd_setImageWithURL:forState:placeholderImage:completed:`");
- (void)setImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder options:(SMSDWebImageOptions)options completed:(SMSDWebImageCompletedBlock)completedBlock __deprecated_msg("Method deprecated. Use `smSd_setImageWithURL:forState:placeholderImage:options:completed:`");

- (void)setBackgroundImageWithURL:(NSURL *)url forState:(UIControlState)state __deprecated_msg("Method deprecated. Use `smSd_setBackgroundImageWithURL:forState:`");
- (void)setBackgroundImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder __deprecated_msg("Method deprecated. Use `smSd_setBackgroundImageWithURL:forState:placeholderImage:`");
- (void)setBackgroundImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder options:(SMSDWebImageOptions)options __deprecated_msg("Method deprecated. Use `smSd_setBackgroundImageWithURL:forState:placeholderImage:options:`");

- (void)setBackgroundImageWithURL:(NSURL *)url forState:(UIControlState)state completed:(SMSDWebImageCompletedBlock)completedBlock __deprecated_msg("Method deprecated. Use `smSd_setBackgroundImageWithURL:forState:completed:`");
- (void)setBackgroundImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder completed:(SMSDWebImageCompletedBlock)completedBlock __deprecated_msg("Method deprecated. Use `smSd_setBackgroundImageWithURL:forState:placeholderImage:completed:`");
- (void)setBackgroundImageWithURL:(NSURL *)url forState:(UIControlState)state placeholderImage:(UIImage *)placeholder options:(SMSDWebImageOptions)options completed:(SMSDWebImageCompletedBlock)completedBlock __deprecated_msg("Method deprecated. Use `smSd_setBackgroundImageWithURL:forState:placeholderImage:options:completed:`");

- (void)cancelCurrentImageLoad __deprecated_msg("Use `smSd_cancelImageLoadForState:`");
- (void)cancelBackgroundImageLoadForState:(UIControlState)state __deprecated_msg("Use `smSd_cancelBackgroundImageLoadForState:`");

@end
