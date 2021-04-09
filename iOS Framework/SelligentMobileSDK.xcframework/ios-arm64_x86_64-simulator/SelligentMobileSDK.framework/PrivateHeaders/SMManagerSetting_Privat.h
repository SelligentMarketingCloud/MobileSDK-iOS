//
//  SMManagerSetting_Privat.h
//  MobileSDK
//
//  Created by Gauthier Dumont on 12/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMManagerSetting.h"

@interface SMManagerSetting ()
+ (instancetype)sharedInstance;
@property (nonatomic, strong) NSString *urlName;
@property (nonatomic, strong) NSString *clientID;
@property (nonatomic, strong) NSString *privateKey;
@property (nonatomic, strong) NSString *encryptionKey;
@property (nonatomic, strong) SMManagerSettingIAM *settingIAM;
@property (nonatomic, strong) SMManagerSettingIAC *settingIAC;
@property (nonatomic, strong) NSString *settingUserAgent;
@property (nonatomic) BOOL enableGeoLocation;

@end
