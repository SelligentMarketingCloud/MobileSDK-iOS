//
//  SellMobileEventType.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 13/05/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

/*!
 * @typedef EventType
 * @brief A list of event that can be triggered by user .
 * @constant kSMEventType_SetInfo set a list of infos at app launch.
 * @constant kSMEventType_InAppOptOut InApp messages permissions have been updated.
 * @constant kSMEventType_ClickButton  User has clicked an alert button.
 * @constant kSMEventType_PushReceived User has received a push notification.
 * @constant kSMEventType_PushOpened User has opened a push notification.
 * @constant kSMEventType_OptOut User optout from push notification.
 * @constant kSMEventType_ChangeLocation User location has changed.
 * @constant kSMEventType_UserRegistration User registered with email.
 * @constant kSMEventType_UserUnregistration User has unregistered.
 * @constant kSMEventType_UserLogin User logged in.
 * @constant kSMEventType_UserLogout User logged out.
 * @constant kSMEventType_UserCustomEvent Any custom event that user could trigger in the app.
 * @constant kSMEventType_ReturnMedia
 * @constant kSMEventType_Cancel User has cancel an action
 * @constant kSMEventType_TriggerExecutionRequest A location tr
 */
typedef enum : NSUInteger
{
    kSMEventType_SetInfo,
    kSMEventType_InAppOptOut,
    //kSMEventType_LocationOptOut,
    kSMEventType_ClickButton,
    kSMEventType_PushReceived,
    kSMEventType_PushOpened,
    //kSMEventType_ChangeLocation,
    kSMEventType_UserRegistration,
    kSMEventType_UserUnregistration,
    kSMEventType_UserLogin,
    kSMEventType_UserLogout,
    kSMEventType_UserCustomEvent,
    kSMEventType_ReturnMedia,
    kSMEventType_Cancel,
    kSMEventType_TriggerExecutionRequest,
    kSMEventType_RegionOnEnter,
    kSMEventType_RegionOnLeave,
} SMEventType;
