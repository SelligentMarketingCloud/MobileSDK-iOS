//
//  SMManager_Private.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 03/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <WebKit/WebKit.h>

#import "SMManager.h"

#import "SMCache.h"
#import "SMCache+InAppContent.h"
#import "SMCache+Location.h"
#import "SMHTTPRequest.h"
#import "SMEventSetInfo.h"
#import "SMEventRegister.h"
#import "SMNavigationController.h"
#import "SMInAppContentStyleOptions.h"

@import CoreLocation;

@interface SMManager () <WKNavigationDelegate>

/**
 *  Once a new remote-notification is displayed, the badge is automaticly reseted.
 *  Should you want to handle this property yourself, you can set this property to FALSE before starting the library
 *  Default value is set to TRUE
 */
@property (nonatomic) BOOL shouldClearBadge;

/**
 *  When the app is active, once a new remote-notification is received, it is automaticly diplayed on the device
 *  Should you want to prevent that behaviour, you can set this property to FALSE before starting the library.
 *  Default value is set to TRUE.
 *  @warning This property does not have an impact when app is open from a notification selected by user in notification center or when [SMManager(RemoteNotification) displayNotificationID:] or  [SMManager(RemoteNotification) displayLastReceivedRemotePushNotification] are called.
    Once you set this value to TRUE, the application becomes responsable about displaying the remote-notification. (Make sure to read the header file of SMManagerSetting before doing so). 
 */
@property (nonatomic) BOOL shouldDisplayRemoteNotification;


/**
 *  @return TRUE if the SDK was correctly started. FALSE otherwise
 */
@property (nonatomic) BOOL isSDKConfigured;

//@property (nonatomic) BOOL isIAMConfigured;
//@property (nonatomic) BOOL isIACConfigured;

@property (nonatomic) BOOL deviceIsRegistered;

/*!  token retrieved from the APNS */
@property (nonatomic, strong) NSData *deviceToken;

@property (nonatomic) CLAuthorizationStatus authorisationStatusLocationCurrent;

/*! current device infos */
@property (nonatomic, strong) NSString *externalId;

/*!
 *  Dictionary-payload must be stored in case a view was not assigned to window yet
 */
@property (nonatomic, strong) NSDictionary* dictNotificationPayload;


/**
 *  The navigation controller responsable about displaying all SMViewControllers
 */
@property (nonatomic, strong) SMNavigationController *navigationController;

@property (nonatomic, strong) SMHTTPRequest *httpRequest;

@property (nonatomic, strong) SMCache *cache;

@property (nonatomic, strong) SMInAppContentStyleOptions *styleOptions;

@property (nonatomic, strong) void (^contentHandler)(UNNotificationContent *contentToDeliver);
@property (nonatomic, strong) UNMutableNotificationContent *bestAttemptContent;

@property (nonatomic, strong) id <WKNavigationDelegate> webViewNavigationDelegate;

@end
