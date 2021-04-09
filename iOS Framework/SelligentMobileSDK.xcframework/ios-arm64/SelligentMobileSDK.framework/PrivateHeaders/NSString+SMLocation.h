//
//  NSString+SMLocation.h
//  MobileSDK
//
//  Created by Samy Ziat on 08/12/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@import CoreLocation;

@interface NSString (SMLocation)


+ (instancetype)stringFromCLAuthorizationSatus:(CLAuthorizationStatus)status;
+ (instancetype)stringFromCLRegionState:(CLRegionState)state;

@end
