//
//  UITableView+IMEmptyView.h
//  MYSaSClerk
//
//  Created by  on 2019/11/16.
//  Copyright © 2019 chong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QMUIKit/QMUIKit.h>
#import <Masonry/Masonry.h>
#import "IMEmptyButtonConfig.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^buttonEvent_t)(UIButton *button);


@interface UITableView (IMEmptyView)

@property (nonatomic, strong) QMUIEmptyView *emptyView;

@property (nonatomic, assign) BOOL emptyApplyToPreload;
@property (nonatomic, assign) BOOL hiddenPreloadEmptyView;

//-(void)addEmptyViewWithImageName:(NSString*)imageName title:(NSString*)title;

- (void)setEmptyViewWithImageName:(NSString *)imageName title:(NSString *)title detail:(NSString *)detail;
- (void)updateEmptyViewWithImageName:(NSString *)imageName title:(NSString *)title top:(int)height;

- (void)updateEmptyViewWithImageName:(NSString *)imageName title:(NSString *)title des:(NSString *)des;
- (void)updateJsonViewWithImageName:(NSString *)imageName title:(NSString *)title top:(int)height;

//- (void)updateEmptyViewWithImageName:(NSString *)imageName
//                                text:(NSString *)text
//                         buttonTitle:(NSString * _Nullable)buttonTitle;
//
- (void)updateEmptyViewWithImageName:(NSString *)imageName
                                text:(NSString *)text
                                 des:(NSString *)des
                         button:(IMEmptyButtonConfig * _Nullable)config
                               event:(__nullable buttonEvent_t)event;

- (void)showJsonEmptyViewWithImageName:(NSString *)imageName title:(NSString *)title des:(NSString*)showString;
- (void)setChatDetailEmpty:(BOOL)isGroup;
- (void)setChatDetailCardEmpty;

- (void)im_hideEmptyView;
- (void)im_showEmptView;
-(void)deleteView;
@end

NS_ASSUME_NONNULL_END
