//
//  IMPhotoManager.h
//  HiFanSmooth
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Photos/Photos.h>
//#import "TMAnimatedImageView.h"

NS_ASSUME_NONNULL_BEGIN
@interface IMPhotoManager : NSObject


+ (void)checkAlbumIsExistWithAlbum:(NSString *)albumName completionBlock:(void(^)(BOOL isExist))completionBlock;

+ (void)createAlbum:(NSString *)albumName completionBlock:(void(^)(BOOL isSuccess, PHAssetCollection *_Nullable assetCollection))completionBlock;


+ (void)getAlbumWithAlbum:(NSString *)albumName completionBlock:(void(^)(PHAssetCollection *_Nullable assetCollection))completionBlock;


+ (void)saveToPhotoAlbumWithAlbumName:(NSString *)albumName data:(NSData *)data completionBlock:(void(^_Nullable)(BOOL isSuccess, NSError *_Nullable error))completionBlock;

+ (void)saveToPhotoAlbumWithAlbumName:(NSString *)albumName image:(UIImage *)image completionBlock:(void(^_Nullable)(BOOL isSuccess, NSError *_Nullable error))completionBlock;



+ (nullable NSData *)compressImageWithImage1:(UIImage *)sourceImage toByte:(NSUInteger)maxSize;
+ (nullable NSData *)compressImageWithImage2:(UIImage *)sourceImage toByte:(NSUInteger)maxSize; 


+ (void)compressImageSize:(UIImage *)sourceImage toByte:(double)maxSize complationHandle:(void(^)(NSData *resultData))completed;

+ (void)compressImagePath:(NSString *)imagePath newSize:(CGSize)newSize complationHandle:(void(^)(NSData *resultData))completed;

+ (void)compressImage:(UIImage *)sourceImage newSize:(CGSize)newSize complationHandle:(void(^)(NSData *resultData))completed;


@end

NS_ASSUME_NONNULL_END
