//
//  IMCallHeadImageView.h
//  
//
//  Created by    on 2022/3/15.
//  Copyright © 2022 yinhe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IMImage.h"
#import <CommonModule/CommonModule.h>
//#import "IMImageTempModel.h"

@class IMOSS, IMUISetting;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, IMFileSourceStatus) {
    file_notDown = 4,
    file_wait = 6,
    file_fail = 8,
    file_pause = 7,
    file_success = 1,
};

//case progress = 0
//case success = 1
//case defult = 4
//case wait = 6
//case pause = 7
//case fail = 8
@interface IMCallHeadImageView : UIView

//@property (nonatomic, strong) IMImageTempModel *tempModel;
@property (nonatomic, strong) IMAnimatedImageView *thumImageView;

@property (nonatomic, strong) IMOSS *oss;
@property (nonatomic, strong) IMUISetting *uiSetting;

//- (void)showImage:(IMImageTempModel *)tempModel Progress:(void (^)(float progress,BOOL success))progress;

- (void)showImage:(IMImageTempModel *)tempModel Progress:(void (^)(float progress,IMFileSourceStatus fileStatus))progress;

- (void)againDown;

- (void)removeNotice;

- (void)showDefault;

@end

NS_ASSUME_NONNULL_END
