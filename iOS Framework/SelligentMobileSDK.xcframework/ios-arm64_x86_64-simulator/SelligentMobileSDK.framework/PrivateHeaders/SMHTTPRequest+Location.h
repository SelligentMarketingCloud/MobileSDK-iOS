//
//  SMHTTPRequest+Location.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 06/09/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import "SMHTTPRequest.h"

@interface SMHTTPRequest (Location)
- (void)retrieveRegionsDatasForLatitude:(float)latitude Longitude:(float)longitude MaxRegions:(int)maxregions CompletionBlock:(SMCompletionBlockWithHTTPSuccess)blockSuccess FailureBlock:(SMCompletionBlockWithHTTPError)blockFailure;

- (void)retrieveTriggersDatasWithCompletionBlock:(SMCompletionBlockWithHTTPSuccess)blockSuccess FailureBlock:(SMCompletionBlockWithHTTPError)blockFailure;

@end
