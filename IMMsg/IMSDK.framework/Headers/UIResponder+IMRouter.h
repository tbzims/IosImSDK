//
//  UIResponder+IMRouter.h
//  MYSaSClerk
//
//  Created by chong on 2019/12/7.
//  Copyright © 2019 chong. All rights reserved.
//

#import <UIKit/UIKit.h>


/**
  
 */
@interface UIResponder (IMRouter)



- (void)routerWithEventName:(NSString *)eventName userInfo:(NSDictionary *)userInfo;

- (void)routerWithEventName:(NSString *)eventName object:(id)object;

@end

