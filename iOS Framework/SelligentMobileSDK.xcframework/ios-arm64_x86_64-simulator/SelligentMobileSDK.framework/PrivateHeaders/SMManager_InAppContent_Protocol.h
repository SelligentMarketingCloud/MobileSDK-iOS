//
//  SMManager_InAppContent_Protocol.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 11/03/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SMInAppRefreshType.h"

@protocol SMManager_InAppContent_Protocol <NSObject>

/*! return FilePath of the IAC last fetch date */
@property (nonatomic, strong) NSString *filePathIACProperties;

/*!  IAC last fetch date*/
@property (nonatomic, strong) NSDate *dateIAClastfetch;

/*!  IAC refresh type*/
@property (nonatomic) SMInAppRefreshType refreshIACType;

/*!  IAC array*/
@property (nonatomic, strong) NSMutableArray* iacArrayMessages;


@end
