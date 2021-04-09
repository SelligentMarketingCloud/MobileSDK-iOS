//
//  SMManager_RemoteNotification_Protocol.h
//  MobileSDK
//
//  Created by Samy Ziat on 21/10/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SMManager_RemoteNotification_Protocol <NSObject>

/*! \return FilePath of the SDK-startingUp-configuration */
@property (nonatomic, strong) NSString *filePathSDKStartUp;

/*! boolean indicating is application is registered to remote-notification from os settings */
@property (nonatomic) BOOL isRegistered4RemoteNotification;

/*! boolean indicating is application is registered to remote-notification from inside app*/
@property (nonatomic) BOOL isRegistered4RemoteNotificationFromApp;

/*! current sdk version */
@property (nonatomic, strong) NSString *currentSDKVersion;

/*! current country */
@property (nonatomic, strong) NSString *currentCountry;

/*! current timezone */
@property (nonatomic, strong) NSString *currentTimezone;

/*! current device name */
@property (nonatomic, strong) NSString *currentDeviceName;

/*! current IOS version */
@property (nonatomic, strong) NSString *currentIOSVersion;
@end
