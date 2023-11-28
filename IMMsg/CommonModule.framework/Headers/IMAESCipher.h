//
//  IMAESCipher.h
//  CommonModule
//
//  Created by Joey on 2023/11/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
// AES-128-CBC

@interface IMAESCipher : NSObject

#pragma mark Encrypt
+ (nullable NSString *)im_AESEncryptToStringWithString:(NSString *)encryptString key:(NSString *)key iv:(NSString *)iv;
+ (nullable NSData *)im_AESEncryptToDataWithString:(NSString *)encryptString key:(NSString *)key iv:(NSString *)iv;
+ (nullable NSData *)im_AESEncryptToDataWithData:(NSData *)encryptData key:(NSString *)key iv:(NSString *)iv;

#pragma mark Decrypt
+ (nullable NSString *)im_AESDecryptToStringWithString:(NSString *)decryptString key:(NSString *)key iv:(NSString *)iv;
+ (nullable NSData *)im_AESDecryptToDataWithData:(NSData *)decryptData key:(NSString *)key iv:(NSString *)iv;
+ (nullable NSData *)im_AESDecryptToDataWithData:(NSData *)decryptData key:(NSString *)key ivData:(NSData *)ivData;

+ (NSString *)im_dataToString:(NSData *)data;

@end

NS_ASSUME_NONNULL_END
