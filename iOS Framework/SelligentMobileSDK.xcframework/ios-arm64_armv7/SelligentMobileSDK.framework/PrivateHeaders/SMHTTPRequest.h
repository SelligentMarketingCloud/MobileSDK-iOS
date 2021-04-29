//
//  SMHTTPRequest.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 03/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SMEvent;

@interface SMHTTPRequest : NSObject

@property (nonatomic, strong) NSString *clientID;
@property (nonatomic, strong) NSString *privateKey;
@property (nonatomic, strong) NSString *urlName;

@property (nonatomic, strong) NSMutableSet *eventSet;
@property (nonatomic, strong) NSString *filePathEvent;
@property (nonatomic, strong) SMEvent *lastUserCustomEvent;
@property (nonatomic, strong) NSString *filePathLastUserCustomEvent;
@property (nonatomic, strong) NSOperationQueue *sendEventQueue;

+ (instancetype)httpRequestWithURL:(NSString*)urlName ClientID:(NSString*)clientID PrivateKey:(NSString*)privateKey;

- (void)performTaskWithRequest:(NSURLRequest*)request CompletionBlock:(SMCompletionBlockWithHTTPSuccess)blockSuccess FailureBlock:(SMCompletionBlockWithHTTPError)blockFailure;

- (void)clearBeforeReload;

-(NSString*)stringUrlWithDynamicPath:(NSString*)dynamicPath;
-(NSString*)stringUrlWithDynamicPath:(NSString*)dynamicPath AndDate:(NSString*)date;


@end
