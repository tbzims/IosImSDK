//
//  UIView+IMImageBrowser.h
//  KKImageBrowser_Example
//
//  Created by Hansen on 11/18/21.
//  Copyright © 2021 chenghengsheng. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (IMImageBrowser)

- (UIImage *)screenshotsImageWithScale:(CGFloat)scale;

- (UIImage *)screenshotsImage;

- (UIImage *)imageWithView;
- (UIImage *)snapshotImageNew;
- (UIImage *)screenshot;

- (UIImage *)screenshotWithRect:(CGRect)rect;
- (UIImage *)currentScreen:(CGRect)rect;

@end

NS_ASSUME_NONNULL_END
