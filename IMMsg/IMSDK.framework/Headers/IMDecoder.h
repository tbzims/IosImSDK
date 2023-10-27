//
//  IMDecoder.h
//  LiuqsEmoticonkeyboard
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/*********************** ***************************/

@class IMSelectAtModel,IMUISetting;

@interface IMDecoder : NSObject

@property (nonatomic, assign) BOOL isDraft;


+ (NSMutableAttributedString *)decodeWithPlainStr:(NSString *)plainStr font:(NSInteger)font textColor:(UIColor *)textColor uiSetting:(IMUISetting *)uiSetting;
+ (NSMutableAttributedString *)decodeWithPlainStr:(NSString *)plainStr atPersons:(NSArray<IMSelectAtModel *> *)atPersons font:(NSInteger)font textColor:(UIColor *)textColor atNameColor:(UIColor *)atColor uiSetting:(IMUISetting *)uiSetting;

+ (NSMutableAttributedString *)draftDecodeWithPlainStr:(NSString *)plainStr atPersons:(NSArray<IMSelectAtModel *> *)atPersons font:(NSInteger)font textColor:(UIColor *)textColor textViewWidth:(CGFloat)textViewWidth uiSetting:(IMUISetting *)uiSetting;


@end
