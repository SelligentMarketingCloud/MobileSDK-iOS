//
//  SMManager+InApp.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 18/03/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import "SMManager.h"

@class SMManagerSettingIAM;
@class SMManagerSettingIAC;

@interface SMManager (InApp)

- (void)configureInAppWithSetting:(SMManagerSettingIAC*)iacSetting IAMSetting:(SMManagerSettingIAM*) iamSetting;
@end
