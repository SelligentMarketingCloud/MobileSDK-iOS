//
//  UIBarButtonItem+SMNavBar.h
//  MobileSDK
//
//  Created by Samy Ziat on 02/09/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (SMNavBar)

+ (instancetype)buttonItem_HamburgerWithTarget:(id)target Selector:(SEL)selector;

+ (instancetype)buttonItem_ExitWithTarget:(id)target Selector:(SEL)selector;

+ (instancetype)buttonItem_ValidateWithTarget:(id)target Selector:(SEL)selector;

+ (instancetype)buttonItem_CameraWithTarget:(id)target Selector:(SEL)selector;

+ (instancetype)buttonItem_PhotoLibraryWithTarget:(id)target Selector:(SEL)selector;

+ (instancetype)buttonItem_KeyboardHideWithTarget:(id)target Selector:(SEL)selector;

+ (instancetype)buttonItem_BrowserBackWithTarget:(id)target Selector:(SEL)selector;

+ (instancetype)buttonItem_BrowserForwardWithTarget:(id)target Selector:(SEL)selector;



@end
