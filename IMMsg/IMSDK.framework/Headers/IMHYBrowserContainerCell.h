//
//  IMHYBrowserContainerCell.h
//  
//
//  Created by    on 2022/4/15.
//  Copyright © 2022 yinhe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IMImage.h"
#import "IMCallHeadImageView.h"
#import "IMImageBroserVideoToolView.h"

NS_ASSUME_NONNULL_BEGIN

@class IMBrowserVo,IMOSS, IMHYBrowserContainerCell;

@protocol IMHYBrowserContainerDelegate <NSObject>


- (void)VideoDownSuccess:(IMHYBrowserContainerCell *)cell;

- (void)collectionIsScroll:(BOOL)isScroll;

- (BOOL)collectionChooseIsScroll;

@end

@interface IMHYBrowserContainerCell : UICollectionViewCell

@property (nonatomic, strong) UIImage *placeholderImage;
@property (nonatomic, strong) UIScrollView *scrollView;
//@property (nonatomic, strong) IMCallHeadImageView *browserImageView;
@property (nonatomic, strong) IMBrowserVo *cellModel;
@property (nonatomic, weak) UIView *weakBackgroundView;
@property (nonatomic, strong) id dataSource;
//@property (nonatomic, assign) BOOL isDownOriginal;
@property (nonatomic, strong) UIView *videoView;
@property (nonatomic, strong) IMOSS *oss;

//@property (nonatomic, strong) UICollectionView *recordCollection;

@property (nonatomic, strong) IMAnimatedImageView *thumImageView;

//click = 0，double click = 1，scroll quite = 2
@property (nonatomic, copy) void(^whenTapOneActionClick)(IMHYBrowserContainerCell *cell);
@property (nonatomic, copy) void(^whenTapTwoActionClick)(IMHYBrowserContainerCell *cell);
@property (nonatomic, copy) void(^whenNeedHideAction)(IMHYBrowserContainerCell *cell);
@property (nonatomic, copy) void(^whenTapLongActionClick)(IMHYBrowserContainerCell *cell);
@property (nonatomic, copy) void(^whenVideoDownSuccessActionClick)(IMHYBrowserContainerCell *cell);
@property (nonatomic, strong) IMImageBroserVideoToolView *tempVideoToolView;


@property (nonatomic, weak) id<IMHYBrowserContainerDelegate> cellDelegate;

@property (nonatomic, copy) void(^whenChangeBackgroundAlpha)(CGFloat alpha);


- (void)showThumImage:(IMBrowserVo *)model isDown:(BOOL)isDown;



@end

NS_ASSUME_NONNULL_END
