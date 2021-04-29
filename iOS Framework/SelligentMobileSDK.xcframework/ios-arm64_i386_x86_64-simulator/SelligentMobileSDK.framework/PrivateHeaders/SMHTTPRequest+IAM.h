//
//  SMHTTPRequest+IAM.h
//  MobileSDK
//
//  Created by Samy Ziat on 02/10/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMHTTPRequest.h"

@interface SMHTTPRequest (IAM)


- (void)retrieveInAppMessageWithID:(NSString*)idIAM CompletionBlock:(SMCompletionBlockWithHTTPSuccess)blockSuccess FailureBlock:(SMCompletionBlockWithHTTPError)blockFailure;


- (void)retrieveInAppMessageForDate:(NSString*)date CompletionBlock:(SMCompletionBlockWithHTTPSuccess)blockSuccess FailureBlock:(SMCompletionBlockWithHTTPError)blockFailure;

@end
