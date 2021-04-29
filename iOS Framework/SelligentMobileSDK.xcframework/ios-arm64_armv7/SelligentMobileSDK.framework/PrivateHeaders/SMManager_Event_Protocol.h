//
//  SMManager_Event_Protocol.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 11/10/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SMEventRegister.h"

@protocol SMManager_Event_Protocol <NSObject>

@property (nonatomic, strong) SMEventRegister* eventRegister;

@end
