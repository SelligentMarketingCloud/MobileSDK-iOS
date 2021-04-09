//
//  NSBundle+SMCapabilities.h
//  MobileSDK
//
//  Created by Samy Ziat on 05/08/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//


/**
 *  Check the following URL for the full list:
 *  https://developer.apple.com/library/ios/documentation/iPhone/Conceptual/iPhoneOSProgrammingGuide/BackgroundExecution/BackgroundExecution.html
 */
@interface NSBundle (SMCapabilities)




+ (BOOL)SM_isBacgroundModeEnable_For_BLE;
+ (BOOL)SM_isBacgroundModeEnable_For_Location;
+ (BOOL)SM_isBacgroundModeEnable_For_Fetch;
+ (BOOL)SM_isBacgroundModeEnable_For_RemoteNotification;



@end
