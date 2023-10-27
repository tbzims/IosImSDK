//
//  UIView+IMRoundedCorners.h
//
//   on 2021/8/10.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, IMShowBasicAnimationCorner)
{
    IMShowBasicAnimationCornerTopLeft,
    IMShowBasicAnimationCornerTopRight,
    IMShowBasicAnimationCornerTopLeftThree,
    IMShowBasicAnimationCornerTopRightThree,
    IMShowBasicAnimationCornerBottomLeft,
    IMShowBasicAnimationCornerBottomRight,
};


@interface UIView (IMMRoundedCorners)
- (void)addRoundedCorners:(UIRectCorner)corners
                withRadii:(CGSize)radii;
 
- (void)addRoundedCorners:(UIRectCorner)corners
                withRadii:(CGSize)radii
                 viewRect:(CGRect)rect;


- (UIView *)copyView;


- (void)hideBasicAnimation: (CFTimeInterval)duration;

/// CAKeyframeAnimation, default values: @[@0, @1.03, @1.0]
- (void)showPopupAnimation: (CFTimeInterval)duration corner: (IMShowBasicAnimationCorner) corner;


+ (BOOL)isShowKeyboardVisible;
+ (UIWindow * _Nullable)getKeyboardWindow;
+ (UIView * _Nullable)getKeyboardView;

@end

NS_ASSUME_NONNULL_END
