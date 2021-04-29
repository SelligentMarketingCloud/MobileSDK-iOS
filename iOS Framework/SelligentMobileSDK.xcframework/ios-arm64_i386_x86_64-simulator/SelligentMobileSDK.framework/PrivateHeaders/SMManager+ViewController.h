//
//  SMManager+ViewController.h
//  MobileSDK
//
//  Created by Gauthier Dumont on 07/07/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMManager_Private.h"
#import "SMInAppContentImageViewController.h"

@class SMNotificationMessage;
@class SMNotificationButtonData;

@interface SMManager (ViewController)

- (void)displayRemoteNotificationFromSMNotificationMessage:(SMNotificationMessage*)notificationMessage;
- (void)displayRemoteNotificationFromSMNotificationMessage:(SMNotificationMessage*)notificationMessage ForceDisplay:(bool) forceDisplay;
- (void)replaceCurrentViewControllerWithNotifButtonData:(SMNotificationButtonData*)notifButtonData;
- (void)replaceCurrentViewControllerWithNotifButtonData:(SMNotificationButtonData*)notifButtonData ParentViewController:(UIViewController*)viewController;
- (void)displaySMIACController: (SMInAppContentViewController*)smViewController InContainerView:(UIView*)containerView OfParentViewController:(UIViewController*)parentViewController;

@end
