//
//  IMSDKMessageAttachmentModel.h
//  
//
//  Created by on 2019/11/11.
//  Copyright © 2019_All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class IMAvatarModel;
@class IMChatMemberInfo;

@interface IMSDKMessageAttachmentModel : NSObject // attachment matedata




@property (nonatomic,strong) IMAvatarModel *originInfo;
@property (nonatomic,strong) IMAvatarModel *posterInfo; //video - thumImage


// IMAGE,VIDEO,FILE
@property (nonatomic,assign) int type;            // attachment Message type
@property (nonatomic,copy) NSString *name;        // name
@property (nonatomic,copy) NSString *fileType;    // suffix
@property (nonatomic,copy) NSString *filePath;    // Local address file name
@property (nonatomic,copy) NSString *imageThumbPath;    // Local address file name

@property (nonatomic,copy) NSString *imageOriginPath;    // Local address file name
@property (nonatomic,copy) NSString *imageNormalPath;    // Local address file name
@property (nonatomic,copy) NSString *imageNormalObjectId;    // Local address file name
@property (nonatomic,copy) NSString *imageOriginObjectId;    // Local address file name

@property (nonatomic,copy) NSString *originObjectId;    // Local address file name

@property (nonatomic,copy) NSString *fileId;    // Local address file name
@property (nonatomic,copy) NSString *posterObjectId;    // Local address file name
@property (nonatomic,copy) NSString *bucketId;    // Local address file name
@property (nonatomic,copy) NSString *posterFileType;    // Local address file name
@property (nonatomic, copy) NSString *posterBucketId;


@property (nonatomic,copy) NSString *url;         // address
@property (nonatomic,copy) NSString *videoCover;  // cover address

@property (nonatomic,assign) float width;         //
@property (nonatomic,assign) float height;        //
@property (nonatomic,assign) long size;           // size
@property (nonatomic,assign) long duration;           // duration
@property (nonatomic,assign) long localMessageId; // Local ID
@property (nonatomic,assign) BOOL isOrigin;           // isOrigin
@property (nonatomic,assign) double uploadProgress; // upload Progress
@property (nonatomic,assign) CGSize lastSize;           // size
@property (nonatomic,assign) BOOL isGif;           // 
@property (nonatomic,copy) NSString *uid;  //
@property (nonatomic, strong) IMChatMemberInfo *uidInfo;
@property (nonatomic,assign) BOOL isHavePic;           //
@property (nonatomic,copy) NSString *momentId;  //

@property (nonatomic,assign) float thumbWidth;         //
@property (nonatomic,assign) float thumbHeight;        //


//applets
@property (nonatomic,copy) NSString *appletName;  //
@property (nonatomic,copy) NSString *appletId;  //
@property (nonatomic,assign) NSInteger appletType;  //
@property (nonatomic,copy) NSString *appletDes;  //
@property (nonatomic,copy) NSString *logoBucketId;  //
@property (nonatomic,copy) NSString *logoFileType;  //
@property (nonatomic,copy) NSString *logoObjectId;  //
@property (nonatomic,copy) NSString *iconBucketId;  //
@property (nonatomic,copy) NSString *iconFileType;  //
@property (nonatomic,copy) NSString *iconObjectId;  //
@property (nonatomic,copy) NSString *logoFilePath;  //
@property (nonatomic,copy) NSString *iconFilePath;  //


- (void)initWithDic:(NSDictionary *)dic;

@end

@interface IMSDKMessageAttachmentModel(File)
@property (nonatomic,readonly,strong) UIImage *fileTypeImage;
@end

@interface IMessageLoactionModel : NSObject        // Positioning matedata

@property (nonatomic,copy) NSString *addr;       // Address name
@property (nonatomic,copy) NSString *desc;       // Address name
@property (nonatomic,copy) NSString * thumbnailUrl; // address url
@property (nonatomic,copy) NSString * longitude;      //
@property (nonatomic,copy) NSString * latitude;       //
@property (nonatomic,copy) NSString * zoom;       //

- (void)initWithDic:(NSDictionary *)dic;

@end


@interface IMessageRedpacketModel : NSObject   // Red envelope 🧧matedata

@property (nonatomic,copy) NSString *_id;       // Red envelope id
@property (nonatomic,copy) NSString *text;      // Greetings
@property (nonatomic,assign) int type;          // 1: One-to-one red envelope, 2: Group red envelope
@property (nonatomic,assign) int currencyType;  // 0: currency  1: Coin
@property (nonatomic,assign) BOOL status;       // Whether to receive
@property (nonatomic,assign) BOOL expired;      // Whether it expires
- (void)initWithDic:(NSDictionary *)dic;

@end

@interface IMessagetakePacketModel : NSObject    // Open red envelope 🧧matedata

@property (nonatomic,copy) NSString *_id;        // Red envelope id
@property (nonatomic,assign) int type;           // 1: One-to-one red envelope, 2: Group red envelope
@property (nonatomic,copy) NSString *senderId;   // Send red packet id
@property (nonatomic,copy) NSString *senderName; // Red envelope sender name
@property (nonatomic,copy) NSString *takerId;    // Open red envelope id
@property (nonatomic,copy) NSString *takerName;  // Open the red envelope name
- (void)initWithDic:(NSDictionary *)dic;

@end




@interface IMessageTransferModel : NSObject    // Transfer matedata

@property (nonatomic,copy) NSString *_id;      // Red envelope id
@property (nonatomic,copy) NSString *text;     // Greetings
@property (nonatomic,copy) NSString *money;    // Amount of money
@property (nonatomic,copy) NSString *name;     // The other party's name
@property (nonatomic,copy) NSString *recUid;   // Recipient ID
@property (nonatomic,assign) int status;       // status
@property (nonatomic,assign) int currencyType; // 0: currency  1: Coin
@property (nonatomic,copy) NSString *unit;     // defalut unir

- (void)initWithDic:(NSDictionary *)dic;

@end



@interface IMessageSplitBillModel : NSObject // Group collection matedata

@property (nonatomic,copy) NSString *_id;             // Collection id
@property (nonatomic,copy) NSString *text;            // Remarks
@property (nonatomic,copy) NSString *money;           // Receiving amount
@property (nonatomic,copy) NSString *unitPrice;       // Unit price to be received
@property (nonatomic,copy) NSArray<NSString *>* uids; // User to pay IDArr
@property (nonatomic,assign) int status;              // Status, 1: receiving payment, 2: complete, 3: termination of payment, 4: timeout
@property (nonatomic,assign) int payStatus;           // 0: not paid 1 paid

- (void)initWithDic:(NSDictionary *)dic;

@end

@interface IMessageSplitBillTipModel : NSObject // Group collection matedata Tip message receiptTips

@property (nonatomic, copy) NSString *_id;        // Collection id
@property (nonatomic, copy) NSString *senderId;   // Sender id
@property (nonatomic, copy) NSString *senderName; // Sender name
@property (nonatomic, copy) NSString *payerId;    // Payer id
@property (nonatomic, copy) NSString *payerName;  // Payer name

- (void)initWithDic:(NSDictionary *)dic;

@end

typedef NS_ENUM(NSUInteger, YHMessageRelationshipType) {
    YHMessageRelationship_APPLY = 0, // Application
    YHMessageRelationship_ADD,       // Add to
    YHMessageRelationship_DELETE,    // delete
};


@interface IMessageRelationshipModel : NSObject //Position matedata

@property (nonatomic, assign) YHMessageRelationshipType  action;   //
@property (nonatomic, copy) NSString *text; //

@end




@interface IMessageVCardModel : NSObject //Business card matedata

@property (nonatomic,copy) NSString *imId;     //
@property (nonatomic,copy) NSString *userId;    // id
@property (nonatomic,copy) NSString *name;      // Name
@property (nonatomic,copy) NSString *aliasName; // alias
@property (nonatomic,copy) NSString *avatarUrl; // avatar
@property (nonatomic,assign) BOOL isOfficialAccount;

- (void)initWithDic:(NSDictionary *)dic;

@end


@interface IMessageOfficialAccountCardModel : NSObject //Business card matedata

@property (nonatomic,copy) NSString *_id;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,copy) NSString *avatar;
@property (nonatomic,copy) NSString *desc;
- (void)initWithDic:(NSDictionary *)dic;

@end



@interface IMessageMiniProgarmModel : NSObject //

@property (nonatomic,copy) NSString *name;     // name
@property (nonatomic,copy) NSString *mark;     // mark
@property (nonatomic,copy) NSString *icon;     // icon
@property (nonatomic,copy) NSString *imageUrl; // image url
@property (nonatomic,copy) NSString *url;      // url
@property (nonatomic,copy) NSString *_id;      // id
- (void)initWithDic:(NSDictionary *)dic;

@end


@interface IMessageImageLinkModel : NSObject //

@property (nonatomic,copy) NSString *imageUrl; //
@property (nonatomic,copy) NSString *linkUrl;  //
@property (nonatomic,copy) NSString *title;    //
- (void)initWithDic:(NSDictionary *)dic;

@end


@interface IMessageMomentModel : NSObject //

@property (nonatomic,copy) NSString *_id;        //
@property (nonatomic,copy) NSString *avatar;     //
@property (nonatomic,copy) NSString *content;    //
@property (nonatomic,copy) NSString *senderId;   //
@property (nonatomic,copy) NSString *senderName; //
@property (nonatomic,assign) int type;           // 0:picture  1:video
@property (nonatomic,copy) NSArray *url;         //
- (void)initWithDic:(NSDictionary *)dic;

@end

@interface IMessageNearbyModel : NSObject //

@property (nonatomic,copy) NSString *_id;    //
@property (nonatomic,copy) NSString *adr;    //
@property (nonatomic,copy) NSString *name;   //
@property (nonatomic,assign) int lat;        //
@property (nonatomic,assign) int lng;        //
@property (nonatomic,copy) NSArray *images;  //
- (void)initWithDic:(NSDictionary *)dic;

@end


@interface IMessageCoinTransactionModel : NSObject //

@property (nonatomic,copy) NSString *title;    //
@property (nonatomic,copy) NSString *coinUnit; //
@property (nonatomic,copy) NSString *amount;   //
@property (nonatomic,copy) NSString *method;   //
@property (nonatomic,copy) NSString *time;     //
@property (nonatomic,copy) NSString *remark;   //
- (void)initWithDic:(NSDictionary *)dic;

@end


typedef NS_ENUM(NSUInteger, IMessageVoiceCallStatusType) {
    IMessageVoiceCallStatusType_NONE = 0, // unknown
    IMessageVoiceCallStatusType_START,    // startVoiceCall
    IMessageVoiceCallStatusType_STOP,     // stopVoiceCall
};

@interface IMessageVoiceCallStatusModel : NSObject

@property (nonatomic, copy) NSString *uid;
@property (nonatomic, copy) NSString *callerName;
@property (nonatomic, copy) NSString *channelId;
@property (nonatomic, assign) int callType;
@property (nonatomic, assign) int callAction;
@property (nonatomic, copy) NSString *memberJson;
@property (nonatomic, assign) IMessageVoiceCallStatusType status;
- (void)initWithDic:(NSDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
