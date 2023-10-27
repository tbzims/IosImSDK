//
//  IMChatDetailViewModel.h
//  
//
//  Created by  on 2021/8/9.
//  Copyright © 2021_All rights reserved.
//

#import <Foundation/Foundation.h>

#import "IMMessageInfoModel.h"
#import "IMChangeMasageModel.h"
@class IMMessageInfoModel;
@class IMChangeMasageModel, IMContext, IMUISetting, IMDataBase;
@protocol IMGroupMemberDelegate;
NS_ASSUME_NONNULL_BEGIN

@interface IMChatDetailViewModel : NSObject

//Data assembly
+ (NSArray *)dataWithAssemblyOrAdd:(NSArray *)dataArray MsgList:(NSArray*)msgList needAdd:(BOOL)needAdd context:(IMContext *)context uiSetting:(IMUISetting *)uiSetting memberDelegate:(nullable id<IMGroupMemberDelegate>)memberDelegate;

//delete mid
+ (NSArray *)deleteWithMids:(NSArray *)dataArray Mids:(NSArray *)mids;

+ (void)clickFileWithStaus:(NSString *)fileId completionHandle:(void(^)(YHMessageDeliveryState fileStatus,NSInteger progress))completed;

+ (void)clickFileWithObjectId:(NSString *)objectId completionHandle:(void(^)(NSInteger progress))completed;

@end

NS_ASSUME_NONNULL_END
