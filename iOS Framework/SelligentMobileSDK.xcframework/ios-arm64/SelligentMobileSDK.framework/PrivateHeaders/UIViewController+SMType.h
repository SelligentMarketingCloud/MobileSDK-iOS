//
//  SMViewController+NotificationType.h
//  MobileSDK
//
//  Created by Samy Ziat on 11/08/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SMNotificationMessageType.h"
#import "SMNotificationButtonType.h"
#import "SMInAppContentType.h"



@interface UIViewController (SMType)

+ (Class)class4NotifMessageType:(SMNotificationMessageType)type;

+ (Class)class4NotifButtonType:(SMNotificationButtonType)type;

+ (Class)class4InAppContentType:(SMInAppContentType)type;

@end
