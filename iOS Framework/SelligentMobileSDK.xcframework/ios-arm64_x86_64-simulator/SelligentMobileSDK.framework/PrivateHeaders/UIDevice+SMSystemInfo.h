//
//  UIDevice+SystemInfo.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 02/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDevice (SMSystemInfo)

/**
 *  Retrieve the curret iOS version
 *
 *  @return NSString instance with the current iOS version. Nil in case of error
 */
+ (NSString*)iosVersion;


/**
 *  Retrieve the current device idiom
 *
 *  @return TRUE if the device is an iPad. FALSE otherwise.
 */
+ (BOOL)isIpad;


+ (BOOL)isIphone;

/**
 *  Retrieve the curret device name
 *
 *  @return NSString instance with the current device name
 */
+ (NSString*)deviceName;

@end
