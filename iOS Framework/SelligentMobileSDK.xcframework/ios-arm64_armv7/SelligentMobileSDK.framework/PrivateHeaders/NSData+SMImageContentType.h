//
// Created by Fabrice Aneche on 06/01/14.
// Copyright (c) 2014 Dailymotion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (SMImageContentType)

/**
 *  Compute the content type for an image data
 *
 *  @param data the input data
 *
 *  @return the content type as string (i.e. image/jpeg, image/gif)
 */
+ (NSString *)smSd_contentTypeForImageData:(NSData *)data;

@end


@interface NSData (SMImageContentTypeDeprecated)

+ (NSString *)smContentTypeForImageData:(NSData *)data __deprecated_msg("Use `smSd_contentTypeForImageData:`");

@end
