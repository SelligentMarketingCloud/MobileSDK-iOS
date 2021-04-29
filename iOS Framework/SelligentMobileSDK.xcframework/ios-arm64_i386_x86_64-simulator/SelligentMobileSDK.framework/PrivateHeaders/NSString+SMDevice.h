//
//  NSString+SMDevice.h
//  MobileSDK
//
//  Created by Gauthier Dumont on 12/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SMDevice)




+ (NSString *)systemDeviceType;


/*!
 *  Return unique UUID for all applicaiton -- saved on the iOS-device-keychain
 *
 *  @return NSString new instance with the unique identifier
 */
+ (NSString*)stringWithUniqueDeviceIdentifier;
    
+ (void)registerUniqueDeviceIdentifier:(NSString*)deviceIdentifier;

+ (NSString *)hexStringFromData:(NSData *)data;

@end
