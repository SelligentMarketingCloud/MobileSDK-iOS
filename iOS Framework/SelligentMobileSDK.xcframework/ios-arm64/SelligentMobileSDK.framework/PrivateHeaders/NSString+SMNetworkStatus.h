//
//  NSString+SMNetworkStatus.h
//  MobileSDK
//
//  Created by Samy Ziat on 06/11/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SMNetworkStatus.h"

@interface NSString (NetworkStatus)
+ (instancetype)stringFromNetworkStatus:(SMNetworkStatus)netStatus;
@end