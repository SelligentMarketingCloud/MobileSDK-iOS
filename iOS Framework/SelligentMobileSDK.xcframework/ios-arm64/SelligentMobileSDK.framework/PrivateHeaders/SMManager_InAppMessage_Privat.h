//
//  SMManager_SMManager_InAppMessage_Privat.h
//  MobileSDK
//
//  Created by Samy Ziat on 30/09/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMManager+InAppMessage.h"


//@class SMManagerSettingIAM;

@interface SMManager (InAppMessage_Privat) 


- (void)fetchInAppMessage;
- (void)fetchInAppMessageWithID:(NSString*)idIAM BlockCompletion:(SMCompletionBlockWithSMNotification)blockCompletion FailureBlock:(SMCompletionBlock)blockFailure;
@end
