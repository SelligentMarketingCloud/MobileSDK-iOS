//
//  SMNotificationButtonData_privat.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 16/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMLink.h"
#import "SMNotificationButtonData.h"

#import "SMLink_IAProtocol.h"
#import "SMLink_ForwardDataNotificationMessageProtocol.h"

@protocol SMLink_Delegate;


@class SMBaseMessage;
@interface SMLink () <SMLink_ForwardDataNotificationMessageProtocol, SMLink_IAProtocol>

/**
 *  Internal Data provided by the platefomr that must be sent back
 */
@property (nonatomic, strong) NSDictionary * data;


/**
 *  Default constructor
 */
+ (instancetype)notificationButtonDataWithParameters:(NSDictionary *) buttonInfo;
+ (instancetype)notificationButtonDataWithParameters:(NSDictionary *)buttonInfo AndKey:(NSString*)key AndIv:(NSString*)iv;

/**
 *   constructor for mainaction
 */
+ (instancetype)notificationButtonDataWithMainAction:(NSDictionary *)mainaction;
+ (instancetype)notificationButtonDataWithMainAction:(NSDictionary *)mainaction AndKey:(NSString*)key AndIv:(NSString*)iv;

/**
 *  Call this method to process a buttonData object
 */
- (void)processData;

/**
 *  Call this method to update link with notification message properties and call to processData
 */
- (void)updateLinkAndProcess:(SMBaseMessage*)message;

@end




