//
//  NSString+SMEncryption.h
//  MobileSDK
//
//  Created by Gauthier Dumont on 12/06/15.
//  Copyright (c) 2015 Selligent. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SMEncryption)

+ (NSString*)Hmac256JWTWithHeader:(NSDictionary *)jwtHeader Payload:(NSDictionary *)jwtPayload AndSecret:(NSString *)secret;

/*
 \internal
 @function AES256DecryptWithKey
 @abstract This function accepts the key to dencrypt the NSString and return the plain
 string.
 @discussion Converts the encrypted string to encrypted NSData and calls the decryption method of NSData to get the plain NSData which is then converted to string.
 @result Returns the encrypted string.
 */
- (NSString *)AES256DecryptWithIv:(NSString *)iv AndKey:(NSString*)encryptionKey;

- (NSString *)AES256EncryptWithKey:(NSString*)encryptionKey;
- (NSString *)AES256DecryptWithKey:(NSString*)encryptionKey;

@end
