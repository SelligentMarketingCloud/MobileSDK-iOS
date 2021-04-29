//
//  NSDictionary+SMHandleNil.h
//  MobileSDK
//
//  Created by Samy Ziat on 25/08/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (SMHandleNil)

/**
 *  Perform an existence test that obj and key are not nil
 *  If one of them is nil, the method is escaped.
 */
- (void)AddObject:(id)obj ForKey:(NSString*)key;


@end
