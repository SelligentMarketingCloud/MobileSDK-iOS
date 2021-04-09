//
//  NSData+UrlRequest.h
//  MobileSDK
//
//  Created by Samy Ziat on 24/11/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>


extern NSString* const KSMData_BoudaryContent;

@interface NSData (UrlRequest)

+ (instancetype)dataForPostImageWihtImageData:(NSData*)imageData Dict:(NSDictionary*)dict;

@end
