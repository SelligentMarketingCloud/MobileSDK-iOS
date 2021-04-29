//
//  SMNotificationMessage.h
//  MobileSDK
//
//  Created by Walter Tricknot on 17/01/2017.
//  Copyright © 2017 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SMInAppMessage_Privat.h"
#import "SMNotificationDisplayType.h"
#import "SMNotificationMediaType.h"
#import "SMNotificationButtonData.h"

@interface SMNotificationMessage : SMInAppMessage

@property (nonatomic) NSString     * mediaUrl;
@property (nonatomic) SMNotificationMediaType       mediaType;
@property (nonatomic) SMNotificationButtonData    * mainAction;
@property (nonatomic) NSArray * notificationButtons;
@property (nonatomic) SMNotificationDisplayType  displayType;

//  Default constructor
+ (instancetype)notificationMessageFromPayLoad:(NSDictionary*)notificationPayload;
+ (instancetype)notificationMessageFromPayLoad:(NSDictionary*)notificationPayload WithEncryptionKey:(NSString*)key;

//  return a basic dictionary for client application
- (NSDictionary*)dictionaryFromCurrentNotificationMessage;

@end
