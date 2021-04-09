//
//  SMHTTPRequest+IAC.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 16/03/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import "SMHTTPRequest.h"

@interface SMHTTPRequest (IAC)

- (void)retrieveInAppContentWithCompletionBlock:(SMCompletionBlockWithHTTPSuccess)blockSuccess FailureBlock:(SMCompletionBlockWithHTTPError)blockFailure;
@end
