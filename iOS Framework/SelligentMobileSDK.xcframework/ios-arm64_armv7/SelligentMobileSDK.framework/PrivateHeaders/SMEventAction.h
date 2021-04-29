//
//  SMAction.h
//  MobileSDK
//
//  Created by Gauthier Dumont on 05/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMEvent_Private.h"

@interface SMEventAction : SMEvent

+ (instancetype)eventActionWithType:(SMEventType)type PushID:(NSString*)pushID DictDataFromPlatform:(NSDictionary*)dict MessageNature:(SMMessageNature)messageNature;
+ (instancetype)eventActionWithType:(SMEventType)type PushID:(NSString*)pushID DictDataFromPlatform:(NSDictionary*)dict MessageNature:(SMMessageNature)messageNature DisplayMode:(SMDisplayMode)displayMode;

@end
