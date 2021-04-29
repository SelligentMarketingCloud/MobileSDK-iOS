//
//  SMNotificationMessageType.h
//  MobileSDK
//
//  Created by Gauthier Dumont on 07/07/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

typedef NS_ENUM (NSInteger, SMNotificationMessageType){
    
    /*!
     *  In App message of unknown type.
     */
    kSMNotificationMessageType_Unknown = -2,
    
    /*!
     *  In App message of hidden type.
     */
    kSMNotificationMessageType_Hidden = -1,
    
    /*!
     *  In App message of alert type.
     */
    kSMNotificationMessageType_Alert = 0,
    
    /*!
     *  In App message of html type.
     */
    kSMNotificationMessageType_HTML = 1,
    
    /*!
     *  In App message of url type.
     */
    kSMNotificationMessageType_Url = 2,
    
    /*!
     *  In App message of image type.
     */
    kSMNotificationMessageType_Image = 3,
    
    /*!
     *  In App message of map type.
     */
    kSMNotificationMessageType_Map = 4,
    
    /*!
     *  In App message of passbook type.
     */
    kSMNotificationMessageType_Passbook = 5
};
