//
//  NSDictionary+SMEvent.h
//  MobileSDK
//
//  Created by Samy Ziat on 30/12/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (SMEvent)

/**
 *  @return dictionary filled with longitude / latitude values. Nil if unknown coordinate
 */
+ (instancetype)dictionaryLocationForEvent;

/**
 *  @return dictionary filled for request header authentication payload
 */
+ (instancetype)jwtPayloadDictionaryWithURL:(NSString*)url Method:(NSString*)method AndClientId:(NSString*)clientID;
/**
 *  @return dictionary filled for request header authentication header
 */
+ (instancetype)jwtHeaderDictionary;
@end
