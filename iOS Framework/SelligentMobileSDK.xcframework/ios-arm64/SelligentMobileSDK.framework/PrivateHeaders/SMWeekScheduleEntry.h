//
//  SMWeekScheduleEntry.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 08/11/2016.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SMDayOfTheWeek.h"

@interface SMWeekScheduleEntry : NSObject

@property (nonatomic) SMDayOfTheWeek dayOfWeek;
@property (nonatomic) NSNumber* startTime;
@property (nonatomic) NSNumber* endTime;

+ (instancetype)weekScheduleEntryFromDict:(NSDictionary*)weekScheduleEntryDict;

@end
