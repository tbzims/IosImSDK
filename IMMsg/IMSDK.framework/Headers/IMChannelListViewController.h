//
//  IMChannelListViewController.h
//  
//
//  Created by on 2019/11/4.
//  Copyright © 2019_All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@class IMChannelListViewController;
@class IMShowUserInfo;
@class IMMessageInfoModel;

@protocol IMChannelListCheckDelegate <NSObject>

- (void)didSelectAchatId:(NSString *)aChatId;
- (void)setGroupMemberInfoWithController:(IMChannelListViewController *)controller datas:(NSArray<IMShowUserInfo *> *)datas;
- (void)tableViewDidScroll:(UIScrollView *)tableView;
- (void)tableViewDidEndDecelerating:(UIScrollView *)tableView;
- (void)tableViewDidEndDragging:(UIScrollView *)tableView willDecelerate:(BOOL)decelerate;
- (void)showMarkerWithAChatIds:(NSArray <NSString *> *)aChatIds;
- (void)showSubTitleWithAChatIds:(NSArray <NSString *> *)aChatIds;
- (void)showConversationInfoWithAChatIds:(NSArray <NSString *> *)aChatIds;

- (void)showDeleteConversationWithAChatIds:(NSArray <NSString *> *)aChatIds;

//- (void)showSaveTempMessages:(NSArray <IMMessageInfoModel *> *)messageModels chatId:(NSString *)chatId;

//- (void)isEnterToChatList:(BOOL)enterToChatList;

- (void)firstDataComplete;

//- (void)onShowSubLogWithAChatId:(NSString *)aChatId blockLog:(void(^)(NSString *,UIImage * _Nullable))blockLog1;


- (void)onShowSubLogWithAChatId:(NSString *)aChatId complete:(void(^)(NSString *aChatId, UIImage * _Nullable image))handle;

//- (void)onShowSubLogWithAChatId:(NSString *)aChatId complete:(void(^)(NSString *,UIImage * _Nullable))blockLog1;


@end

@class IMConversationInfo,IMConversationViewModel;

@interface IMChannelListViewController : UIViewController

//@property (nonatomic, strong) NSArray *aChatId;

//@property (nonatomic, strong) NSArray *conversationInfos;

- (void)refreshListWhenReseletTabBar;
@property (nonatomic,weak) id<IMChannelListCheckDelegate> delegate;

//- (void)getConversions:(NSArray *)chatIds isAll:(BOOL)isAll folderInfo:(IMConversationInfo *)folderInfo;

- (void)getViewModel:(IMConversationViewModel *)conversionViewModel;
- (void)setTableHeaderView:(UIView *)headerView;
- (void)setTableViewContentInset:(UIEdgeInsets)inset;
- (void)setTableViewScrollIndicatorInsets:(UIEdgeInsets)inset;
- (void)setTableViewContentOffset:(CGPoint)offset animated:(BOOL)animated;

- (void)setTableEmpytView:(UIView * _Nullable)empty;
- (void)clearDataSource;

- (void)ocChatDoubleTapNotification;

@end



NS_ASSUME_NONNULL_END
