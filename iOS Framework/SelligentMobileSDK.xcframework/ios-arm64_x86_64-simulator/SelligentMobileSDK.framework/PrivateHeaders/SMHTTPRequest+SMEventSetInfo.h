//
//  SMHTTPRequest+Register.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 07/10/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import "SMHTTPRequest.h"

@class SMEventSetInfo;

@interface SMHTTPRequest (SMEventSetInfo)
- (void)send_SMEventSetInfo:(SMEventSetInfo*)event;
- (void)getDeviceProfileWithBlockCompletion:(SMCompletionBlock)blockCompletion FailureBlock:(SMCompletionBlock)blockFailure;
@end
