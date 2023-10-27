//
//  IMChangeMasageModel.h
//  
//
//  Created by  on 2021/8/7.
//  Copyright © 2021_All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IMMessageInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@class IMMessage, IMContext, IMUISetting, IMDataBase;
@protocol IMGroupMemberDelegate;
@interface IMChangeMasageModel : NSObject

//+ (IMMessageInfoModel *)changgeModel:(IMMessage *)model context:(IMContext *)context uiSetting:(IMUISetting *)uiSetting memberDelegate:(nullable id<IMGroupMemberDelegate>)memberDelegate;

+ (IMMessageInfoModel *)changgeModel:(IMMessage *)model context:(IMContext *)context dataBase:(IMDataBase *)dataBase uiSetting:(IMUISetting *)uiSetting memberDelegate:(nullable id<IMGroupMemberDelegate>)memberDelegate;


+ (NSString *)getTimeString:(IMMessageInfoModel *)model;

+ (NSAttributedString *)getQuoteAttr:(IMMessageInfoModel *)model uiSetting:(IMUISetting *)uiSetting;


@end

NS_ASSUME_NONNULL_END
