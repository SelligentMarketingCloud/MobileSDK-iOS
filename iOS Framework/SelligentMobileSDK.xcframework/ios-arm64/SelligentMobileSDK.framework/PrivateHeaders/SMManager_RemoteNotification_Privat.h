//
//  SMManager_RemoteNotification_Privat.h
//  MobileSDK
//
//  Created by Samy Ziat on 25/09/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMManager+RemoteNotification.h"


@interface SMManager (RemoteNotif_privat)
- (void)sendSetInfoWithRegistrationState:(BOOL)currentRegistrationState;
- (void)updateCurrentRemoteNotificationRegistrationSetting;
- (void)updateCurrentRemoteNotificationRegistrationSettingWithDict:(NSData*)deviceToken;
- (void)registerDeviceTokenAfterReload ;
- (void)didReceiveRemoteNotification:(NSDictionary *)userInfo FromLaunchOption:(bool)fromLaunchOption;
- (BOOL)isRegisteredForSelligentRemoteNotification;
@end
