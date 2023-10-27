//
//  IMMessageInfoModel.h
//  
//
//  Created by on 2019/11/6.
//  Copyright © 2019_All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HYText/YYText.h>
#import "IMChatTextLayout.h"
#import "IMSDKMessageAttachmentModel.h"
#import "IMMessageQuotoInfoModel.h"

#define IMAvatarTopToContentTop 8.0
#define IMNickNameHeight 14.0
#define IMBodyTopToNickName 5.0
#define IMTimeLabelTopToBodyBottom 7.0
#define IMStatuImgHeight 15.0
#define IMStatuImgBottomToContentBottom 8.0

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, YHMessageDeliveryState) {
    
    Download_Success = 1,
    Download_Failed,
    Download_Illegal,
    Not_Require,
    Downloading,
    Uploading,
    Uploading_Success,
    Uploading_Failed
    
//    YHMessageDeliveryState_UNREAD = 0,   //
//    YHMessageDeliveryState_READ,   //
//    YHMessageDeliveryState_PENDING,   //
//    YHMessageDeliveryState_SENT,    //
//    YHMessageDeliveryState_DELIVERED,      //
//    YHMessageDeliveryState_DELIVERED_AND_READ   //
};
typedef NS_ENUM(NSUInteger, IMMessageContentType) {
    IMMessageContentType_UNKNOWN = 0,
    IMMessageContentType_DEFAULT = 1,   // Text message
    IMMessageContentType_IMAGE,   // image
    IMMessageContentType_AUDIO,  // recording
    IMMessageContentType_VIDEO,   // video
    IMMessageContentType_FILE,   // file
    IMMessageContentType_SendRedEnvelope = 6, // SendRedEnvelope
    IMMessageContentType_CoinTransfer = 7, // transfer
//    IMMessageContentType_Call = 8,  // Audio and video calls
    IMMessageContentType_MiniProgram = 9,  //
    IMMessageContentType_Moments = 10,  // moments
    IMMessageContentType_payNotice = 11, // pay notice
    IMMessageContentType_getRedEnvelope = 12,//get RedEnvelope
    IMMessageContentType_Location = 13,// user location
    IMMessageContentType_meeting = 14, // meeting
    IMMessageContentType_AT_Person = 15, // @xxxx  @all
    IMMessageContentType_HollowManStatus = 18, //HollowMan-msg
    IMMessageContentType_CardMessage = 19,
    IMMessageContentType_RevokeStatus = 81, //ContentType_Revoke-msg
    IMMessageContentType_UidTextA = 20,
    IMMessageContentType_TextSystemNotice = 21,
    IMMessageContentType_Customize = 22,
    IMMessageContentType_VerticalCardMessage = 23,
    
    
    // Only use to local for UI
    IMMessageContentType_HistoryPosiation,
};

/**
 会话类型

 - Single_Type: 单聊
 - Group_Type: 群组
 - Chatroom_Type: 聊天室
 - Channel_Type: 频道
 - Things_Type: 物联网
 */
typedef NS_ENUM(NSInteger, IMMConversationType) {
    Single_Type,
    Group_Type,
    Chatroom_Type,
    Channel_Type,
    Things_Type,
};


/**
 消息状态

 - Message_Status_Sending: 发送中
 - Message_Status_Sent: 发送成功
 - Message_Status_Send_Failure: 发送失败
 - Message_Status_Unread: 未读
 - Message_Status_Readed: 已读
 - Message_Status_Played: 已播放(媒体消息)
 */
typedef NS_ENUM(NSInteger, IMessageStatus) {
    Message_Status_Sending,
    Message_Status_Sent,
    Message_Status_Send_Failure,
    Message_Status_Readed,
    Message_Status_Mentioned,
    Message_Status_AllMentioned,
    Message_Status_Unread,
    Message_Status_Played
};

@class IMMessageContent;
@class IMMessage;
@class IMChatMeetingModel, IMAvatarModel;
@interface IMMessageInfoModel : NSObject

//@property (nonatomic, assign)BOOL isCountSingle;
@property (nonatomic, strong) IMAvatarModel * __nullable avatarModel;
@property (nonatomic, copy) NSString *showName;

@property (nonatomic, assign)BOOL isRecord;
@property (nonatomic, assign)BOOL isSearchAnimation;
@property (nonatomic, copy)NSString *searchMessageId;

@property (nonatomic, copy) NSString *fromUser;
@property (nonatomic, copy) NSString *seed;
@property (nonatomic, copy) NSString *avatar;

@property (nonatomic, assign) long long serverTime;
@property (nonatomic, assign) long long displayTime;

@property (nonatomic, assign, readonly) long long serverSecondsTime;
@property (nonatomic, assign)IMessageStatus status;
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, copy) NSString *vCode; //version Code
@property (nonatomic, copy) NSString *aMid;
@property (nonatomic, assign) NSInteger isDel;

@property (nonatomic, assign) BOOL isTranslate; //Whether to translate
@property (nonatomic, assign) BOOL isTranslating; //Are you translating
@property (nonatomic, assign)NSInteger translateIosStatus; //0:no 1:statrt 2:sucess 3:fail
@property (nonatomic, assign) BOOL isSame; //
@property (nonatomic, assign) BOOL isChangeHistoryTop; //yes:20 no:12

@property (nonatomic, assign) BOOL isLocal; //

@property (nonatomic, assign) BOOL isQuoto; //
@property (nonatomic, strong) NSString *quotoStr; //
@property (nonatomic, strong) IMMessageQuotoInfoModel *quotoModel; //
@property (nonatomic, copy) NSAttributedString * quotoAttString; //
@property (nonatomic, assign) CGSize quotoSize;  //
@property (nonatomic, strong) NSString *groupId; //
@property (nonatomic, copy) NSString *translateStr;
@property (nonatomic, strong) IMChatTextLayout * translatelayout;
@property (nonatomic, copy) NSString *MessageKey;   //
@property (nonatomic, copy) NSString *msgContent;   //
@property (nonatomic, copy) NSString *giftText;   //

@property (nonatomic, assign) CGSize chatBaseLeftSize;   //
@property (nonatomic, assign) CGSize chatBaseRightSize;   //
@property (nonatomic, assign) CGSize msgSize;   //
@property (nonatomic, copy) NSString *nameAlias;   //
@property (nonatomic, copy) id moContentMediaModel;   //
@property (nonatomic, strong) IMMessageContent *msgContentModel;
@property (nonatomic, strong) IMMessage *originalMessage;
@property (nonatomic, strong) IMChatMeetingModel *meeting;

@property (nonatomic, strong) UIView *customizeView;
@property (nonatomic, assign) BOOL isAddCustomize;

@property (nonatomic, copy) NSString *customizeTitle;
@property (nonatomic, copy) NSString *customizeBody;


//@property (nonatomic, copy) NSString *content;
//@property (nonatomic, copy) NSString *createTime;   //
//@property (nonatomic, copy) NSNumber *createdAtTime; //
@property (nonatomic, copy) NSString *sid;   //
@property (nonatomic, assign) BOOL isGroupMessage;  //
@property (nonatomic, copy) NSString *speakerName;  //
@property (nonatomic, copy) NSURL *speakerAvatar;   //
@property (nonatomic, assign) BOOL isInComingMessage;  //
@property (nonatomic,copy) NSString * nickName;       //
@property (nonatomic, assign) YHMessageDeliveryState deliveryState;//Message sending status
@property (nonatomic, assign) BOOL isSendToServer;
@property (nonatomic, assign) BOOL isPlayingAudio;      // Whether sound is playing
@property (nonatomic, assign) float playAudioProgross;  // Play sound progress
@property (nonatomic, assign) IMMessageContentType contentType;          //Message type
@property (nonatomic, strong) IMSDKMessageAttachmentModel *attachment;   //attachment content
@property (nonatomic, strong) IMessageLoactionModel *loactonModel;   //location content
@property (nonatomic, strong) IMessageRedpacketModel *redpacketModel;   //Red envelope content
@property (nonatomic, strong) IMessagetakePacketModel *takePacketModel;   //Open red envelope content
@property (nonatomic, strong) IMessageTransferModel *transferModel;   //Transfer content
@property (nonatomic, strong) IMessageSplitBillModel *splitBillModel;   //Group collection content
@property (nonatomic, strong) IMessageSplitBillTipModel *splitBillTipModel;   //Group collection content Tip message
@property (nonatomic, strong) IMessageVCardModel *vCardModel;   //Business card information
@property (nonatomic, strong) IMessageOfficialAccountCardModel *officialAccountCardModel;   // Official Account card information
@property (nonatomic, strong) IMessageMiniProgarmModel *miniprogramModel;   //miniprogram Model
@property (nonatomic, strong) IMessageCoinTransactionModel *coinTransactionModel;   //
@property (nonatomic, strong) NSArray<IMessageImageLinkModel *> *imageLinkModelArr;
@property (nonatomic, strong) IMessageMomentModel *momentModel;   //
@property (nonatomic, strong) IMessageNearbyModel *nearbyModel;   //
@property (nonatomic, strong) IMessageVoiceCallStatusModel *callStatusModel;
@property (nonatomic, assign) CGFloat cellHeight;
@property (nonatomic, assign) BOOL isSelected;    // chosen
@property (nonatomic, assign) BOOL showCheckBox;  // Show check box
@property (nonatomic, strong) IMChatTextLayout *layout;
@property (nonatomic, copy) NSString *digest;
@property (nonatomic, assign) int messageContentType;
@property (nonatomic, assign)long messageId;
@property (nonatomic, assign)long long messageUid;

@property (nonatomic, assign)CGFloat downProgress; //
@property (nonatomic, assign)NSInteger downStatus;
@property (nonatomic, assign) BOOL isThird;

// WCDB Property
@property (nonatomic, assign) long sequence;
@property (nonatomic, assign) long _id;

@property (nonatomic, assign) int type;
@property (nonatomic, assign) long createTime;
@property (nonatomic, copy) NSString *mid;
@property (nonatomic, copy) NSString *chatId;
@property (nonatomic, copy) NSString *aChatId;

@property (nonatomic, copy) NSString *sender;
@property (nonatomic, copy) NSString *content;

@property (nonatomic, assign) CGSize textSize;
//@property (nonatomic, strong) NSMutableAttributedString *attachTextStr;

@property (nonatomic, strong) NSAttributedString *attachTextStr;

@property (nonatomic, assign)IMMConversationType chatType;
@property (nonatomic, assign) BOOL isSingle;

@property (nonatomic, assign) BOOL isRefreshGroupMember;


@property (nonatomic, strong) NSString *sourceObject;
@property (nonatomic, assign) NSInteger sourceProgress;
@property (nonatomic, assign) NSInteger sourceStatus;


- (float)returnImageLinkHeight;
- (float)returnORIImageLinkHeight;
- (float)returnMiniProgramHeight;
- (float)returnNearByHeight;
- (float)returnMomentHeight;
- (CGSize)returnFileContentSize;


- (BOOL)canSlip;
- (BOOL)canRevoke;

@end

NS_ASSUME_NONNULL_END
