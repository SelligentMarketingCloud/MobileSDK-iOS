//
//  SMLink_ForwardDataNotificationMessageProtocol.h
//  MobileSDK
//
//  Created by Samy Ziat on 30/09/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>
//  This property should NOT be here and is only passed in order to forward: (pushID & pushData) back to the portail.
//  It MUST be removed when the portail will handle these appropriately.
@protocol SMLink_ForwardDataNotificationMessageProtocol <NSObject>
@property (nonatomic) NSString     * idNotification;
@property (nonatomic) NSDictionary * dictDataNotification;
@end
