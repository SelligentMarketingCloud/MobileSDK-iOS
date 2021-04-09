//
//  SMHTTPRequest+SMEventReturnMedia.h
//  MobileSDK
//
//  Created by Samy Ziat on 24/11/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

#import "SMHTTPRequest.h"

@class SMEventReturnMedia;


@interface SMHTTPRequest (SMEventReturnMedia)


- (void)send_SMEventReturnMedia:(SMEventReturnMedia*)event;


@end
