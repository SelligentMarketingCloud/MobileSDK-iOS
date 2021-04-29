//
//  NSMutableAttributedString+SMAttachment.h
//  MobileSDK
//
//  Created by Samy Ziat on 08/09/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UIImage;

@interface NSMutableAttributedString (SMAttachment)

+ (instancetype)stringWithText:(NSString*)text Attachment:(UIImage *)image;

@end
