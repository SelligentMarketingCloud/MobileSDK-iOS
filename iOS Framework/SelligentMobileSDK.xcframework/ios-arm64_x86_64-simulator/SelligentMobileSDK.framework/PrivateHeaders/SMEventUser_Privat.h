//
//  SMEventUser_Privat.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 10/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMEvent_Private.h"
#import "SMEventUser.h"

@interface SMEventUser ()

@property (nonatomic, strong) NSString *mail;

+ (instancetype)eventType:(SMEventType)type Mail:(NSString*)mail Dictionary:(NSDictionary*)dict;

@end
