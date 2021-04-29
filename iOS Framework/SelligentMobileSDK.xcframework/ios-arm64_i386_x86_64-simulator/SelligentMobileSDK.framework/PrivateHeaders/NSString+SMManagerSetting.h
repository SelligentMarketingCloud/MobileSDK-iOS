//
//  NSString+SMManagerSetting.h
//  SelligentMobileLib
//
//  Created by Gilbert Schakal on 29/11/2019.
//  Copyright © 2019 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SMManagerSetting)
+ (NSString*)checkBasePath:(NSString*)basePath;
+ (NSString*)formatUserAgent;
@end

