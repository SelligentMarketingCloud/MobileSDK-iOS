//
//  SMNotificationDisplayType.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 10/02/2017.
//  Copyright © 2017 Selligent. All rights reserved.
//

typedef NS_OPTIONS (NSInteger, SMNotificationDisplayType) {
    
    kSMNotificationDisplayType_Unknown = -2,
    
    kSMNotificationDisplayType_Hidden = -1,

    kSMNotificationDisplayType_Default = 0,
    
    kSMNotificationDisplayType_InApp = 1,
    
};
