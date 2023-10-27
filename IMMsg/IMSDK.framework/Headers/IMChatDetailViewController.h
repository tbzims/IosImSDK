//
//  IMChatDetailViewController.h
//  
//
//  Created by on 2019/11/5.
//  Copyright © 2019_All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IMSDKMessageAttachmentModel.h"

@class IMMessage, IMContext, IMOSS, IMMessageInfoModel, IMRedPackModel,IMLocationModel, IMChatDetailViewController, IMShowUserInfo;
@class IMLongPressPopView;
@class IMUISetting;
@class IMSdk;

@protocol IMChatDetailCheckDelegate <NSObject>

- (void)tapfileAtIndexPath:(NSString *)mid;
- (void)tapImageAtIndexPath:(NSString *)chatId messageId:(NSInteger)messageId aMid:(NSString *)aMid;
- (void)tapCardButonIndexPath:(NSString *)amid buttonId:(NSString *)buttonId;
- (void)clickTxtNoticeCardIndexPath:(NSString *)amid buttonId:(NSString *)buttonId;
- (void)tapMessageText:(NSString *)amid tempId:(NSString *)tempId textId:(NSString *)textId;
- (void)selectMessageAct;
- (void)tapMessageReportText:(NSString *)amid;
- (void)quoteMessage:(NSString *)amid sender:(NSString *)sender attr:(NSAttributedString *)attr;
- (void)forwardMessage:(NSString *)amid;
- (void)tapTransferMessage:(NSString *)amid orderId:(NSString *)orderId;
- (void)tapPayNoticeMessage:(NSString *)amid outTradeNo:(NSString *)outTradeNo orderId:(NSString *)orderId act:(NSInteger)act;

- (void)tapReferenceMessageIsDeleted:(NSString *)amid;
- (void)tapReferenceMessage:(NSString *)amid content:(NSString *)content;

- (void)refreshRedEnvelopeStatusChange:(NSString *)amid outTradeNo:(NSString *)outTradeNo;

- (void)tapMomentAtIndexPath:(NSString *)amid feedId:(NSString *)feedId;
- (void)tapLocationAtIndexPath:(NSString *)amid location: (IMLocationModel *)location;

- (void)GetRedPacket:(IMRedPackModel *)redPackModel;//

- (void)longPressUserAvatar:(NSString *)amid aUid:(NSString *)aUid;
- (void)tapUserAvatar:(NSString *)amid aUid:(NSString *)aUid;

- (void)tapMeetingCallRecord:(NSString *)amid isVideo:(BOOL)isVideo;

- (void)setGroupMemberInfoWithController:(IMChatDetailViewController *)controller datas:(NSArray<IMShowUserInfo *> *)datas;

- (void)tapRedPacketNotice:(NSString *)amid outTradeNo:(NSString *)outTradeNo;


//- (void)deleteMessageForMe:(NSString *)amid senderAUid:(NSString *)aUid;
//- (void)deleteMessageForEveryOne:(NSString *)amid senderAUid:(NSString *)aUid;

- (void)detailDidSelectRow;
- (IMSdk *)getIMSdkInstance;

- (void)getCustomView:(NSString *)amid body:(NSString *)body timeInt:(NSInteger)timeInt handleCustomView:(void(^)(UIView *itemView))handle tapCustomView:(void(^)(UIView *itemView))tap;

- (void)getWebUrlLinkClick:(NSString *)aMid content:(NSString *)content bid:(NSString *)bid;

@end

NS_ASSUME_NONNULL_BEGIN

@interface IMChatDetailViewController : UIViewController

//ocean new
@property (nonatomic, strong) NSString *chatId;
@property (nonatomic, assign) BOOL isSearch;
@property (nonatomic, strong) IMMessage *searchModel;

@property (nonatomic,weak) id<IMChatDetailCheckDelegate> checkDelegate;
@property (nonatomic, strong) IMContext *context;
@property (nonatomic, strong) IMOSS *oss;
@property (nonatomic, strong) IMUISetting *uiSetting;
@property (nonatomic, strong) NSMutableArray *selectMessagesArr;

- (void)getChatId:(NSString *)chatId aChatId:(NSString *)aChatId isPreLoadData:(BOOL)isPreLoadData;

- (NSArray <NSString *>*)getForwardSelectAmids;

@property (nonatomic, strong, nullable) IMLongPressPopView * longView;

- (void)onCancleMessageMultipleChoose;

//- (NSAttributedString *)getQuoteAttr:(IMMessageInfoModel *)model;

- (UIImageView *)getClickImageView:(NSInteger)mid;
- (void)setTableViewContentInset:(UIEdgeInsets)inset;
- (void)setTableViewScrollIndicatorInsets:(UIEdgeInsets)inset;
- (void)setTableViewContentOffset:(CGPoint)offset animated:(BOOL)animated;
- (UIEdgeInsets)getTableViewContentInset;
- (UIEdgeInsets)getTableViewScrollIndicatorInsets;
- (CGPoint)getTableViewContentOffset;
- (CGSize)getTableViewContentSize;

-(BOOL)reloadRowIfDataModelIsShow: (NSString *)mid;
-(BOOL)dataModelIsShow: (NSString *)mid;

- (void)clearData;
- (void)clickQuoteMsgWithAmid:(NSString *)aMid mid:(NSString *)mid mainMid:(NSString *)mainMid;

//- (void)getSaveTempMessages:(NSArray <IMMessageInfoModel *> *)messageModels chatId:(NSString *)chatId;

- (void)setPreLoadData:(NSInteger)historyIndex firstMsgIndex:(NSInteger)firstMsgIndex haveHistory:(BOOL)haveHistory msg:(NSArray<IMMessageInfoModel *> *)msg;

@end

NS_ASSUME_NONNULL_END
