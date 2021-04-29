//
//  NSDictionary+JSON.h
//  MobileSDK
//
//  Created by Samy Ziat on 21/08/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSDictionary (SMJSONCheck)

- (id)idForKey:(NSString*)key;
- (int)intForKey:(NSString*)key;
- (float)floatForKey:(NSString*)key;
- (BOOL)boolForKey:(NSString*)key;

- (NSNumber*)numberForKey:(NSString*)key;
- (NSString*)stringForKey:(NSString*)key;
- (NSArray*)arrayForKey:(NSString*)key;
- (NSDictionary*)dictionaryForKey:(NSString*)key;
- (NSDate*)dateForKey:(NSString*)key;
- (NSDate *)dateFormatterForKey:(NSString *)key;
- (NSNumber*)secondsForKey:(NSString *)key;
- (NSString*)jsonStringWithPrettyPrint:(BOOL)prettyPrint;

@end
