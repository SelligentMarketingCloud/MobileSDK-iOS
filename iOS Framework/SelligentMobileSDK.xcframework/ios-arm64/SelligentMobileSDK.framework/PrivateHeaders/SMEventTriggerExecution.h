//
//  SMEventTriggerExecution.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 23/11/2016.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import "SMEvent_Private.h"
#import "SMLocationTriggerInitiatorType.h"

@interface SMEventTriggerExecution : SMEvent

+ (instancetype)eventTriggerExecutionRequest:(SMLocationTriggerInitiatorType)triggerInitiatorType ForTrigger:(NSString*)triggerId AndRegion:(NSString*)regionId;

@end
