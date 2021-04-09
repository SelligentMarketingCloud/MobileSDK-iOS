//
//  NSUserDefaults+AppGroup.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 19/07/2018.
//  Copyright © 2018 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSUserDefaults (AppGroup)

+ (instancetype)appGroupUserDefaults;

-(void) setDeviceId;
-(void)storeAppGroupReceivedMessageId:(NSString*)messageId;
-(void)storeAppGroupOpenedMessageId:(NSString*)messageId;

-(NSString*) deviceId;

-(NSMutableSet*)appGroupNotificationSendEventReceivedSet;
-(BOOL)checkIfEventReceivedAlreadySentForMessageId:(NSString*)messageId;

-(NSMutableSet*)appGroupNotificationSendEventOpenedSet;
-(BOOL)checkIfEventOpenedAlreadySentForMessageId:(NSString*)messageId;
@end
