//
//  SMEventReturnMediaData.h
//  MobileSDK
//
//  Created by Samy Ziat on 25/11/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SMEventReturnMediaData : NSObject

@property (nonatomic, strong) NSString *idMedia;
@property (nonatomic, strong) NSString *nameMedia;
@property (nonatomic, strong) NSString *filePathMedia;

+ (instancetype)dataReturnMediaWithDict:(NSDictionary*)dict;


/**
 *  @return dictionary with correctly formated infomration to pass to backend
 */
- (NSDictionary*)dictionaryMedia;


@end
