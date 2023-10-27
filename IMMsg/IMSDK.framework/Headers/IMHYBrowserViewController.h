//
//  IMHYBrowserViewController.h
//  
//
//  Created by    on 2022/4/15.
//  Copyright © 2022 yinhe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IMImage.h"

NS_ASSUME_NONNULL_BEGIN

@protocol BrowserCheckDelegate <NSObject>

/*
 viewFrame: imageview frame on window
 */
- (void)panGestureCloseVC:(CGRect)viewFrame backgroundColor: (UIColor *)color alpha: (CGFloat)alpha;

@end

@class IMOSS, IMBrowserVo;

@interface IMHYBrowserViewController : UIViewController

@property (nonatomic, strong) IMOSS *oss;
@property (nonatomic, assign) BOOL showContainerWithAnimation;


@property (nonatomic, strong) UIView *placeholderView;
@property (nonatomic, strong) IMImage *placeholderImage;
@property (nonatomic, strong) id dataSource;
@property (nonatomic, strong) UIImage *screenshotsImage;
@property (nonatomic, strong) NSArray *toViews;
@property (nonatomic,weak) id<BrowserCheckDelegate> delegate;

- (void)show;

- (void)showImageBrowser;

//- (void)needUpdateIndex:(NSInteger )currentPage totalCount:(NSInteger )totalCount isVideo:(BOOL)isVideo isFullImage:(BOOL)isFullImage imageSize:(long)imageSize;

- (void)needUpdateIndex:(NSInteger )currentPage totalCount:(NSInteger )totalCount browserVo:(IMBrowserVo *)browserVo;



- (void)qrCode:(BOOL)isCode;

- (void)moreTool;

- (void)SaveData;

- (void)ShareData;

- (void)startQrCode;

- (void)removeShow;

- (void)downOriginal;

- (void)hideToolView:(BOOL)isHide isVideo:(BOOL)isVideo;

- (void)readyStartQrCode;

- (BOOL)isOriginImage;

- (void)pauseVideo;


- (void)refreshPrewList;


- (NSString *) getAssetPath;

- (NSInteger) getAssetOriginStatus;

- (BOOL)currentAttachmentMessageIsDeleted;

- (void)attachmentMessageDeleted:(NSInteger)index isCurrentDelete:(BOOL)isCurrentDelete;

@end

NS_ASSUME_NONNULL_END
