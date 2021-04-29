//
//  SMManagerSettingIAC_Privat.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 11/03/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import "SMManagerSettingIAC.h"

@interface SMManagerSettingIAC ()



/**
 * If set to TRUE, it will activate UIApplication-BackGround-Fetch-mode automaticly
 *  Used for background-mode only
 */
@property (nonatomic) BOOL shouldBackgroundFetchIAC;


/**
 *  The minimum duration for querying the back-end
 *  Used for foreground-mode only
 */
@property (nonatomic) SMInAppRefreshType refreshIACType;




@end