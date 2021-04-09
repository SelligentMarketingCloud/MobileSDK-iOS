//
//  SMManager_Location_Privat.h
//  MobileSDK
//
//  Created by Samy Ziat on 04/12/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

#import "SMManager_Location_Protocol.h"
#import "SMManager_RemoteNotification_Protocol.h"


#import "SMManager+Location.h"
#import "SMManagerSettingLocation_Privat.h"

@class SMRegion;

static NSString *const kSMManagerLocation_SuperRegion = @"SM_L_SuperRegion";

@interface SMManager (Location_Privat) <SMManager_Location_Protocol, CLLocationManagerDelegate, SMManager_RemoteNotification_Protocol>

- (void)configureLocation;
- (void)configureLocationWithSetting:(SMManagerSettingLocation*)setting;
- (void)fetchLocationDatas;
- (void)SM_startMonitoringAllRegions;
- (CLCircularRegion *)getCircularRegion:(SMRegion*)region;

-(void)loadPlotProject:(NSDictionary*)dict Setting:(SMManagerSetting*)setting;
@end
