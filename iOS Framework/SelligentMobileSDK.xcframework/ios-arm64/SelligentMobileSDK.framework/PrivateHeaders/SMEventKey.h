//
//  SMEventKey.h
//  MobileSDK
//
//  Created by Samy Ziat on 30/12/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

static NSString *const kSMEvent_PUSHOPTOUT           = @"OptOut";
static NSString *const kSMEvent_IAOPTOUT             = @"InAppOptOut";
static NSString *const kSMEvent_SETINFOIAMOPTOUT     = @"IAMOptOut";
static NSString *const kSMEvent_SETINFOIACOPTOUT     = @"IACOptOut";
static NSString *const kSMEvent_GEOFENCINGOPTOUT     = @"GeofencingOptOut";
static NSString *const kSMEvent_LOCATIONPERMISSION   = @"LocationPermission";

static NSString *const kSMEvent_PushID               = @"PushID";
static NSString *const kSMEvent_PLATFORM_NAME        = @"PlatformName";
static NSString *const kSMEvent_DEVICE_TOKEN         = @"DeviceToken";
static NSString *const kSMEvent_SYSTEM_VERSION       = @"SystemVersion";
static NSString *const kSMEvent_DEVICE_TYPE          = @"DeviceType";
static NSString *const kSMEvent_TIMEZONE             = @"TimeZone";
static NSString *const kSMEvent_SDK_VERSION          = @"SDKVersion";
static NSString *const kSMEvent_COUNTRY              = @"Country";
static NSString *const kSMEvent_EMAIL                = @"Email";
static NSString *const kSMEvent_MSG_ADDITIONAL_PARAM = @"Data";
static NSString *const kSMEvent_BTN_ADDITIONAL_PARAM = @"BtnData";
static NSString *const kSMEvent_ACTION               = @"Action";
static NSString *const kSMEvent_DEVICEID             = @"DeviceID";
static NSString *const kSMEvent_DEVICETIMESTAMP      = @"Time";
static NSString *const kSMEvent_BUTTONID             = @"BtnID";
static NSString *const kSMEvent_BUTTONLABEL          = @"BtnLabel";
static NSString *const kSMEvent_MEDIACONTENT         = @"MediaContent";
static NSString *const kSMEvent_MediaItem            = @"Medias";
static NSString *const kSMEvent_MEDIATYPE            = @"MediaType";
static NSString *const kSMEvent_TEXTUSER             = @"MediaText";
static NSString *const kSMEvent_DEVICENAME           = @"Identity";
static NSString *const kSMEvent_IsInAppMessage       = @"IsIAM";
static NSString *const kSMEvent_IsInAppContent       = @"IsIAC";
static NSString *const kSMEvent_DisplayMode          = @"DisplayMode";
static NSString *const kSMEvent_FromUser             = @"FromUser";


/*Region*/
static NSString *const kSMEvent_RegionId      = @"RegionId";


/*TriggerExecutionRequest*/
static NSString *const kSMEvent_TriggerExecutionInitiatorType = @"InitiatorType";
static NSString *const kSMEvent_TriggerExecutionSourceRegionId = @"SourceRegionId";
static NSString *const kSMEvent_TriggerExecutionTriggerId = @"TriggerId";


/*This is not asked by the back-end for the moment but sent anyway if available in SetInfo --> to be checked*/
static NSString *const kSMEvent_Location  = @"Location";
static NSString *const kSMEvent_Latitude  = @"Lat";
static NSString *const kSMEvent_Longitude = @"Lng";

/*sg-click url*/
static NSString *const kSMEvent_SgClickURL             = @"sg_click";
static NSString *const kSMEvent_SgViewURL            = @"sg_view";
