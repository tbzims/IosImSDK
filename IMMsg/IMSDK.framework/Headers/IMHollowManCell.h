//
//  IMHollowManCell.h
//  
//
//  Created by  on 2021/8/10.
//  Copyright © 2021_All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class IMMessageInfoModel;
@class IMHollowManCell;
@protocol IMHollowManCellDelegate <NSObject>

@optional
- (void)cell:(IMHollowManCell *)cell tempId:(NSString *)tempId clickText:(NSString *)textId;

@end

@interface IMHollowManCell : UITableViewCell

@property (nonatomic,strong) IMMessageInfoModel *model;
@property (nonatomic, weak) id<IMHollowManCellDelegate> delegate;

- (void)setupModel:(IMMessageInfoModel *)model;
- (void)setUnknowText:(NSString *)text;

@end

NS_ASSUME_NONNULL_END
