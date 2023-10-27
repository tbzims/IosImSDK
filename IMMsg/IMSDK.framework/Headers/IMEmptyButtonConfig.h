//
//  IMEmptyButtonConfig.h
//  IMSDK
//
//  Created by oceanMAC on 2022/11/29.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface IMEmptyButtonConfig : NSObject

@property (nonatomic, strong) UIColor *backGroudColor;
@property (nonatomic, strong) UIColor *titleTextColor;
@property (nonatomic, strong) UIFont *titleTextFont;
@property (nonatomic, strong) NSString *titleText;
@property (nonatomic, assign) CGFloat buttonHeight;
@property (nonatomic, strong) UIColor *textLabelTextColor;


@end

NS_ASSUME_NONNULL_END
