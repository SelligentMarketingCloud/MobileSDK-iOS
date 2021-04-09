//
//  NSString+SMHTTPRequest.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 23/08/2018.
//  Copyright © 2018 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SMHTTPRequest)

+(instancetype)stringUrlWithBasePath:(NSString*)basePath DynamicPath:(NSString*)dynamicPath Date:(NSString*)date AndDeviceID:(NSString*)deviceID;
@end
