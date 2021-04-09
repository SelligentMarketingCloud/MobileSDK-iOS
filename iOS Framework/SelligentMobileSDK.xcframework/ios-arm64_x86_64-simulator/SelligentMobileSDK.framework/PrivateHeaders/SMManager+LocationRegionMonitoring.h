//
//  SMManager+LocationRegionMonitoring.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 14/12/2016.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import "SMManager.h"
#import "SMLocationTriggerInitiatorType.h"

@class SMRegion;
@interface SMManager (LocationRegionMonitoring)

- (void)SM_startMonitoringSignificantLocationChanges;

- (void)SM_stopMonitoringAllRegions;
-(void) mustResetSuperRegion:(CLRegion*)region;
- (void)processEventDispatch:(SMRegion*)region TriggerInitiatorType:(SMLocationTriggerInitiatorType)triggerInitiatorType;

@end
