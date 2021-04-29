//
//  NSURLRequest+SMEvent.h
//  MobileSDK
//
//  Created by Samy Ziat on 25/08/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURLRequest (SMEvent)

+ (instancetype)requestWithURLName:(NSString*)urlName ClientID:(NSString*)clientID PrivateKey:(NSString*)privateKey JSONObject:(NSDictionary*)dict;


+ (instancetype)requestWithURL:(NSString*)urlName ClientID:(NSString*)clientID PrivateKey:(NSString*)privateKey ImageData:(NSData*)imageData PostParams:(NSDictionary*)dict;

+ (instancetype)requestWithURLName:(NSString *)urlName ClientID:(NSString*)clientID PrivateKey:(NSString*)privateKey;

@end
