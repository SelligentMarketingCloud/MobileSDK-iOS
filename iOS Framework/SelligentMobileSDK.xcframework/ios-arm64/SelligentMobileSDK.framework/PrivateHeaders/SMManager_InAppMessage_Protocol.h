//
//  SMManager_InAppMessage_Protocol.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 13/11/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SMInAppRefreshType.h"

@protocol SMManager_InAppMessage_Protocol <NSObject>

/*! return FilePath of the IAM last fetch date */
@property (nonatomic, strong) NSString *filePathIAMProperties;

/*!  IAM last fetch date*/
@property (nonatomic, strong) NSDate *dateIAMlastfetch;

/*!  IAM refresh type*/
@property (nonatomic) SMInAppRefreshType refreshIAMType;

/*!  IAM is enabled*/
@property (nonatomic) BOOL isInAppMessageEnabled;

/*!  IAM array*/
@property (nonatomic, strong) NSMutableArray* iamArrayMessages;


@end
