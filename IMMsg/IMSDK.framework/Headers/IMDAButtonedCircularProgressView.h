//
//  IMDAButtonedCircularProgressView.h
//  IMSDK
//
//  Created by snqu on 2023/5/15.
//

#import <IMSDK/IMSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface IMDAButtonedCircularProgressView : IMDACircularProgressView
@property(nonatomic, strong, readonly) UIImageView *downloadImageView;
@property(nonatomic, strong, readonly) UIImageView *pausedImageView;
@property(nonatomic, assign) BOOL loading;
@property(nonatomic, copy, nullable) void (^btnClickCallback) (void) ;

- (id)initWithFrame:(CGRect)frame loading:(BOOL)isLoading;

- (void)startAnimation;

@property(nonatomic, assign) BOOL isChangeAnimation;

- (void)startChangeAnimation;

@end

NS_ASSUME_NONNULL_END
