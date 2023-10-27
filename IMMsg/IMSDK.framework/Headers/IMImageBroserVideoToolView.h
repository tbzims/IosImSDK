//
//  IMImageBroserVideoToolView.h
//  
//
//  Created by    on 2022/1/18.
//  Copyright © 2022 yinhe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IMCLGCDTimerManager.h"
#import "IMCLSlider.h"
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface IMImageBroserVideoToolView : UIView

@property (nonatomic, strong) UIButton *playBtn;


- (void) changeStatu:(AVPlayer *)player playerItem:(AVPlayerItem *)playerItem;

/*Progress bar timer*/
@property (nonatomic, strong) IMCLGCDTimer       *sliderTimer;
/*Click timer*/
@property (nonatomic, strong) IMCLGCDTimer       *tapTimer;
@property (nonatomic,strong) IMCLSlider *slider;

-(void)cl_progressSliderValueChanged:(AVPlayer *)player playerItem:(AVPlayerItem *)playerItem dragedSeconds:(CGFloat)dragedSeconds;

- (void)getDuration:(NSInteger)duration;


@end

NS_ASSUME_NONNULL_END
