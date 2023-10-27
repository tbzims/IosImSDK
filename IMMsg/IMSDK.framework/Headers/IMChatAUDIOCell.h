//
//  IMChatAUDIOCell.h
//  
//
//  Created by on 2019/11/12.
//  Copyright © 2019_All rights reserved.
//

#import "IMChatBaseCell.h"

NS_ASSUME_NONNULL_BEGIN

@interface IMChatAUDIOCell : IMChatBaseCell

- (void)layoutUI;

- (void)start;
- (void)end;
- (void)pause;

- (void)reloadEffectViewWith:(float)currentAudioProgross;

+ (float )getAudioBGViewContentWidth:(float )voiceTimeLength;
+ (float )getBaseTotalWidth:(float )voiceTimeLength;

@end

NS_ASSUME_NONNULL_END
