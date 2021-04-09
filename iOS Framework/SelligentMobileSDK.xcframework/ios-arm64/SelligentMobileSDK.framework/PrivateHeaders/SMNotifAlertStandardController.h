//
//  SMNotifAlertStandardController.h
//  MobileSDK
//
//  Created by Samy Ziat on 11/09/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMParentController.h"

@class SMNotificationMessage;
@protocol SMNotifAlertStandardControllerDelegate;



@interface SMNotifAlertStandardController : SMParentController

@property (nonatomic, weak) NSObject <SMNotifAlertStandardControllerDelegate> *delegateController;

+ (instancetype)controllerWithView:(UIView*)viewRoot NotificationMessage:(SMNotificationMessage*)notifMessage;

@end





@protocol SMNotifAlertStandardControllerDelegate <NSObject>
- (void)controllerDidFinish:(SMNotifAlertStandardController*)controller;
- (void)controller:(SMNotifAlertStandardController*)controller Ask2PresentViewController:(UIViewController*)vc Animated:(BOOL)isAnimated;
@end