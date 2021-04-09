//
//  SMManager_Location_Protocol.h
//  MobileSDK
//
//  Created by Samy Ziat on 04/12/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@import CoreLocation;
#import "SMLocationNature.h"
#import "SMLocationRefreshType.h"


@protocol SMManager_Location_Protocol <NSObject>
/**
 *  This represents the minimum treshold distance to send SMEventLocation
 *  SMEventLocation will NOT be sent if the distance is smaller than this treshold
 */
@property (nonatomic) CLLocationDistance distanceMin;
@property (nonatomic) SMLocationNature natureLocation;

/*!  Location refresh type*/
@property (nonatomic) SMLocationRefreshType refreshLocationType;

@property (nonatomic, strong) CLLocationManager *locationManager;


//  Must be saved
@property (nonatomic, strong) CLLocation *locationCurrent;


/*!  Location last fetch date*/
@property (nonatomic, strong) NSDate *dateLocationlastfetch;

@property (nonatomic, strong) NSMutableArray *regionsGeofences;
@property (nonatomic, strong) NSMutableDictionary *triggersGeofences;

@property (nonatomic, strong) NSDate *currentTriggerDate;
@property (nonatomic) int numberOfRegionToMonitor;
@property (nonatomic, strong) CLCircularRegion *superRegion;
@end
