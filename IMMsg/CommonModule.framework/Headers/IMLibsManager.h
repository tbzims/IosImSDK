//
//
//  Created by oceanMAC on 2022/10/21.
//

#import <Foundation/Foundation.h>
#import <CocoaLumberjack/CocoaLumberjack.h>

NS_ASSUME_NONNULL_BEGIN

@interface IMLibsManager : NSObject

+ (instancetype)sharedInstance;
- (void)setupLog;
- (DDFileLogger *)getFileLoger;
- (NSString *)getNowTimeTimestamp;

@end

NS_ASSUME_NONNULL_END
