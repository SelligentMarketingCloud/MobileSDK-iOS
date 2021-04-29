//
//  NSDictionary+SMHandleNil.m
//  MobileSDK
//
//  Created by Samy Ziat on 25/08/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "NSMutableDictionary+SMHandleNil.h"

@implementation NSMutableDictionary (SMHandleNil)

- (void)AddObject:(id)obj ForKey:(NSString*)key {
    if (obj && key)
        [self setObject:obj forKey:key];
}

@end
