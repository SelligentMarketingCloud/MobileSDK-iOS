//
//  UIImage+SMResize.h
//  TestConstraints
//
//  Created by Samy Ziat on 12/08/15.
//  Copyright (c) 2015 Samy Ziat. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (SMResize)


/**  @return UIImage new instance corresponding to half-width & half-height of the original image */
- (instancetype)scaledToHalf;

/**  @return UIImage new instance with an other resolution size */
- (instancetype)scaledToSize:(CGSize)newSize;

- (instancetype)imageWithRoundedCorner:(CGFloat)radius WithSize:(CGSize)size;
@end
