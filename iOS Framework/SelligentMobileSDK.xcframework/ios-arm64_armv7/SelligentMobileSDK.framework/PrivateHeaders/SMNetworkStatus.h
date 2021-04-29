//
//  SMNetworkStatus.h
//  MobileSDK
//
//  Created by Samy Ziat on 06/11/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

typedef NS_ENUM(NSInteger, SMNetworkStatus) {
    kSMNetworkStatus_NotReachable = 0,
    kSMNetworkStatus_ReachableViaWiFi,
    kSMNetworkStatus_ReachableViaWWAN
};