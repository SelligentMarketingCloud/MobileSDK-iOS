//
//  SMBaseMessage_Privat.h
//  MobileSDK
//
//  Created by Gilbert Schakal on 25/05/16.
//  Copyright © 2016 Selligent. All rights reserved.
//

#import "SMBaseMessage.h"
#import "SMNotificationMessageType.h"
#import "SMMessageNature.h"

@interface SMBaseMessage()


@property (nonatomic) SMNotificationMessageType   type;
@property (nonatomic) NSDictionary * dictData;
@property (nonatomic) SMMessageNature  messageNature;

@property (nonatomic) BOOL isEncrypted;
@property (nonatomic,strong) NSString *iv;
@property (nonatomic,strong) NSString *encryptionVersion;

+(instancetype)messageFromPayLoad:(NSDictionary*)notificationPayload;

- (void)encodeWithCoder:(NSCoder *)aCoder ;
- (id)initWithCoder:(NSCoder *)aDecoder;
@end
