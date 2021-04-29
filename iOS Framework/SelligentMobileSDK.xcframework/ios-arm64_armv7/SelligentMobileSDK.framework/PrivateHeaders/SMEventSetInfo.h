//
//  SMEventSetInfo.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 05/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMEventSystem.h"

@interface SMEventSetInfo : SMEventSystem

+ (instancetype)eventWithPushOptOut:(BOOL)pushOptOut;
+ (instancetype)eventWithPushOptOut:(BOOL)pushOptOut Dictionary:(NSDictionary*)dict;
+ (instancetype)eventWithPushOptOut:(BOOL)pushOptOut Dictionary:(NSDictionary*)dict FromUser:(BOOL)fromUser;
@end
