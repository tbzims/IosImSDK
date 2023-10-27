//
//  IMXWLivingThread.h
//  XWLivingThreadDemo
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^XWLivingThreadTask)(void);

@interface IMXWLivingThread : NSObject

+ (void)executeTask:(XWLivingThreadTask)task;


+ (void)executeTask:(XWLivingThreadTask)task identity:(NSString *)identity;

- (void)executeTask:(XWLivingThreadTask)task;

@end

NS_ASSUME_NONNULL_END
