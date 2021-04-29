//
//  SMPushRecieved.h
//  MobileSDK
//
//  Created by Gauthier Dumont on 05/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMEventAction.h"

@interface SMEventPushReceived : SMEventAction


+ (instancetype)eventWithPushID:(NSString*)pushID MessageNature:(SMMessageNature)messageNature;
+ (instancetype)eventWithPushID:(NSString*)pushID Dictionary:(NSDictionary*)dict MessageNature:(SMMessageNature)messageNature;


@end
