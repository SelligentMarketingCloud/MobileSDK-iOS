//
//  NSDate+SMUtility.h
//  MobileSDK
//
//  Created by Samy Ziat on 21/08/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (SMUtility)


+ (long long) SM_UTCUnixTimeStamp;

+ (long long) SM_UTCIntervalTimeStamp;

- (long long) SM_UTCUnixTimeStamp;

- (long long) SM_UTCIntervalTimeStamp;

- (BOOL)isLaterThanDate:(NSDate*)date;

- (BOOL)isEarlierThanDate:(NSDate*)date;

- (BOOL)isEarlierThanNSTimeIntervalSince1970;

- (NSNumber*)secondOfTheDay;

- (NSInteger)dayOfTheWeek;

@end
