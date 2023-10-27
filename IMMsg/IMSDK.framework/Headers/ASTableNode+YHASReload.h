//
//  ASTableNode+YHASReload.h
//  HiFanSmooth
//
//  Created by apple on 2019/3/27.
//  Copyright © 2019_All rights reserved.
//

#import <AsyncDisplayKit/AsyncDisplayKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * ASTableNode Refresh blinking solutions
 */
@interface ASTableNode (YHASReload)

- (void)yh_reloadData;

- (void)yh_nodeBlockForRowWithCellNode:(ASCellNode *)cellNode indexPath:(NSIndexPath *)indexPath;


@end

NS_ASSUME_NONNULL_END
