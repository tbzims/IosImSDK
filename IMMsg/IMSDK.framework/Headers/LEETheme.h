/*
 *  @header LEETheme.h
 *
 *  ┌─┐      ┌───────┐ ┌───────┐ ™
 *  │ │      │ ┌─────┘ │ ┌─────┘
 *  │ │      │ └─────┐ │ └─────┐
 *  │ │      │ ┌─────┘ │ ┌─────┘
 *  │ └─────┐│ └─────┐ │ └─────┐
 *  └───────┘└───────┘ └───────┘
 *
 *  @brief  LEE theme manage
 *
 *  @author LEE
 *  @copyright    Copyright © 2016 - 2019 lee. All rights reserved.
 *  @version    V1.1.10
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "LEEThemeHelper.h"

/*
 
 *********************************************************************************
 *
 *
 *
 * QQ    : join SDAutoLayout group 497140713 find me(LEE 332459523)
 * Email : 18611401994@163.com
 * GitHub: https://github.com/lixiang1994/LEETheme
 * :    http://www.jianshu.com/users/a6da0db100c8
 * :    http://www.lee1994.com
 *
 *********************************************************************************
 
 */

NS_ASSUME_NONNULL_BEGIN

@interface LEETheme : NSObject

/**
 *
 *
 *  @param tag
 */
+ (void)startTheme:(NSString *)tag;

/**
 *   Mandatory. The application requires at least one default theme
 *
 *
 *  @param tag
 */
+ (void)defaultTheme:(NSString *)tag;

/**
 *
 *
 *  @return  tag
 */
+ (NSString *)currentThemeTag;

/**
 *
 *
 *  @return
 */
+ (NSArray *)allThemeTag;

@end

@interface LEETheme (JsonModeExtend)

/**
 *
 *
 *  @param json
 *  @param tag
 *  @param path (in Documents path if not in Documents, path = nil eg: ResourcesPath:@@"themeResources/day/")
 */
+ (void)addThemeConfigWithJson:(NSString *)json Tag:(NSString *)tag ResourcesPath:(NSString * _Nullable)path;

/**
 *
 *
 *  @param tag
 */
+ (void)removeThemeConfigWithTag:(NSString *)tag;

/**
 *
 *
 *  @param tag
 *
 *  @return
 */
+ (NSString *)getResourcesPathWithTag:(NSString *)tag;

/**
 *
 *
 *  @param tag
 *  @param identifier
 *
 *  @return
 */
+ (id)getValueWithTag:(NSString *)tag Identifier:(NSString *)identifier;


///
/// @param identifier
+ (id)getCurrentTagValueWithIdentifier:(NSString *)identifier;

@end

@interface LEEThemeConfigModel : NSObject

/** -------- */

/** Block */

/** Block -> eg: .LeeThemeChangingBlock(^(NSString *tag , id item){ code... }) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToChangingBlock LeeThemeChangingBlock;

/**  -> eg: .LeeAddCustomConfig(@@"tag" , ^(id item){ code... }) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Block LeeAddCustomConfig;

/**  -> eg: .LeeAddCustomConfigs(@@[tag1 , tag2] , ^(id item){ code... }) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToTs_Block LeeAddCustomConfigs;

/** Color */

/**  -> eg: .LeeAddTintColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddTintColor;

/**  -> eg: .LeeAddTextColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddTextColor;

/** -> eg: .LeeAddFillColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddFillColor;

/**  -> eg: .LeeAddStrokeColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddStrokeColor;

/**  -> eg: .LeeAddBorderColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddBorderColor;

/**  -> eg: .LeeAddShadowColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddShadowColor;

/**  -> eg: .LeeAddOnTintColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddOnTintColor;

/**  -> eg: .LeeAddThumbTintColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddThumbTintColor;

/**  -> eg: .LeeAddSeparatorColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddSeparatorColor;

/**  -> eg: .LeeAddBarTintColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddBarTintColor;

/**  -> eg: .LeeAddBackgroundColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddBackgroundColor;

/**  -> eg: .LeeAddPlaceholderColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddPlaceholderColor;

/**  -> eg: .LeeAddTrackTintColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddTrackTintColor;

/**  -> eg: .LeeAddProgressTintColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddProgressTintColor;

/**  -> eg: .LeeAddHighlightedTextColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddHighlightedTextColor;

/**  -> eg: .LeeAddPageIndicatorTintColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddPageIndicatorTintColor;

/**  -> eg: .LeeAddCurrentPageIndicatorTintColor(@@"tag" , UIColor) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Color LeeAddCurrentPageIndicatorTintColor;

/**  -> eg: .LeeAddButtonTitleColor(@@"tag" , UIColor , UIControlStateNormal) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_ColorAndState LeeAddButtonTitleColor;

/**  -> eg: .LeeAddButtonTitleShadowColor(@@"tag" , UIColor , UIControlStateNormal) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_ColorAndState LeeAddButtonTitleShadowColor;

/** Image */

/**  -> eg: .LeeAddImage(@@"tag" , UIImage or @@"imageName" or @@"imagePath") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Image LeeAddImage;

/**  -> eg: .LeeAddTrackImage(@@"tag" , UIImage or @@"imageName" or @@"imagePath") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Image LeeAddTrackImage;

/**  -> eg: .LeeAddProgressImage(@@"tag" , UIImage or @@"imageName" or @@"imagePath") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Image LeeAddProgressImage;

/**  -> eg: .LeeAddShadowImage(@@"tag" , UIImage or @@"imageName" or @@"imagePath") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Image LeeAddShadowImage;

/**  -> eg: .LeeAddSelectedImage(@@"tag" , UIImage or @@"imageName" or @@"imagePath") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Image LeeAddSelectedImage;

/**  -> eg: .LeeAddBackgroundImage(@@"tag" , UIImage or @@"imageName" or @@"imagePath") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Image LeeAddBackgroundImage;

/**  -> eg: .LeeAddBackIndicatorImage(@@"tag" , UIImage or @@"imageName" or @@"imagePath") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Image LeeAddBackIndicatorImage;

/**  -> eg: .LeeAddBackIndicatorTransitionMaskImage(@@"tag" , UIImage or @@"imageName" or @@"imagePath") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Image LeeAddBackIndicatorTransitionMaskImage;

/**  -> eg: .LeeAddSelectionIndicatorImage(@@"tag" , UIImage or @@"imageName" or @@"imagePath") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Image LeeAddSelectionIndicatorImage;

/**  -> eg: .LeeAddScopeBarBackgroundImage(@@"tag" , UIImage or @@"imageName" or @@"imagePath") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Image LeeAddScopeBarBackgroundImage;

/**  -> eg: .LeeAddButtonImage(@@"tag" , UIImage , UIControlStateNormal) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_ImageAndState LeeAddButtonImage;

/**  -> eg: .LeeAddButtonBackgroundImage(@@"tag" , UIImage , UIControlStateNormal) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_ImageAndState LeeAddButtonBackgroundImage;


/**  -> eg: .LeeAddSelectorAndColor(@@"tag" , @@selector(XXX:) , UIColor or @"F3F3F3") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_SelectorAndColor LeeAddSelectorAndColor;

/**  -> eg: .LeeAddSelectorAndImage(@@"tag" , @@selector(XXX:) , UIImage or @"imageName" or @"imagePath") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_SelectorAndImage LeeAddSelectorAndImage;


/**  */

/**  -> eg: .LeeAddKeyPathAndValue(@@"tag" , @@"keyPath" , id) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_KeyPathAndValue LeeAddKeyPathAndValue;

/**  -> eg: .LeeAddSelectorAndValues(@@"tag" , @@selector(XXX:XXX:) , id , id) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_SelectorAndValues LeeAddSelectorAndValues;

/**  -> eg: .LeeAddSelectorAndValueArray(@@"tag" , @@selector(XXX:XXX:) , @@[id , id]) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_SelectorAndValueArray LeeAddSelectorAndValueArray;

/**  -> eg: .LeeRemoveKeyPath(@@"tag" , @@"keyPath") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_KeyPath LeeRemoveKeyPath;

/**  -> eg: .LeeRemoveSelector(@@"tag" , @@selector(XXX:XXX:)) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToT_Selector LeeRemoveSelector;


/**  -> eg: .LeeClearAllConfig() */
@property (nonatomic , copy , readonly ) LEEConfigTheme LeeClearAllConfig;

/**  -> eg: .LeeClearAllConfig_Tag(@@"tag") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToTag LeeClearAllConfig_Tag;

/**  -> eg: .LeeClearAllConfig_KeyPath(@@"keyPath") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToKeyPath LeeClearAllConfig_KeyPath;

/**  -> eg: .LeeClearAllConfig_Selector(@selector(XXXX:)) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToSelector LeeClearAllConfig_Selector;

@end

@interface LEEThemeConfigModel (IdentifierModeExtend)

/** Block */

/**  -> eg: .LeeCustomConfig(@@"identifier" , ^(id item , id value){ code... }) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifierAndBlock LeeCustomConfig;

/** Color */

/**  -> eg: .LeeConfigTintColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigTintColor;

/**  -> eg: .LeeConfigTextColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigTextColor;

/**  -> eg: .LeeConfigFillColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigFillColor;

/**  -> eg: .LeeConfigStrokeColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigStrokeColor;

/**  -> eg: .LeeConfigBorderColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigBorderColor;

/**  -> eg: .LeeConfigShadowColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigShadowColor;

/**  -> eg: .LeeConfigOnTintColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigOnTintColor;

/**  -> eg: .LeeConfigThumbTintColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigThumbTintColor;

/**  -> eg: .LeeConfigSeparatorColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigSeparatorColor;

/**  -> eg: .LeeConfigBarTintColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigBarTintColor;

/**  -> eg: .LeeConfigBackgroundColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigBackgroundColor;

/**  -> eg: .LeeConfigPlaceholderColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigPlaceholderColor;

/**  -> eg: .LeeConfigTrackTintColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigTrackTintColor;

/**  -> eg: .LeeConfigProgressTintColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigProgressTintColor;

/**  -> eg: .LeeConfigHighlightedTextColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigHighlightedTextColor;

/**  -> eg: .LeeConfigPageIndicatorTintColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigPageIndicatorTintColor;

/**  -> eg: .LeeConfigCurrentPageIndicatorTintColor(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigCurrentPageIndicatorTintColor;

/**  -> eg: .LeeConfigButtonTitleColor(@@"identifier" , UIControlStateNormal) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifierAndState LeeConfigButtonTitleColor;

/**  -> eg: .LeeConfigButtonTitleColor(@@"identifier" , UIControlStateNormal) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifierAndState LeeConfigButtonTitleShadowColor;

/** Image */

/**  -> eg: .LeeConfigImage(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigImage;

/**  -> eg: .LeeConfigTrackImage(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigTrackImage;

/**  -> eg: .LeeConfigProgressImage(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigProgressImage;

/**  -> eg: .LeeConfigShadowImage(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigShadowImage;

/**  -> eg: .LeeConfigSelectedImage(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigSelectedImage;

/**  -> eg: .LeeConfigBackgroundImage(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigBackgroundImage;

/**  -> eg: .LeeConfigBackIndicatorImage(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigBackIndicatorImage;

/**  -> eg: .LeeConfigBackIndicatorTransitionMaskImage(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigBackIndicatorTransitionMaskImage;

/**  -> eg: .LeeConfigSelectionIndicatorImage(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigSelectionIndicatorImage;

/**  -> eg: .LeeConfigScopeBarBackgroundImage(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeConfigScopeBarBackgroundImage;

/**  -> eg: .LeeConfigButtonImage(@@"identifier" , UIControlStateNormal) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifierAndState LeeConfigButtonImage;

/**  -> eg: .LeeConfigButtonBackgroundImage(@@"identifier" , UIControlStateNormal) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifierAndState LeeConfigButtonBackgroundImage;

/**  */

/**  -> eg: .LeeConfigKeyPathAndIdentifier(@@"keyPath" , @@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToKeyPathAndIdentifier LeeConfigKeyPathAndIdentifier;

/**  -> eg: .LeeConfigSelectorAndIdentifier(@@selector(XXX:) , @@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToSelectorAndIdentifier LeeConfigSelectorAndIdentifier;

/**  -> eg: .LeeConfigSelectorAndValueArray(@@selector(XXX:XXX:) , @@[id , id]) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToSelectorAndValues LeeConfigSelectorAndValueArray;

/**  -> eg: .LeeRemoveKeyPathIdentifier(@@"keyPath") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToKeyPath LeeRemoveKeyPathIdentifier;

/**  -> eg: .LeeRemoveSelectorIdentifier(@@selector(XXX:)) */
@property (nonatomic , copy , readonly ) LEEConfigThemeToSelector LeeRemoveSelectorIdentifier;

/**  -> eg: .LeeRemoveIdentifier(@@"identifier") */
@property (nonatomic , copy , readonly ) LEEConfigThemeToIdentifier LeeRemoveIdentifier;


/**  -> eg: .LeeClearAllConfigOnIdentifierMode() */
@property (nonatomic , copy , readonly ) LEEConfigTheme LeeClearAllConfigOnIdentifierMode;

@end

@interface LEEThemeIdentifier : NSString

+ (LEEThemeIdentifier *)ident:(NSString *)ident;

@end

@interface NSObject (LEEThemeConfigObject)

@property (nonatomic , strong ) LEEThemeConfigModel *lee_theme;

@end

@interface UIColor (LEEThemeColor)

+ (UIColor *)leeTheme_ColorWithHexString:(NSString *)hexString;

@end

NS_ASSUME_NONNULL_END

/*
 *
 *          ┌─┐       ┌─┐
 *       ┌──┘ ┴───────┘ ┴──┐
 *       │                 │
 *       │       ───       │
 *       │  ─┬┘       └┬─  │
 *       │                 │
 *       │       ─┴─       │
 *       │                 │
 *       └───┐         ┌───┘
 *           │         │
 *           │         │
 *           │         │
 *           │         └──────────────┐
 *           │                        │
 *           │                        ├─┐
 *           │                        ┌─┘
 *           │                        │
 *           └─┐  ┐  ┌───────┬──┐  ┌──┘
 *             │ ─┤ ─┤       │ ─┤ ─┤
 *             └──┴──┘       └──┴──┘
 *
 *                 BUG!
 */
