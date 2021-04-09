//
//  SMLocationTriggerInitiatorType.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 07/09/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

/*!
 *  #SMLocationTriggerInitiatorType :#
 */
typedef NS_ENUM (NSInteger, SMLocationTriggerInitiatorType) {
    
    /*!
     *  location trigger unknown .
     */
    kSMLocationTrigger_Unknown = 0,
    
    /*!
     *  location trigger enter .
     */
    kSMLocationTrigger_OnEnter = 1,
    
    /*!
     *  location trigger exit .
     */
    kSMLocationTrigger_OnLeave = 2,
    
    /*!
     *  location trigger exit .
     */
    kSMLocationTrigger_OnEnterDelay = 3
    
    
};
