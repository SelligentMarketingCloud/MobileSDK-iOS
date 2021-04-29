//
//  SMEvent_Private.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 05/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import "SMEvent.h"

#import "SMEventKey.h"
#import "SMEventType.h"

#import "SMMessageNature.h"

#import "SMDisplayMode.h"

@interface SMEvent () <NSCoding> {
    NSMutableDictionary *_dictAdditionalParameter;
}

@property (nonatomic) SMEventType eventType;
@property (nonatomic, strong) NSMutableDictionary *dictRootParameter;
@property (nonatomic, copy) SMCompletionBlockFailure blockFailure;
@property (nonatomic, copy) SMCompletionBlockSuccess blockSuccess;


- (instancetype)initWithType:(SMEventType)type;
- (instancetype)initWithType:(SMEventType)type Dictionary:(NSDictionary*)dict;



- (void)succeededWithData:(NSData*)data;
- (void)failedWithResponse:(SMHTTPResponse*)response ;

@end
