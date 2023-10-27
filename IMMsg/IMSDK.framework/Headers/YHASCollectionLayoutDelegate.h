//
//  YHASCollectionLayoutDelegate.h
//  HiFanSmooth
//
//  Created by apple on 2019/4/24.
//  Copyright © 2019_All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AsyncDisplayKit/AsyncDisplayKit.h>

NS_ASSUME_NONNULL_BEGIN
/**
 *
 *
 */
@interface YHASCollectionLayoutDelegate : NSObject <ASCollectionLayoutDelegate, ASCollectionViewLayoutInspecting>

/**
 *
 */
- (instancetype)initWithNumberOfColumns:(NSInteger)numberOfColumns
                          columnSpacing:(CGFloat)columnSpacing
                       interItemSpacing:(CGFloat)interItemSpacing
                          sectionInsets:(UIEdgeInsets)sectionInsets
                        scrollDirection:(ASScrollDirection)scrollDirection;

/**
 *
 *
 *
 * 
 */
- (instancetype)initWithNumberOfColumns:(NSInteger)numberOfColumns
                          columnSpacing:(CGFloat)columnSpacing
                       interItemSpacing:(CGFloat)interItemSpacing
                          sectionInsets:(UIEdgeInsets)sectionInsets
         isHeaderWidthBaseSectionInsets:(BOOL)isHeaderWidthBaseSectionInsets
         isFooterWidthBaseSectionInsets:(BOOL)isFooterWidthBaseSectionInsets
                            bottomOffset:(CGFloat)bottomOffset
                        scrollDirection:(ASScrollDirection)scrollDirection;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
