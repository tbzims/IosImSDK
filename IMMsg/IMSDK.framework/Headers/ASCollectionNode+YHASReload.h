//
//  ASCollectionNode+YHASReload.h
//  FrameDating
//
//  Copyright © 2019_All rights reserved.
//

#import <AsyncDisplayKit/AsyncDisplayKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * ASCollectionNode Refresh blinking solutions
 */
@interface ASCollectionNode (YHASReload)

- (void)yh_reloadData;

- (void)yh_nodeBlockForRowWithCellNode:(ASCellNode *)cellNode indexPath:(NSIndexPath *)indexPath;

@end

NS_ASSUME_NONNULL_END
