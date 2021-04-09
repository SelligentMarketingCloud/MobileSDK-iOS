//
//  SMTrigger.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 02/11/2016.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SMRegionEventSubscription.h"
#import "SMWeekScheduleEntry.h"
#import "SMTriggerFrequency.h"


@interface SMTrigger : NSObject


@property (nonatomic) NSString *idTrigger;
@property (nonatomic) NSDate *startDate;
@property (nonatomic) NSDate *endDate;
@property (nonatomic) SMRegionEventSubscription *regionEventSubscription;
@property (nonatomic) NSArray<NSString*> *regionsIds;
@property (nonatomic) NSArray<SMWeekScheduleEntry*> *weekScheduleEntries;
@property (nonatomic) SMTriggerFrequency *frequency;
@property (nonatomic) int executionCount;
@property (nonatomic) NSMutableDictionary* executionCountByArea;
@property (nonatomic) NSDate* lastExecution;

+ (instancetype)triggerFromPayLoad:(NSDictionary*)triggerPayload;

@end
