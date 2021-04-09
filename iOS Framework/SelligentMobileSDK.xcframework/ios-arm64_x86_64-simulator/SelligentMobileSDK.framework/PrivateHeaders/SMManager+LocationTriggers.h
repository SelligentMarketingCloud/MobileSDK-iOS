//
//  SMManager+LocationTriggers.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 18/11/2016.
//  Copyright © 2016 Selligent. All rights reserved.
//


#import "SMManager.h"

#import "SMRegion.h"
#import "SMLocationTriggerInitiatorType.h"

@interface SMManager (LocationTriggers)

- (void)checkTriggersForRegion:(SMRegion*)regionId InitiatorType:(SMLocationTriggerInitiatorType)triggerInitiatorType;


@end
