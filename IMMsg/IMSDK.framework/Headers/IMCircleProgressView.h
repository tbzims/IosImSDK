//
//  IMCircleProgressView.h
//  GYCirCleProgress
//
//  Created by ronmei on 16/7/25.
//  Copyright © 2016 . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IMCircleProgressView : UIView

/**
 *  @author       QQ: 289978684
 *  GitHub: https://github.com/gaoyuexit/GYCirCleProgressView
 *  @param nonatomic
 */


/**
 *  default = 0.75s
 */
@property (nonatomic, assign) NSTimeInterval duration;

/**
 *
 */
@property (nonatomic, strong) UIColor       *trackColor;

/**
 *
 */
@property (nonatomic, assign) CGFloat        trackWidth;

/**
 *
 */
@property (nonatomic, strong) UIColor       *progressBarColor;

/**
 *
 */
@property (nonatomic, assign) CGFloat        progressBarWidth;

/**
 *
 */
@property (nonatomic, strong) UIColor       *ballColor;

/**
 *  
 */
@property (nonatomic, strong) UIColor        *ballStrokeColor;
/**
 *
 */
@property (nonatomic, strong) UILabel       *ratioLabel;

/**
 *
 *
 *  @param progress
 *  @param animated 
 */
- (void)setProgress:(float)progress animated:(BOOL)animated;


@end
