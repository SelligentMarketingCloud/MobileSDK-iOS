//
//  NSDate+SMClearCache.h
//  MobileSDK
//
//  Created by Samy Ziat on 09/10/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SMClearCache.h"
#import "SMInAppRefreshType.h"
#import "SMLocationRefreshType.h"

@interface NSDate (SMDateEnumeration)

+ (NSDate*)dateAccording2CacheOption:(SMClearCache)cacheOption;

+ (NSDate*)dateAccording2IARefreshType:(SMInAppRefreshType)refreshType;

+ (NSDate*)dateAccording2LocationRefreshType:(SMLocationRefreshType)refreshType;

@end
