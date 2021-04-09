//
//  SMTriggerFrequency.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 08/11/2016.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SMTriggerFrequency : NSObject

@property (nonatomic) int maxExecutions;
@property (nonatomic) int maxExecutionByArea;
@property (nonatomic) NSNumber* minTimeBetweenExecutions;

+ (instancetype)triggerFrequencyFromDict:(NSDictionary*)triggerFrequencyDict;
@end
