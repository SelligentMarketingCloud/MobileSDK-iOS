//
//  SMManager_UserNotification_Privat.h
//  MobileSDK
//
//  Created by Walter Tricknot on 10/02/2017.
//  Copyright © 2017 Selligent. All rights reserved.
//

#import "SMManager+UserNotification.h"

@interface SMManager (UserNotif_privat)

- (SMNotificationMessage*)retrieveNotificationMessage:(NSDictionary *)userInfo;
- (void)loadAttachmentForUrlString:(NSString *)urlString completionHandler:(void(^)(UNNotificationAttachment *))completionHandler;
- (void)contentComplete;
/**
 * Retrieve the actions defined in the remote notification
 *
 * @return an NSSet with the UNNotificationCategory and UNNotificationActions
 */
- (NSSet*)retrieveNotificationLinks:(SMNotificationMessage *)notificationMessage;

- (void)setExtensionUserDefaults:(SMManagerSetting *)setting;
@end
