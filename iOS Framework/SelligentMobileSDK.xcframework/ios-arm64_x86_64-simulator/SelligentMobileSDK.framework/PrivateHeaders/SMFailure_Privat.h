//
//  SMFailure_Privat.h
//  MobileSDK
//
//  Created by Jean-Louis Delmarche on 09/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMFailure.h"

static NSString* kSMFailure_ServerError = @"Platform server responded with an error";

@interface SMFailure ()

+ (instancetype)failureWithMessage:(NSString*)message;
+ (instancetype)failureWithResponse:(SMHTTPResponse*)response;

@end
