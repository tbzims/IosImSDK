//
//  IMBrowserStatusView.h
//  IMSDK
//
//  Created by oceanMAC on 2023/5/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, IMBrowserStatus) {
    browser_downLoading = 0,       //
    browser_pause ,    //
    browser_error,      //
};

@class IMBrowserVo,IMOSS,IMImageTempModel, IMDAButtonedCircularProgressView;

@interface IMBrowserStatusView : UIView

@property (nonatomic, assign) IMBrowserStatus browserStatus;
- (void)setProgress:(CGFloat)progress;

@property (nonatomic, strong) IMImageTempModel *tempModel;
@property (nonatomic, strong) IMOSS *oss;
@property (nonatomic,strong) IMDAButtonedCircularProgressView  *downProgressView;


@property (nonatomic, copy) void(^whenStartDownClick)(IMImageTempModel *tempModel);

@property (nonatomic, copy) void(^whenPauseDownClick)(IMImageTempModel *tempModel);

@end

NS_ASSUME_NONNULL_END
