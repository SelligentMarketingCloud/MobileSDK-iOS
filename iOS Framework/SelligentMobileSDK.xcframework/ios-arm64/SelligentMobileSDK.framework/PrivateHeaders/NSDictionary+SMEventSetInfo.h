//
//  NSDictionary+SMEventCreation.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 16/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (SMEventSetInfo)

+ (instancetype)dictForSetInfoWithPushOptOut:(BOOL)pushOptOut AndFromUser:(BOOL)fromUser Dict:(NSDictionary*)dict;







@end
