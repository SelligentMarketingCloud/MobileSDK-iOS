//
//  SMHTTPResponse.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 20/01/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SMHTTPResponse : NSObject

@property (nonatomic) long statusCode;
@property (nonatomic, strong) NSString *urlDescription;
@property (nonatomic, strong) NSString *sdkCode;
@property (nonatomic, strong) NSString *sdkDescription;
@property (nonatomic, strong) NSString *encryptionKey;
@property (nonatomic) BOOL isValid;
@property (nonatomic, strong) NSError  *error;


+(instancetype)responseWithData:(NSData*)data URLResponse:(NSHTTPURLResponse*)urlResponse AndError:(NSError*)error;

@end
