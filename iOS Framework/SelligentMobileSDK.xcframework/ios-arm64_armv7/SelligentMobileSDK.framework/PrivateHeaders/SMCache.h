//
//  SMCache.h
//  MobileSDK
//
//  Created by Samy Ziat on 07/10/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SMClearCache.h"
@class SMNotificationMessage;
@class SMInAppMessage;


@interface SMCache : NSObject

@property (nonatomic) SMClearCache clearCacheOption;
@property (nonatomic, strong) NSString *filePathSetIACMessage;
@property (nonatomic, strong) NSMutableSet *iacMessageSet;
@property (nonatomic, strong) NSString *filePathSetRegions;
@property (nonatomic, strong) NSString *filePathSetTriggers;
@property (nonatomic, strong) NSMutableArray *regions;
@property (nonatomic, strong) NSMutableDictionary *triggers;

+ (instancetype)cacheWithIntervalValue:(SMClearCache)clearCacheValue;


//  Clear old notification-message
- (void)clearCache;

//  Add array
- (void)addNotificationMessage:(NSArray*)notificationMessage;

//  Retrieve a specific push
- (SMNotificationMessage*)notificationMessageForID:(NSString*)idMessage;

//  Retrieve inapp messages
- (NSMutableArray*) inAppMessages;
//Update IAM messages
-(void)updateIAMcache:(SMInAppMessage*)message;

//  Add
- (void)receivedRemotePushNotificaiton:(SMNotificationMessage*)notifMessage;

//  Retrieve
- (SMNotificationMessage*)notificationLastReceivedRemotePush;

//PushReceived event management
- (void)addSendEventReceivedMessage:(SMNotificationMessage*)notifMessage;
- (SMNotificationMessage*)notificationSendEventReceivedMessageForID:(NSString*)idMessage;

//PushOpened event management
- (void)addSendEventOpenedMessage:(SMNotificationMessage*)notifMessage;
- (SMNotificationMessage*)notificationSendEventOpenedMessageForID:(NSString*)idMessage;
@end
