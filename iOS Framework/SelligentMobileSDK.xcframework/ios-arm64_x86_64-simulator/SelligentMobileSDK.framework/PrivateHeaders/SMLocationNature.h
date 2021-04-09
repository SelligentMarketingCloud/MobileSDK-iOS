//
//  SMLocationNature.h
//  MobileSDK
//
//  Created by Samy Ziat on 15/12/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

typedef NS_OPTIONS (NSInteger, SMLocationNature) {
    kSMLocationNature_None = 0,
    kSMLocationNature_Region,
    kSMLocationNature_Beacon,
    kSMLocationNature_All = 0xFF
};
