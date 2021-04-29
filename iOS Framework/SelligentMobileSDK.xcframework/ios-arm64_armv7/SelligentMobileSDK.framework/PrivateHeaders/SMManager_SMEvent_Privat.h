//
//  SMManager_SMEvent_Privat.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 30/08/16.
//  Copyright © 2016 Selligent. All rights reserved.
//


#import "SMManager+SMEvent.h"
#import "SMManager_Event_Protocol.h"
#import "SMManager_RemoteNotification_Protocol.h"

@interface SMManager (SMEvent_privat) <SMManager_Event_Protocol, SMManager_RemoteNotification_Protocol>

- (void)sendFirstSetInfo ;
- (void)sendFirstSetInfoWithRegistrationState:(BOOL)registrationState;
- (void)sendAllUnsentEvent;
- (void)removeUnsentEvent:(SMEvent*)event;
- (BOOL)eventReceivedHasBeenSentForMessageId:(NSString*)messageId;
- (BOOL) eventOpenedHasBeenSentForMessageId:(NSString*)messageId;
- (void)getProfileWithCompletionBlock:(SMCompletionBlock)blockCompletion FailureBlock:(SMCompletionBlock)blockFailure;
@end
