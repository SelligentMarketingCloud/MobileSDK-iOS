//
//  SMHTTPRequest+Optiex.h
//  SelligentMobileLib
//
//  Created by Gilbert Schakal on 1/03/18.
//  Copyright © 2018 Selligent. All rights reserved.
//

#import "SMHTTPRequest.h"

@interface SMHTTPRequest (Optiex)

//- (void)requestOptiexUrl:(NSString*)url WithCompletionBlock:(SMCompletionBlockWithHTTPSuccess)blockSuccess FailureBlock:(SMCompletionBlockWithHTTPError)blockFailure;
- (bool)mustProcessOptiexRequest:(SMEvent*)event;
- (void)processOptiexRequest:(SMEvent *)event;

@end
