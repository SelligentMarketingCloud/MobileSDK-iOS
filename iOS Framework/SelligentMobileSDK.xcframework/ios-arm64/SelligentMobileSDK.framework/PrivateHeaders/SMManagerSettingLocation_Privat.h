//
//  SMManagerSettingLocation_Privat.h
//  MobileSDK
//
//  Created by Samy Ziat on 18/12/15.
//  Copyright © 2015 Selligent. All rights reserved.
//


#import "SMManagerSettingLocation.h"

@interface SMManagerSettingLocation ()

@property (nonatomic) SMLocationNature nature;

/**
 *  The minimum duration for querying the back-end
 *  Used for foreground-mode only
 */
@property (nonatomic) SMLocationRefreshType refreshLocationType;

@property (nonatomic) int numberOfRegionToMonitor;

@end
