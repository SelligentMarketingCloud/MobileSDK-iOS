/*
 SMSelligentCocoaSecurity  1.1

 Created by Kelp on 12/5/12.
 Copyright (c) 2012 Kelp http://kelp.phate.org/
 MIT License
 
 SMSelligentCocoaSecurity is core. It provides AES encrypt, AES decrypt, Hash(MD5, HmacMD5, SHA1~SHA512, HmacSHA1~HmacSHA512) messages.
*/

#import <Foundation/Foundation.h>
#import <Foundation/NSException.h>


#pragma mark - SMSelligentCocoaSecurityResult
@interface SMSelligentCocoaSecurityResult : NSObject

@property (strong, nonatomic, readonly) NSData *smData;
@property (strong, nonatomic, readonly) NSString *smUtf8String;
@property (strong, nonatomic, readonly) NSString *smHex;
@property (strong, nonatomic, readonly) NSString *smHexLower;
@property (strong, nonatomic, readonly) NSString *smBase64;

- (id)initSMWithBytes:(unsigned char[])initData length:(NSUInteger)length;

@end


#pragma mark - SMSelligentCocoaSecurity
@interface SMSelligentCocoaSecurity : NSObject
#pragma mark - AES Encrypt
+ (SMSelligentCocoaSecurityResult *)smAesEncrypt:(NSString *)data key:(NSString *)key;
+ (SMSelligentCocoaSecurityResult *)smAesEncrypt:(NSString *)data hexKey:(NSString *)key hexIv:(NSString *)iv;
+ (SMSelligentCocoaSecurityResult *)smAesEncrypt:(NSString *)data key:(NSData *)key iv:(NSData *)iv;
+ (SMSelligentCocoaSecurityResult *)smAesEncryptWithData:(NSData *)data key:(NSData *)key iv:(NSData *)iv;
#pragma mark AES Decrypt
+ (SMSelligentCocoaSecurityResult *)smAesDecryptWithBase64:(NSString *)data key:(NSString *)key;
+ (SMSelligentCocoaSecurityResult *)smAesDecryptWithBase64:(NSString *)data hexKey:(NSString *)key hexIv:(NSString *)iv;
+ (SMSelligentCocoaSecurityResult *)smAesDecryptWithBase64:(NSString *)data key:(NSData *)key iv:(NSData *)iv;
+ (SMSelligentCocoaSecurityResult *)smAesDecryptWithData:(NSData *)data key:(NSData *)key iv:(NSData *)iv;
+ (SMSelligentCocoaSecurityResult *)smAesDecryptPayloadProperty:(NSString *)data hexKey:(NSString *)key hexIv:(NSString *)iv;


#pragma mark - MD5
+ (SMSelligentCocoaSecurityResult *)smMd5:(NSString *)hashString;
+ (SMSelligentCocoaSecurityResult *)smMd5WithData:(NSData *)hashData;
#pragma mark HMAC-MD5
+ (SMSelligentCocoaSecurityResult *)smHmacMd5:(NSString *)hashString hmacKey:(NSString *)key;
+ (SMSelligentCocoaSecurityResult *)smHmacMd5WithData:(NSData *)hashData hmacKey:(NSString *)key;

#pragma mark - SHA
+ (SMSelligentCocoaSecurityResult *)smSha1:(NSString *)hashString;
+ (SMSelligentCocoaSecurityResult *)smSha1WithData:(NSData *)hashData;
+ (SMSelligentCocoaSecurityResult *)smSha224:(NSString *)hashString;
+ (SMSelligentCocoaSecurityResult *)smSha224WithData:(NSData *)hashData;
+ (SMSelligentCocoaSecurityResult *)smSha256:(NSString *)hashString;
+ (SMSelligentCocoaSecurityResult *)smSha256WithData:(NSData *)hashData;
+ (SMSelligentCocoaSecurityResult *)smSha384:(NSString *)hashString;
+ (SMSelligentCocoaSecurityResult *)smSha384WithData:(NSData *)hashData;
+ (SMSelligentCocoaSecurityResult *)smSha512:(NSString *)hashString;
+ (SMSelligentCocoaSecurityResult *)smSha512WithData:(NSData *)hashData;
#pragma mark HMAC-SHA
+ (SMSelligentCocoaSecurityResult *)smHmacSha1:(NSString *)hashString hmacKey:(NSString *)key;
+ (SMSelligentCocoaSecurityResult *)smHmacSha1WithData:(NSData *)hashData hmacKey:(NSString *)key;
+ (SMSelligentCocoaSecurityResult *)smHmacSha224:(NSString *)hashString hmacKey:(NSString *)key;
+ (SMSelligentCocoaSecurityResult *)smHmacSha224WithData:(NSData *)hashData hmacKey:(NSString *)key;
+ (SMSelligentCocoaSecurityResult *)smHmacSha256:(NSString *)hashString hmacKey:(NSString *)key;
+ (SMSelligentCocoaSecurityResult *)smHmacSha256WithData:(NSData *)hashData hmacKey:(NSString *)key;
+ (SMSelligentCocoaSecurityResult *)smHmacSha384:(NSString *)hashString hmacKey:(NSString *)key;
+ (SMSelligentCocoaSecurityResult *)smHmacSha384WithData:(NSData *)hashData hmacKey:(NSString *)key;
+ (SMSelligentCocoaSecurityResult *)smHmacSha512:(NSString *)hashString hmacKey:(NSString *)key;
+ (SMSelligentCocoaSecurityResult *)smHmacSha512WithData:(NSData *)hashData hmacKey:(NSString *)key;
@end


#pragma mark - SMSelligentCocoaSecurityEncoder
@interface SMSelligentCocoaSecurityEncoder : NSObject
- (NSString *)smBase64:(NSData *)data;
- (NSString *)smHex:(NSData *)data useLower:(BOOL)isOutputLower;
@end


#pragma mark - SMSelligentCocoaSecurityDecoder
@interface SMSelligentCocoaSecurityDecoder : NSObject
- (NSData *)smBase64:(NSString *)data;
- (NSData *)smHex:(NSString *)data;
@end
