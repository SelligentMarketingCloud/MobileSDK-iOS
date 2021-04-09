//
//  SMEventRegionOnLeave.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 27/09/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import "SMEvent_Private.h"

@interface SMEventRegionOnLeave : SMEvent

+ (instancetype)eventRegionOnLeave:(NSString*)region;
+ (instancetype)eventRegionOnLeave:(NSString*)region AndTimeSpent:(NSString*)timeSpent;

@end
