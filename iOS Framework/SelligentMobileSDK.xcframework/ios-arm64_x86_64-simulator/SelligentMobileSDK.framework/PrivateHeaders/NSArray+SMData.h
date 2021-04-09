//
//  NSArray+SMData.h
//  MobileSDK
//
//  Created by Samy Ziat on 19/08/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (SMData)


- (instancetype)createArrayNotifButtonData;
- (instancetype)createArrayNotifButtonDataWithKey:(NSString*)key AndIv:(NSString*)iv;

- (instancetype)createArrayNotifAnnotationData;

- (instancetype)createArrayWeekScheduleTrigger;

- (instancetype)createArrayRegionCoordinate;

- (NSString*) jsonStringWithPrettyPrint:(BOOL)prettyPrint;

@end
