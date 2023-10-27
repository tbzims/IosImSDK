//
//  NSString+VValid.h
//
//  Created by  on 2020/11/4.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (VValid)


- (NSString *)filterSpaceAndNewline;

- (BOOL)notOnlySpaceAndNewline;

+ (BOOL)checkUrlWithString:(NSString *)url;

+ (NSMutableAttributedString *)attrStrFrom:(NSString *)allString colorStr:(NSArray *)colorStrArr color:(UIColor *)color font:(UIFont *)font;

+ (NSArray*)getURLFromStr:(NSString *)string;

+ (NSArray*)rangeOfSubString:(NSString*)subStr inString:(NSString*)string;
@end

NS_ASSUME_NONNULL_END
