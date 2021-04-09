//
//  SMEventSystem.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 05/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMEvent_Private.h"

#import "NSMutableDictionary+SMHandleNil.h"

@interface SMEventSystem : SMEvent

+ (instancetype)eventType:(SMEventType)type Dictionary:(NSDictionary*)dict;

@end
