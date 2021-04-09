//
//  UIImage+GIF.h
//  LBGIFImage
//
//  Created by Laurin Brandner on 06.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (SMGIF)

+ (UIImage *)smSd_animatedGIFNamed:(NSString *)name;

+ (UIImage *)smSd_animatedGIFWithData:(NSData *)data;

- (UIImage *)smSd_animatedImageByScalingAndCroppingToSize:(CGSize)size;

@end
