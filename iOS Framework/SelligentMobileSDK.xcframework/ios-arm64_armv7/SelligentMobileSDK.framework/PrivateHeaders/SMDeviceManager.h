//
//  SMDeviceManager.h
//  MobileSDK
//
//  Created by Samy Ziat on 27/10/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SMDeviceManager : NSObject

@property (nonatomic, strong) NSString *country;
@property (nonatomic, strong) NSString *timeZone;
@property (nonatomic, strong) NSString *deviceType;
@property (nonatomic, strong) NSString *deviceID;
@property (nonatomic, strong) NSString *iOSVersion;
@property (nonatomic, strong) NSString *deviceName;


+ (instancetype)sharedInstance;

- (void)registerUniqueDeviceIdentifier:(NSString*)deviceIdentifier;
- (void) resetDeviceID;

@end
