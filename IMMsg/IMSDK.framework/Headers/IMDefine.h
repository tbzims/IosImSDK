//
//  IMDefine.h
//  
//
//  Created by  on 2019/11/1.
//  Copyright © 2019_All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//#import "IMUser.h"
//#import "IMMessageInfoModel.h"

#import <AWSS3/AWSS3.h>
#import <AVFoundation/AVFoundation.h>
#import <Photos/Photos.h>
#import "IMMessageInfoModel.h"
#import <CocoaLumberjack/CocoaLumberjack.h>

#ifdef DEBUG
static const DDLogLevel ddLogLevel = DDLogLevelVerbose;
#else
static const DDLogLevel ddLogLevel = DDLogLevelOff;
#endif


#define YH__ScreenWidth          [UIScreen mainScreen].bounds.size.width
#define YH__ScreenHeight         [UIScreen mainScreen].bounds.size.height

#define IMLocalized(__key__)  [[IMSwiftOcBridge shared] localizedWithKey:__key__]

#ifdef DEBUG
    #define NSLog(FORMAT, ...) fprintf(stderr,"%s:%d\t%s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String])
#else
#define NSLog(FORMAT, ...) nil
#endif


typedef NSInteger IMIFileFormat NS_TYPED_EXTENSIBLE_ENUM;
static const IMIFileFormat IMIFileFormatImage     = 0;
static const IMIFileFormat IMIFileFormatVideo       = 1;
static const IMIFileFormat IMIFileFormatFile       = 2;



@class IMMessageInfoModel;
@class YYCache;
NS_ASSUME_NONNULL_BEGIN

/// Project global attribute definition
/// There is no macro definition here, the purpose is to be compatible with Swift
@interface IMDefine : NSObject


+ (NSString*)getPreferredLanguage;

#pragma mark - Constant

+ (NSString *)webLinkAbsoluteUrlWithLinkPage:(NSString *)linkPage parameters:(NSDictionary *)parameters;

/// IM Key
+ (NSString *)IMKey;

+ (NSString *)http_ase_128_key;


/// goole map AppKey
+ (NSString *)googleMapKey;

/// YYCache
+ (YYCache *)yyCache;

/// YYCache Key With Server And UserId
+ (NSString *)YYCacheKey:(NSString *)oraginKey;

+ (NSString *)themeKey;

+ (NSString *)appstoreURL;

+ (int)getVoiceMaxMemberCount;

+ (int)getVideoMaxMemberCount;

+ (int)getGroupManagerCount;


/// vide paly tag
+ (int)momentsTrendingVideoPlayTag;
+ (int)momentsFriendsVideoPlayTag;
+ (int)momentsFavoritesVideoPlayTag;
+ (int)myAlbumListVideoPlayTag;
+ (int)moreReplyListVideoPlayTag;
+ (int)momentsDetailVideoPlayTag;
+ (int)myMomentsVideoPlayTag;
+ (int)momentsDetailHeaderVideoPlayTag;
+ (int)momentsDetailHeaderTransferVideoPlayTag;
+ (int)nearbyBusinessDetailCommentVideoPlayTag;
+ (int)momentsSearchVideoPlayTag;


+ (CGFloat)postImageHeightRatio;

#pragma mark  push AccessID
+ (NSString *)GZpushAccessID;
+ (NSString *)SJPpushAccessID;

#pragma mark  push AccessKey
+ (NSString *)GZpushAccessKey;
+ (NSString *)SJPpushAccessKey;

#pragma mark App Page

+ (UIColor *)baseColor;

+ (UIColor *)baseLabelBalckColor;

+ (UIColor *)baseLabelGreenColor;
/// seperate line color
+ (UIColor *)seperateLineColor;
/// navigation seperate line color
+ (UIColor *)backgroudF3F5F9;
+ (UIColor *)color0D1324;
+ (UIColor *)colorE2E4EB;
+ (UIColor *)colorFF4A4A;
+ (UIColor *)colorFF6844;
+ (UIColor *)color223253;
+ (UIColor *)color5E6A81;
+ (UIColor *)color333333;
+ (UIColor *)colorE5E6EB;
+ (UIColor *)colorA2A8C3;
+ (UIColor *)colorF6F7F8;
+ (UIColor *)color9DDFE6;
+ (UIColor *)colorDADCE2;
+ (UIColor *)colorBEBEC0;
+ (UIColor *)color00C6DB;
/// navigation seperate line color
+ (UIColor *)naviSeperateLineColor;

/// seperate line height
+ (CGFloat)seperateLineHeight;

#pragma mark Regular Expression
// topic Regular Expression
+ (NSString *)topicRegularExpression;

/// url Regular Expression
+ (NSString *)urlRegularExpression;

/// @ Regular Expression
+ (NSString *)atRegularExpression;

#pragma mark Quantity and size restrictions
+ (int)httpRequestRow;

+ (int)maxFirstNameLength;
+ (UIColor *)color2F3347;
+ (int)maxNickNameLength;

+ (int)maxGroupNameLength;

+ (int)maxSignatureLength;

+ (int)maxMomentsTransferCount;

+ (int)maxPostFilesCount;

+ (int)maxPostContentLength;

+ (int)maxCommentOrReplyContentLength;

+ (CGFloat)userPostHeightRatio;

+ (unsigned int)maxMomentsTransferLinesCount;

+ (unsigned int)maxMomentsLinesCount;

+ (CGSize)countRealsize:(CGSize )imageSize;

/// format distance
/// @param distance distance
+ (NSString *)formatDistance:(CGFloat)distance;

#pragma mark Push or Pop
+(UIViewController *)getCurrentVCWith:(UIView *)view;
+ (void)pushNewConversationWithSender:(nullable UIViewController *)sender  destination:(nullable UIViewController *)destination animated:(BOOL)animated;
+ (void)pushNewConversationWithSender:(nullable UIViewController *)sender destination:(nullable UIViewController *)destination;
+ (void)pushNewCurrentVCWithSender:(nullable UIViewController *)sender  destination:(nullable UIViewController *)destination;
+ (void)pushWithSender:(nullable UINavigationController *)sender destination:(nullable UIViewController *)destination;
+ (void)popWithSender:(UINavigationController *)sender destination:(NSString *)destination animated:(BOOL)animated;
+ (void)popWithSender:(nullable UINavigationController *)sender destination:(nullable NSString *)destination;
+ (void)presentWithSender:(nullable UIViewController *)sender destination:(nullable UIViewController *)destination;
+ (void)dismissWhithDestination:(nullable UIViewController *)destination;
#pragma mark Base64
+ (NSString *)base64EncodeString:(NSString *)string;
+ (NSString *)stringEncodeBase64:(NSString *)base64;
#pragma mark Attribute String

+ (NSMutableAttributedString *)yy_textView_AT_attrbuteStringWithAttrbuteString:(NSMutableAttributedString *)attrbuteString
                                                                         color:(UIColor *)color;

+ (NSMutableAttributedString *)attrbuteStringWithContent:(nullable NSString *)content
                                                   color:(UIColor *)color
                                                    font:(UIFont *)font
                                                 atColor:(UIColor *)atColor
                                                  atFont:(UIFont *)atFont
                                              topicColor:(UIColor *)topicColor
                                               topicFont:(UIFont *)topicFont
                                                urlColor:(UIColor *)urlColor
                                                 urlFont:(UIFont *)urlFont
                              isNeedChangeWhenInputTopic:(BOOL)isNeedChangeWhenInputTopic
                                 isNeedChangeWhenInputAt:(BOOL)isNeedChangeWhenInputAt
                                isNeedChangeWhenInputURL:(BOOL)isNeedChangeWhenInputURL
                                 isUseSafariWhenClickURL:(BOOL)isUseSafariWhenClickURL
                                       clickTopicClosure:(void(^_Nullable)(NSString *topic))clickTopicClosure
                                          clickAtClosure:(void(^_Nullable)(NSString *topic))clickAtClosure
                                         clickURLClosure:(void(^_Nullable)(NSString *topic))clickURLClosure;

+ (NSMutableAttributedString *)yy_textView_attrbuteStringWithAttrbuteString:(NSMutableAttributedString *)attrbuteString
                                                                      color:(UIColor *)color
                                                 isNeedChangeWhenInputTopic:(BOOL)isNeedChangeWhenInputTopic
                                                    isNeedChangeWhenInputAt:(BOOL)isNeedChangeWhenInputAt
                                                   isNeedChangeWhenInputURL:(BOOL)isNeedChangeWhenInputURL;

/// caculate attrbute string height
/// @param attrbuteString attrbuteString
/// @param maxWidth maxWidth
+ (CGFloat)caculateAttrbuteStringHeightWithAttrbuteString:(nullable NSMutableAttributedString *)attrbuteString maxWidth:(CGFloat)maxWidth;

+ (CGFloat)caculateAttrbuteStringHeightWithAttrbuteString:(NSMutableAttributedString *)attrbuteString maxWidth:(CGFloat)maxWidth rowCount:(NSUInteger)rowCount;

#pragma mark - Time
+ (NSString *)countTime:(NSNumber *)timesp;
+ (NSString *)chatCountTime:(NSNumber *)timesp;
+ (BOOL)isSameDayWith:(long)stmp1 stmp2:(long)stmp2;
+ (BOOL)isSameYearWith:(long)stmp1 stmp2:(long)stmp2;
+ (BOOL)is12HourFormat;

#pragma mark - Message
+ (NSString *)passIDForRequestFriendsMessage;
+ (NSString *)ACKMessageNotification;
+ (NSString *)UnreadTextEidt:(NSInteger)ureadCount;
+ (UIImage *)returnStatusDark1ImageWithModel:(IMessageStatus)status;
+ (UIImage *)returnStatusWhiteImageWithModel:(IMessageStatus)status;
+ (UIImage *)returnStatusImageWithModel:(IMessageStatus)statu isUseToDetail:(BOOL)isUseToDetail;

#pragma mark - Sandbox

+ (NSString *)OriginImagePathWithOriginImage:(UIImage *)originImage;

#pragma mark - video thumbnail Image
+ (nullable UIImage *)thumbnailImageWithVideoURL:(nullable NSURL *)videoURL timeInterval:(NSTimeInterval)timeInterval;
#pragma mark is video
+ (BOOL)isVideo:(NSString *)url;

#pragma mark Payment password encryption method
/// Payment password encryption method
/// @param passWord passWord
/// @param currentTime current time stmp
+ (NSString *)payPasswordMd5WithPassWord:(NSString *)passWord withcurrentTime:(NSString *)currentTime;

#pragma mark OpenUrl result processing

+ (void)openUrlCodeResultHandleWithStr:(NSString *)resultStr;


#pragma mark Precision calculation
/// Get a rounded object based on a string
/// @param string Original string
/// @param mode mode
/// @param scale Keep a few decimal places
+ (NSDecimalNumber *)decimalNumberWithString:(NSString *)string mode:(NSRoundingMode)mode scale:(int)scale;

+ (NSString *)newDecimalNumberWithString:(NSDecimalNumber *)amount decimal:(double)decimal scale:(double)scale;


#pragma mark The realization of the highlight effect of a substring in the string
+(NSMutableAttributedString *)stringWithHighLightSubstring:(NSString *)totalString substring:(NSString *)substring;


#pragma mark generate qr code
+ (nullable UIImage *)generateQRImageWith:(NSString *)content;


#pragma mark native share
+ (void)shareWithTitle:(nullable NSString *)title image:(nullable UIImage *)image urlStr:(nullable NSString *)urlStr VC:(UIViewController *)VC;

#pragma mark - copy and paste
+ (void)pasteWith:(nullable NSString *)text;
//+ (void)pasteWith:(nullable NSString *)text externDes:(nullable NSString *)externDes;

#pragma mark - country code list
+ (NSDictionary<NSString *, NSString *> *)defaultCodeAndCountry;
#pragma mark - Determine whether the current language of the system is Turkish
+ (BOOL)isCurrentLanguageTR;

#pragma mark - imgCrop
+ (NSString *)imgCropWithUrl:(NSString *)url width:(float)width height:(float)height q:(int)q;

+ (void)pushTo:(UIViewController *)destinationVC;

+ (void)rootPushTo:(UIViewController *)destinationVC;

+ (void)pushToWebViewWithUrl:(NSString *)url isLaunch:(BOOL)isLaunch;

#pragma mark
+ (NSString *)correctEncryptString:(NSString *)string;
+ (nullable NSString *)dataToString:(NSData *)data;
+ (nullable NSDictionary *)decodeQueryString:(NSString *)string;

#pragma mark
+ (CGFloat)screenScale;


+ (NSString *)makeupDecimalCountWithString:(NSString *)string decimalCount:(int)decimalCount;

#pragma mark
+ (void)errorHandleWith:(NSError *)error;

#pragma mark Theme
+ (NSString *)dayThemeTag;
+ (NSString *)nightThemeTag;


#pragma mark
+ (void)gotoMapNavigationWithLa:(CLLocationDegrees)la lo:(CLLocationDegrees)lo locationDescription:(NSString *)locationDescription;

+ (UIColor *)colorWithHexString:(NSString *)color;

#pragma mark
+ (void)copyLinkForShare:(NSString *)shareText;


#pragma mark Oo Screen Name
+(BOOL)checkOoScreenNameWithGroupId:(NSString *)groupId;

+(void)changeOoScreenNameWithGroupId:(NSString *)groupId with:(BOOL)isOn;


#pragma mark ThemoColor

+(UIColor *)getChatMessageContent_BgColor;


+ (NSMutableAttributedString *)chatWithText:(NSString *)text;

+ (BOOL)isPhoneX;
+ (NSString *)getDeviceTokenString:(NSData *)deviceTokenData;
+ (NSDictionary *)TextSplit:(NSString *)text;


/**    **/
+ (void)getThumbnailImageFromPHAsset:(PHAsset *)asset
                     completionBlock:(void(^)(NSData *result, NSDictionary *info))completionBlock;

+ (NSString *)changeVideoTime:(long)time;

//x.xx
+ (BOOL)inputMoneyNumber;

+ (NSArray *)defaultEmoticons;

//
+ (NSArray *)isTopic:(NSString *)str;

//+ (void)addLocalNotice:(NSString *)title Body:(NSString *)body;

+ (void)addLocalNotice:(NSString *)title Body:(NSString *)body identifier:(NSString *)identifier;


+ (NSMutableArray *)getDuplicateSubStrLocInCompleteStr:(NSString *)completeStr withSubStr:(NSString *)subStr;

+ (BOOL)textRegex:(NSString *)text Range:(NSRange)range replacementString:(NSString *)string decimal:(int)decimal;

+ (BOOL)textRegex:(NSString *)text decimal:(int)decimal;

+ (NSString *)textAddString:(NSString *)text Range:(NSRange)range replacementString:(NSString *)string;

+ (NSArray *)billModelMerge:(NSArray *)billListVos;


+ (void)exchangeVcWithSender:(nullable UIViewController *)sender;

+ (void)removeVcWithSender:(nullable UIViewController *)sender;


+ (NSString *)dropLast:(NSString *)str decimal:(int)decimal;

+ (BOOL)topVCIsNewMomentsMessageVC:(BOOL)isVc;
+ (BOOL)getTopVCIsNewMomentsMessageVC;
+ (void)shareWithActivityItem:(NSArray *)activityItems VC:(UIViewController *)VC;
+ (void)gotoNativeMapWithLa:(double)la lo:(double)lo locationDescription:(NSString *)locationDescription;

+ (BOOL)isFileToOpen:(NSString *)fileType;
+ (BOOL)isPicVideoFileTo:(NSString *)fileType;
+ (BOOL)isVideoFile:(NSString *)fileType;
+ (NSString*)get_ONLYID;

+ (void)pushNewControllerWithSender:(nullable UIViewController *)sender  destination:(nullable UIViewController *)destination;

+(BOOL)isTurkeyLanguage;


+(NSString *)getSubstring:(NSString *)string range:(NSRange)range substringForMatch:(NSString *)substringForMatch;

+ (NSString *)getYear:(NSString *)timeStr;
+ (NSString *)getMonth:(NSString *)timeStr;
+ (NSString *)getDay:(NSString *)timeStr;
+ (NSArray *)getDayListWithMonth:(NSString *)month yaer:(NSString *)yaer;
+ (NSString *)getTimeStrWithString:(NSString *)str;
+ (UIColor *) getColor:(NSString *)hexColor;
+ (float )getAudioBGViewContentWidth:(float )voiceTimeLength;

+(NSString *)getNowTimeTimestamp;
+(long)getNowTimestamp;
+ (BOOL)chooseVideoExtensionIsSuffix:(NSData *)data format:(NSString *)format;
+ (BOOL)chooseImageExtensionIsSuffix:(NSData *)data format:(NSString *)format;
+ (NSString *)chooseImageTrueSuffix:(NSData *)data original:(NSString *)original;
+ (NSString *)chooseVideoTrueSuffix:(NSData *)data original:(NSString *)original;
+ (IMIFileFormat)chooseFileExtensionIsSuffix:(NSData *)data format:(NSString *)format;

@end

NS_ASSUME_NONNULL_END
