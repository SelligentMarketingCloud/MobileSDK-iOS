//
//  SellMobileSDK+RemoteNotification.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 17/04/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMManager.h"

@interface SMManager (Utility)


- (void)registerRemoteNotification;

- (void)manageRemoteNotificationWithApplicationState:(NSDictionary*)userInfo;

@end

