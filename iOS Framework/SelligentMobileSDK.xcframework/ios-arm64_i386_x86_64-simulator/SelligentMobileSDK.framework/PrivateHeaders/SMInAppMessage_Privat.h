//
//  SMInAppMessage_Privat.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 24/9/2020.
//  Copyright © 2020 Selligent. All rights reserved.
//

#import "SMInAppMessage.h"
#import "SMBaseMessage_Privat.h"

@interface SMInAppMessage()

//Needed when push is encrypted
@property (nonatomic) NSString     * apsTitle;
@property (nonatomic) NSString     * apsBody;

@property (nonatomic) NSString     * category;


//  Default constructor
+ (instancetype)inAppMessageFromPayLoad:(NSDictionary*)notificationPayload;
+ (instancetype)inAppMessageFromPayLoad:(NSDictionary*)notificationPayload WithEncryptionKey:(NSString*)key;

//  return a basic dictionary for client application
- (NSDictionary*)dictionaryFromCurrentInAppMessage;

@end
