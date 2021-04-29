//
//  UIButton+InAppContent.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 30/04/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SMInAppContentStyleOptions.h"

@interface UIButton (InAppContent)

+ (instancetype)button_CloseRedWithTarget:(id)target Selector:(SEL)selector;

+ (instancetype)buttonWithTitle:(NSString*)title AndOptions:(SMInAppContentStyleOptions*)options;
@end
