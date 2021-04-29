//
//  SMManager+Archiver.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 02/12/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMManager.h"

#import "SMManager_RemoteNotification_Protocol.h"
#import "SMManager_InAppMessage_Protocol.h"
#import "SMManager_InAppContent_Protocol.h"

@interface SMManager (Archiver) <SMManager_RemoteNotification_Protocol, SMManager_InAppMessage_Protocol, SMManager_InAppContent_Protocol>

//  Remote-notification
- (void)loadRegistrationState_RemoteNotification;
- (void)saveRegistrationState_RemoteNotification;

//  In-App-Messages
- (void)loadRegistrationState_IAM;
- (void)saveRegistrationState_IAM;

//  In-App-Content
- (void)loadRegistrationState_IAC;
- (void)saveRegistrationState_IAC;

//  Location
- (void)loadRegistrationState_Location;
- (void)saveRegistrationState_Location;

@end
