//
//  IMBase64.h
//  CommonModule
//
//  Created by Joey on 2023/11/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface IMBase64 : NSObject

#pragma mark Encode
/// Base 64 encode
/// @param string string
+ (NSString *)im_base64EncodeWithString:(NSString *)string;

/// Base 64 encode
/// @param data data
+ (NSString *)im_base64EncodeWithData:(NSData *)data;


/// Base 64 encode, replace  "+"  to "-",   "/"  to "_"
/// @param data data
+(NSString*)im_safeUrlBase64Encode:(NSData*)data;



#pragma mark Decode
/// Base 64 decode
/// @param base64String base64String
+ (NSString *)im_base64DecodeToStringWithString:(NSString *)base64String;

/// Base 64 decode
/// @param base64String base64String
+ (nullable NSData *)im_base64DecodeToDataWithString:(NSString *)base64String;

/// Base 64 decode
/// @param base64Data base64Data
+ (NSString *)im_base64DecodeWithData:(NSData *)base64Data;



/// Base 64 decode
/// @param base64String base64String
+(NSData*)im_safeUrlBase64Decode:(NSString*)base64String;


@end

NS_ASSUME_NONNULL_END
