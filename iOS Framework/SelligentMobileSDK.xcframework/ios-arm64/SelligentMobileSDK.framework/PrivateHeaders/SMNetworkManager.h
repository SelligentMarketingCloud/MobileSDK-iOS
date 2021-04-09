//
//  SMNetworkManager.h
//  MobileSDK
//
//  Created by Samy Ziat on 02/10/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//


#import "SMNetworkStatus.h"

/*! Notif -- Inform listeners that Wifi is not reachable */
extern NSString* const kSMNetworkManager_Notif_NetworkStatusDidChange;

/*! Data - The NetworkStatus enumerator */
extern NSString* const kSMNetworkManager_Data_NetworkStatus;




@interface SMNetworkManager : NSObject

+ (instancetype)sharedInstance;


- (BOOL)isWiFiAvailable;

- (BOOL)isNetworkAvailable;

@end
