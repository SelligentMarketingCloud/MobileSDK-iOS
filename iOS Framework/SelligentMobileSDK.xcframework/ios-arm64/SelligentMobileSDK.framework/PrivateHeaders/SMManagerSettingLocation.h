//
//  SMManagerSettingLocation.h
//  MobileSDK
//
//  Created by Samy Ziat on 08/12/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SMLocationNature.h"
#import "SMLocationRefreshType.h"

/**
 *  This class allow you to configure the Location service.
 *  Such instance must be created before starting the library.
 */
@interface SMManagerSettingLocation : NSObject




/**
 *  Constructor to be used in order to create the SMManagerSettingLocation instance
 *
 *  @param type The nature of location to monitor
 *  @discussion This constructor inform the library about which region to monitor. It is possible to monitor multiple location nature at the same time by OR-ing them.
 */
//+ (instancetype)settingWithLocationNature:(SMLocationNature)nature;


+ (instancetype)settingWithLocationRefreshType:(SMLocationRefreshType)refreshtype NumberOfRegionToMonitor:(int)numberofregiontomonitor;

//+ (instancetype)settingWithLocationRefreshType:(SMLocationRefreshType)refreshtype Nature:(SMLocationNature)nature;

@end
