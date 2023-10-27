//
//  YHASEnlargeEdgeControlNode.h
//  QAQSmooth
//
//  Created by apple on 2019/3/12.
//  Copyright © 2019_All rights reserved.
//

#import <AsyncDisplayKit/AsyncDisplayKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YHASEnlargeEdgeControlNode : ASButtonNode


/**
 

 @param top
 @param right
 @param bottom
 @param left 
 */
- (void)yh_setEnlargeEdgeWithTop:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom left:(CGFloat)left;

@end

NS_ASSUME_NONNULL_END
