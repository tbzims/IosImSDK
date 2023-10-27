//
//  IMFaceAttachment.h
//  
//
//  Created by  on 2021/8/17.
//  Copyright © 2021_All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface IMFaceAttachment : NSTextAttachment

@property(nonatomic, strong) NSString *tagName;
@property(nonatomic, strong) NSString *imageName;
@property(nonatomic, assign) NSRange range;
//@property(nonatomic, strong) UIImage *image;

@end

NS_ASSUME_NONNULL_END
