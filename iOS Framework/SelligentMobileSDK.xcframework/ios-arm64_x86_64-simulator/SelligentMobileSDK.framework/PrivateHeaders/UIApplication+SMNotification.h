//
//  UIApplication+SMNotification.h
//  MobileSDK
//
//  Created by Samy Ziat on 04/08/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIApplication (SMNotification)

/**
 *  Convenient method checking both iOS7 & iOS8
 *
 *  @return TRUE if device is registered to notificaitons. FALSE otherwise.
 */
+ (BOOL)SM_IsRegisteredForRemoteNotifications;


@end
