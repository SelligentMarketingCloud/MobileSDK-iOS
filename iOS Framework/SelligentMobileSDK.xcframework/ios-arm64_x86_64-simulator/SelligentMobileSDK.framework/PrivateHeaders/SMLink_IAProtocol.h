//
//  SMLink_IAProtocol.h
//  MobileSDK
//
//  Created by Samy Ziat on 09/12/15.
//  Copyright © 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SMMessageNature.h"

@protocol SMLink_IAProtocol <NSObject>
@property (nonatomic) SMMessageNature messageNature;
@end
