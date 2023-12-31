//
//  UIImageView+IMWebImage.h
//  IMWebImage <https://github.com/ibireme/IMWebImage>
//
//  Created by ibireme on 15/2/23.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <UIKit/UIKit.h>

#if __has_include(<IMWebImage/IMWebImage.h>)
#import <IMWebImage/IMWebImageManager.h>
#else
#import "IMWebImageManager.h"
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 Web image methods for UIImageView.
 */
@interface UIImageView (IMWebImage)

#pragma mark - image

/**
 Current image URL.
 
 @discussion Set a new value to this property will cancel the previous request
 operation and create a new request operation to fetch image. Set nil to clear
 the image and image URL.
 */
@property (nullable, nonatomic, strong) NSURL *im_imageURL;

/**
 Set the view's `image` with a specified URL.
 
 @param imageURL    The image url (remote or local file path).
 @param placeholder The image to be set initially, until the image request finishes.
 */
- (void)im_setImageWithURL:(nullable NSURL *)imageURL placeholder:(nullable UIImage *)placeholder;

/**
 Set the view's `image` with a specified URL.
 
 @param imageURL The image url (remote or local file path).
 @param options  The options to use when request the image.
 */
- (void)im_setImageWithURL:(nullable NSURL *)imageURL options:(IMWebImageOptions)options;

/**
 Set the view's `image` with a specified URL.
 
 @param imageURL    The image url (remote or local file path).
 @param placeholder The image to be set initially, until the image request finishes.
 @param options     The options to use when request the image.
 @param completion  The block invoked (on main thread) when image request completed.
 */
- (void)im_setImageWithURL:(nullable NSURL *)imageURL
               placeholder:(nullable UIImage *)placeholder
                   options:(IMWebImageOptions)options
                completion:(nullable IMWebImageCompletionBlock)completion;

/**
 Set the view's `image` with a specified URL.
 
 @param imageURL    The image url (remote or local file path).
 @param placeholder The image to be set initially, until the image request finishes.
 @param options     The options to use when request the image.
 @param progress    The block invoked (on main thread) during image request.
 @param transform   The block invoked (on background thread) to do additional image process.
 @param completion  The block invoked (on main thread) when image request completed.
 */
- (void)im_setImageWithURL:(nullable NSURL *)imageURL
               placeholder:(nullable UIImage *)placeholder
                   options:(IMWebImageOptions)options
                  progress:(nullable IMWebImageProgressBlock)progress
                 transform:(nullable IMWebImageTransformBlock)transform
                completion:(nullable IMWebImageCompletionBlock)completion;

/**
 Set the view's `image` with a specified URL.
 
 @param imageURL    The image url (remote or local file path).
 @param placeholder he image to be set initially, until the image request finishes.
 @param options     The options to use when request the image.
 @param manager     The manager to create image request operation.
 @param progress    The block invoked (on main thread) during image request.
 @param transform   The block invoked (on background thread) to do additional image process.
 @param completion  The block invoked (on main thread) when image request completed.
 */
- (void)im_setImageWithURL:(nullable NSURL *)imageURL
               placeholder:(nullable UIImage *)placeholder
                   options:(IMWebImageOptions)options
                   manager:(nullable IMWebImageManager *)manager
                  progress:(nullable IMWebImageProgressBlock)progress
                 transform:(nullable IMWebImageTransformBlock)transform
                completion:(nullable IMWebImageCompletionBlock)completion;

/**
 Cancel the current image request.
 */
- (void)im_cancelCurrentImageRequest;



#pragma mark - highlight image

/**
 Current highlighted image URL.
 
 @discussion Set a new value to this property will cancel the previous request
 operation and create a new request operation to fetch image. Set nil to clear
 the highlighted image and image URL.
 */
@property (nullable, nonatomic, strong) NSURL *im_highlightedImageURL;

/**
 Set the view's `highlightedImage` with a specified URL.
 
 @param imageURL    The image url (remote or local file path).
 @param placeholder The image to be set initially, until the image request finishes.
 */
- (void)im_setHighlightedImageWithURL:(nullable NSURL *)imageURL placeholder:(nullable UIImage *)placeholder;

/**
 Set the view's `highlightedImage` with a specified URL.
 
 @param imageURL The image url (remote or local file path).
 @param options  The options to use when request the image.
 */
- (void)im_setHighlightedImageWithURL:(nullable NSURL *)imageURL options:(IMWebImageOptions)options;

/**
 Set the view's `highlightedImage` with a specified URL.
 
 @param imageURL    The image url (remote or local file path).
 @param placeholder The image to be set initially, until the image request finishes.
 @param options     The options to use when request the image.
 @param completion  The block invoked (on main thread) when image request completed.
 */
- (void)im_setHighlightedImageWithURL:(nullable NSURL *)imageURL
                          placeholder:(nullable UIImage *)placeholder
                              options:(IMWebImageOptions)options
                           completion:(nullable IMWebImageCompletionBlock)completion;

/**
 Set the view's `highlightedImage` with a specified URL.
 
 @param imageURL    The image url (remote or local file path).
 @param placeholder The image to be set initially, until the image request finishes.
 @param options     The options to use when request the image.
 @param progress    The block invoked (on main thread) during image request.
 @param transform   The block invoked (on background thread) to do additional image process.
 @param completion  The block invoked (on main thread) when image request completed.
 */
- (void)im_setHighlightedImageWithURL:(nullable NSURL *)imageURL
                          placeholder:(nullable UIImage *)placeholder
                              options:(IMWebImageOptions)options
                             progress:(nullable IMWebImageProgressBlock)progress
                            transform:(nullable IMWebImageTransformBlock)transform
                           completion:(nullable IMWebImageCompletionBlock)completion;

/**
 Set the view's `highlightedImage` with a specified URL.
 
 @param imageURL    The image url (remote or local file path).
 @param placeholder The image to be set initially, until the image request finishes.
 @param options     The options to use when request the image.
 @param manager     The manager to create image request operation.
 @param progress    The block invoked (on main thread) during image request.
 @param transform   The block invoked (on background thread) to do additional image process.
 @param completion  The block invoked (on main thread) when image request completed.
 */
- (void)im_setHighlightedImageWithURL:(nullable NSURL *)imageURL
                          placeholder:(nullable UIImage *)placeholder
                              options:(IMWebImageOptions)options
                              manager:(nullable IMWebImageManager *)manager
                             progress:(nullable IMWebImageProgressBlock)progress
                            transform:(nullable IMWebImageTransformBlock)transform
                           completion:(nullable IMWebImageCompletionBlock)completion;

/**
 Cancel the current highlighed image request.
 */
- (void)im_cancelCurrentHighlightedImageRequest;

@end

NS_ASSUME_NONNULL_END
