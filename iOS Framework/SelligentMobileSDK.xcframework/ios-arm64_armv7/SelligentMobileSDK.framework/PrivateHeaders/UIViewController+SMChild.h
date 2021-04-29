//
//  UIViewController+Child.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 26/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (SMChild)


- (void)addChildViewController:(UIViewController *)childViewController ToView:(UIView*)parentView;
- (void)addChildViewController:(UIViewController *)childViewController ToView:(UIView*)parentView CanUseAutoLayout:(BOOL)canUseAutolayout;

- (void)removeFromParentViewControllerWithView;

@end
