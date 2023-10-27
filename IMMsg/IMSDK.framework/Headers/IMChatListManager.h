//
//  IMChatListManager.h
//  
//
//  Created by oceanMAC on 2022/7/26.
//  Copyright © 2022 yinhe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class IMConversationInfo, IMContext, IMDataBase;
@interface IMChatListManager : NSObject

@property (nonatomic, strong) IMContext *context;

+(IMChatListManager *)shared;

- (NSString *)getName:(NSString *)content imInfo:(IMConversationInfo *)imInfo dbBase:(IMDataBase *)dbBase;

- (NSAttributedString *)updateDraftContent:(NSString *)content bodyLabel:(UITextView *)bodyLabel lineSpacing:(NSInteger)lineSpacing;

//- (NSAttributedString *)updateContent:(NSString *)content imInfo:(IMConversationInfo *)imInfo bodyLabel:(UITextView *)bodyLabel lineSpacing:(NSInteger)lineSpacing dbBase:(IMDataBase *)dbBase;


- (NSAttributedString *)updateContent:(NSString *)content imInfo:(IMConversationInfo *)imInfo bodyWidth:(CGFloat)bodyWidth name:(NSString *)name lineSpacing:(NSInteger)lineSpacing;



- (void)enumerateObjects:(UIColor *)color bodyLabel:(UITextView *)bodyLabel;


-(void)setupNoticeContent:(NSArray<IMConversationInfo *> *)imInfos;
-(void)setupGroupChatName:(NSArray<IMConversationInfo *> *)imInfos;

@end

NS_ASSUME_NONNULL_END
