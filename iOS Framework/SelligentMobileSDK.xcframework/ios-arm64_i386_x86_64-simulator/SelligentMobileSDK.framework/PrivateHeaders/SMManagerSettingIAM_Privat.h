//
//  SMManagerSettingIAM_Privat.h
//  MobileSDK
//
//  Created by Samy Ziat on 30/09/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMManagerSettingIAM.h"

@interface SMManagerSettingIAM ()



/**
 * If set to TRUE, it will activate UIApplication-BackGround-Fetch-mode automaticly
 *  Used for background-mode only
 */
@property (nonatomic) BOOL shouldBackgroundFetchIAM;


/**
 *  The minimum duration for querying the back-end
 *  Used for foreground-mode only
 */
@property (nonatomic) SMInAppRefreshType refreshIAMType;




@end
