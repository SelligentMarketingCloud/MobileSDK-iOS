//
//  SMRegionEventSubscription.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 08/11/2016.
//  Copyright © 2016 Selligent. All rights reserved.
//



@interface SMRegionEventSubscription : NSObject

@property (nonatomic) BOOL onEnter;
@property (nonatomic) BOOL onLeave;
@property (nonatomic) NSNumber* onEnterDelay;

+ (instancetype)regionEventSubscriptionFromPayLoad:(NSDictionary*)regionEventSubscriptionPayload;

@end
