//
//  SMLocationRefreshType.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 13/11/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

/*!
 *  #SMLocationRefreshType :#
 */
typedef NS_ENUM(NSInteger, SMLocationRefreshType) {
    /*!
     *  This explicitely disable the Location fetch  mecahnism
     */
    kSMLocation_RefreshType_None,
    /*!
     * Allow to fetch Location hourly
     */
    kSMLocation_RefreshType_Hourly,
    /*!
     * Allow to fetch Location Daily
     */
    kSMLocation_RefreshType_Daily ,
};