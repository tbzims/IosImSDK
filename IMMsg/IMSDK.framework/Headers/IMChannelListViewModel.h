//
//  IMChannelListViewModel.h
//  IMSdk
//
//  Created by oceanMAC on 2022/10/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "IMChannelTempModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^IMChatListDataEventBlock)(void);

@class IMConversationViewModel;
@interface IMChannelListViewModel : NSObject

+ (NSArray *)dataWithChangeLocation:(NSArray *)dataArray RefreshArr:(NSArray*)refreshArr conversionViewModel:(IMConversationViewModel *)conversionViewModel;
+ (NSArray *)dataSettingWithChangeLocation:(NSArray *)dataArray RefreshArr:(NSArray*)refreshArr conversionViewModel:(IMConversationViewModel *)conversionViewModel;


//remove chatId
+ (NSArray *)dataWithRemoveChatId:(NSArray *)dataArray ChatIdArr:(NSArray*)chatIdArr;


+ (void)handleConversationMessage:(NSArray *)dataArray;

+ (void)handleConversationMessage:(NSArray *)dataArray oldData: (NSMutableDictionary *)oldDataArray;

+ (NSArray *)conversionListFillter: (NSArray *)originalList targetList:(NSArray *)targetList targetChatIds:(NSArray *)targetChatIds conversionViewModel:(IMConversationViewModel *)conversionViewModel;


+ (IMChannelTempModel *)dataWithChangeLocation1:(NSArray *)dataArray RefreshArr:(NSArray*)refreshArr conversionViewModel:(IMConversationViewModel *)conversionViewModel;


@end

NS_ASSUME_NONNULL_END
