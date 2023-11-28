#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9 (swiftlang-5.9.0.128.108 clang-1500.0.40.1)
#ifndef COMMONMODULE_SWIFT_H
#define COMMONMODULE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Darwin;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#import <CommonModule/CommonModule.h>

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="CommonModule",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

SWIFT_CLASS("_TtC12CommonModule19IMAESAfStreamClient")
@interface IMAESAfStreamClient : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSString;

SWIFT_CLASS("_TtC12CommonModule9IMAESUtil")
@interface IMAESUtil : NSObject
/// Decrypt the data returned by the server (if it fails, return nil, otherwise it may be a json string, or it may be just a string, depending on the specific business analysis)
/// \param originDecryptString Encrypted string
///
- (NSString * _Nullable)im_aes_128_decryptWith:(NSString * _Nullable)originDecryptString key:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
/// Encrypt the data before transmitting it to the server
/// \param encryptObject can be one of string, array, dictionary
///
- (NSString * _Nullable)im_aes_128_encryptWith:(id _Nullable)encryptObject key:(NSString * _Nonnull)key iv:(NSString * _Nonnull)iv SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12CommonModule24IMAESXPShortStreamClient")
@interface IMAESXPShortStreamClient : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12CommonModule16IMAfStreamClient")
@interface IMAfStreamClient : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12CommonModule7IMAsync")
@interface IMAsync : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class IMMomentMessageImageContent;

SWIFT_CLASS("_TtC12CommonModule13IMAvatarModel")
@interface IMAvatarModel : NSObject
@property (nonatomic, copy) NSString * _Nullable bucketId;
@property (nonatomic, copy) NSString * _Nullable file_type;
@property (nonatomic) NSInteger height;
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic) NSInteger width;
- (IMMomentMessageImageContent * _Nonnull)toModel SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)getFileName SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getLocalAvatar SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getRemoteAvatar SWIFT_WARN_UNUSED_RESULT;
@end

enum IMTransferFileSizeType : NSInteger;

SWIFT_CLASS("_TtC12CommonModule15IMConfigManager")
@interface IMConfigManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong, getter=default, setter=setDefault:) IMConfigManager * _Nonnull default_;)
+ (IMConfigManager * _Nonnull)default SWIFT_WARN_UNUSED_RESULT;
+ (void)setDefault:(IMConfigManager * _Nonnull)value;
@property (nonatomic) BOOL isFlowDown;
- (NSInteger)getOssStausWithProgress:(NSInteger)progress SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)getOssProgressWithProgress:(NSInteger)progress SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)synthesisProgressWithProgress:(NSInteger)progress status:(NSInteger)status SWIFT_WARN_UNUSED_RESULT;
- (enum IMTransferFileSizeType)determineIsLargeFileWithLength:(NSInteger)length SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class IMNotificationCenter;
@class IMSDKCache;

SWIFT_CLASS("_TtC12CommonModule9IMContext")
@interface IMContext : NSObject
+ (IMContext * _Nonnull)defualt SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) IMNotificationCenter * _Nonnull nc;
@property (nonatomic) id _Nullable me;
- (IMSDKCache * _Nonnull)getSDKCache SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12CommonModule10IMDataBase")
@interface IMDataBase : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class IMNet;

SWIFT_PROTOCOL("_TtP12CommonModule13IMDelegate401_")
@protocol IMDelegate401
- (void)onTokenErrorWithNet:(IMNet * _Nonnull)net;
@end


SWIFT_PROTOCOL("_TtP12CommonModule7IMEvent_")
@protocol IMEvent <NSObject>
- (NSArray<NSString *> * _Nonnull)getData SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getName SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC12CommonModule19IMFileDownloadEvent")
@interface IMFileDownloadEvent : NSObject <IMEvent>
- (NSArray<NSString *> * _Nonnull)getData SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getName SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull objectIds;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, IMFileDownloadPermissionType, closed) {
  IMFileDownloadPermissionTypeNone = 0,
  IMFileDownloadPermissionTypeAll = 1,
};


SWIFT_CLASS("_TtC12CommonModule17IMFileUploadEvent")
@interface IMFileUploadEvent : NSObject <IMEvent>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull objectIds;
- (NSArray<NSString *> * _Nonnull)getData SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getName SWIFT_WARN_UNUSED_RESULT;
@end

@class IMImageTempModel;
@class IMOSS;

SWIFT_CLASS("_TtC12CommonModule11IMFilesTool")
@interface IMFilesTool : NSObject
+ (void)getFileWithImageModel:(IMImageTempModel * _Nonnull)imageModel ossObject:(IMOSS * _Nonnull)ossObject complete:(void (^ _Nullable)(BOOL, NSString * _Nonnull))complete;
+ (void)getFileWithObjectID:(NSString * _Nonnull)objectID width:(NSInteger)width height:(NSInteger)height ossObject:(IMOSS * _Nonnull)ossObject complete:(void (^ _Nullable)(BOOL, NSString * _Nonnull))complete;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSData;

SWIFT_CLASS("_TtC12CommonModule15IMImageUrlParse")
@interface IMImageUrlParse : NSObject
@property (nonatomic, copy) NSString * _Nonnull bucketId;
@property (nonatomic, copy) NSString * _Nonnull format;
@property (nonatomic, copy) NSString * _Nonnull objectId;
@property (nonatomic) NSInteger thumbWidth;
@property (nonatomic) NSInteger thumbHeight;
@property (nonatomic, copy) NSData * _Nullable tempData;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
+ (IMImageUrlParse * _Nonnull)createWithUrl:(NSString * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getFileFullName SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC12CommonModule27IMMomentMessageImageContent")
@interface IMMomentMessageImageContent : NSObject
@property (nonatomic, copy) NSString * _Nonnull objectId;
@property (nonatomic, copy) NSString * _Nonnull bucketId;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSInteger mediaType;
@property (nonatomic, copy) NSString * _Nonnull fileType;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12CommonModule5IMNet")
@interface IMNet : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSNotificationCenter;

SWIFT_CLASS("_TtC12CommonModule20IMNotificationCenter")
@interface IMNotificationCenter : NSObject
+ (IMNotificationCenter * _Nonnull)defualt SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init:(NSNotificationCenter * _Nonnull)notificationCenter OBJC_DESIGNATED_INITIALIZER;
- (void)postWithEvent:(id <IMEvent> _Nonnull)event;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12CommonModule21IMNotificationManager")
@interface IMNotificationManager : NSObject
- (nonnull instancetype)initWithNotific:(IMNotificationCenter * _Nonnull)notific OBJC_DESIGNATED_INITIALIZER;
- (void)postWithEventProtocol:(id <IMEvent> _Nonnull)eventProtocol;
- (void)removeObserver:(NSObject * _Nonnull)observer;
- (void)removeObserver:(NSObject * _Nonnull)observer forName:(NSString * _Nonnull)forName;
- (void)observer:(NSObject * _Nonnull)observer :(NSString * _Nonnull)name :(void (^ _Nonnull)(id _Nullable, id _Nullable))block;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class IMTransferDownloadControler;
@class IMTransferUploadControler;

SWIFT_CLASS("_TtC12CommonModule5IMOSS")
@interface IMOSS : NSObject
@property (nonatomic, strong) IMContext * _Nonnull ossContext;
@property (nonatomic, copy) NSString * _Nonnull ossPath;
@property (nonatomic, strong) IMTransferDownloadControler * _Nonnull downloadControl;
@property (nonatomic, strong) IMTransferUploadControler * _Nonnull uploadControl;
+ (IMOSS * _Nonnull)defaultOSS SWIFT_WARN_UNUSED_RESULT;
- (void)startDownloadWithObjectID:(NSString * _Nonnull)objectID bucketId:(NSString * _Nonnull)bucketId isNeedNotice:(NSInteger)isNeedNotice sizeType:(enum IMTransferFileSizeType)sizeType completionHandler:(void (^ _Nonnull)(NSInteger, NSError * _Nullable))completionHandler SWIFT_AVAILABILITY(ios,introduced=13.0.0);
- (void)grabStartDownloadWithObjectID:(NSString * _Nonnull)objectID bucketId:(NSString * _Nonnull)bucketId isNeedNotice:(NSInteger)isNeedNotice sizeType:(enum IMTransferFileSizeType)sizeType completionHandler:(void (^ _Nonnull)(NSInteger, NSError * _Nullable))completionHandler SWIFT_AVAILABILITY(ios,introduced=13.0.0);
- (void)cancelDownloadWithObjectIds:(NSArray<NSString *> * _Nonnull)objectIds;
- (void)pauseDownloadWithObjectId:(NSString * _Nonnull)objectId;
- (BOOL)isWifi SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isWwan SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isNetworkConnect SWIFT_WARN_UNUSED_RESULT;
- (void)startUploadWithObjectID:(NSString * _Nonnull)objectID bucketId:(NSString * _Nonnull)bucketId completionHandler:(void (^ _Nonnull)(BOOL, NSString * _Nullable))completionHandler SWIFT_AVAILABILITY(ios,introduced=13.0.0);
- (void)queryProgressValueNormalWithObjectId:(NSString * _Nonnull)objectId complete:(void (^ _Nullable)(NSInteger))complete;
- (NSInteger)queryUploadProgressValueNormalWithObjectId:(NSString * _Nonnull)objectId SWIFT_WARN_UNUSED_RESULT;
- (void)resetProgressWithCompletionHandler:(void (^ _Nonnull)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler SWIFT_AVAILABILITY(ios,introduced=13.0.0);
- (void)resetDoneToStartDownload;
- (void)deleteProgressForLogoutWithCompletionHandler:(void (^ _Nonnull)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler SWIFT_AVAILABILITY(ios,introduced=13.0.0);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIImage;

SWIFT_CLASS("_TtC12CommonModule13IMPathManager")
@interface IMPathManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) IMPathManager * _Nonnull shared;)
+ (IMPathManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isFileExistsWithFilePath:(NSString * _Nonnull)filePath SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getHomeDirectoryExists SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)fileCacheDirectoryWithFilePath:(NSString * _Nonnull)filePath SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)picSaveHomeDirectoryWithNameWithImage:(UIImage * _Nullable)image path:(NSString * _Nonnull)path SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)picSaveHomeDirectoryWithNameWithImage:(UIImage * _Nullable)image name:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
- (void)saveFileWithImagePath:(NSString * _Nullable)imagePath filePath:(NSString * _Nonnull)filePath;
- (void)saveFile_imageWithImage:(UIImage * _Nullable)image filePath:(NSString * _Nonnull)filePath;
- (UIImage * _Nullable)getFileWithFilePath:(NSString * _Nonnull)filePath SWIFT_WARN_UNUSED_RESULT;
- (UIImage * _Nullable)resizeWithNewSize:(CGSize)newSize oimage:(UIImage * _Nonnull)oimage suffix:(NSString * _Nonnull)suffix SWIFT_WARN_UNUSED_RESULT;
- (UIImage * _Nullable)resizeWithNewSize:(CGSize)newSize oimage:(UIImage * _Nonnull)oimage targetPath:(NSString * _Nonnull)targetPath suffix:(NSString * _Nonnull)suffix SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getOssDir SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)thumObjectIdTransferOriginalObjectIdWithThumObjectId:(NSString * _Nonnull)thumObjectId SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getFullFilePathWithObjectId:(NSString * _Nonnull)objectId SWIFT_WARN_UNUSED_RESULT;
- (IMImageTempModel * _Nonnull)getFileTempModelWithAvatarModel:(IMAvatarModel * _Nullable)avatarModel sourceSence:(NSInteger)sourceSence imageType:(IMMImageType)imageType fileSource:(IMFileSource)fileSource SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12CommonModule10IMSDKCache")
@interface IMSDKCache : NSObject
@property (nonatomic) pthread_mutex_t mutex;
@property (nonatomic) NSInteger mRemoteSequence;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull cache;
- (nonnull instancetype)initWithAk:(NSString * _Nonnull)ak OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)getAk SWIFT_WARN_UNUSED_RESULT;
- (id _Nullable)getCacheValueWithKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (NSDictionary<NSString *, id> * _Nonnull)getCache SWIFT_WARN_UNUSED_RESULT;
- (void)removeCacheWithKey:(NSString * _Nonnull)key;
- (void)setCacheWithKey:(NSString * _Nonnull)key value:(id _Nonnull)value;
- (void)setContinueSyncMessageWithContinueSyncMessage:(BOOL)continueSyncMessage;
- (BOOL)getContinueSyncMessage SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12CommonModule12IMShareLogic")
@interface IMShareLogic : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end





enum IMSocketState : NSInteger;
@class IMSocketTool;

SWIFT_CLASS("_TtC12CommonModule24IMSocketResponseDelegate")
@interface IMSocketResponseDelegate : NSObject
@property (nonatomic) enum IMSocketState state;
@property (nonatomic, copy) void (^ _Nullable reConnectComplete)(id _Nullable);
@property (nonatomic, copy) void (^ _Nullable didReceivePongClosure)(id _Nullable);
@property (nonatomic, copy) void (^ _Nullable didOpenClosure)(id _Nullable);
@property (nonatomic, copy) void (^ _Nullable didReceiveMessageClosure)(id _Nullable);
@property (nonatomic, copy) void (^ _Nullable didFaildClosure)(NSError * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable didCloseClosure)(id _Nullable);
- (nonnull instancetype)didOpen:(void (^ _Nullable)(id _Nullable))closure;
- (nonnull instancetype)didReceivePong:(void (^ _Nullable)(id _Nullable))closure;
- (nonnull instancetype)didReceiveMessage:(void (^ _Nullable)(id _Nullable))closure;
- (nonnull instancetype)didFaild:(void (^ _Nullable)(NSError * _Nonnull))closure;
- (nonnull instancetype)didClose:(void (^ _Nullable)(id _Nullable))closure;
- (nonnull instancetype)initWithSocket:(IMSocketTool * _Nonnull)socket OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, IMSocketState, closed) {
  IMSocketStateNotConnect = 0,
  IMSocketStateStartConnect = 1,
  IMSocketStateConnected = 2,
  IMSocketStateConnectFail = 3,
  IMSocketStateClosed = 4,
};

@class IMSRWebSocket;

SWIFT_CLASS("_TtC12CommonModule12IMSocketTool")
@interface IMSocketTool : NSObject <IMSRWebSocketDelegate>
- (void)initSocketWithUrl:(NSString * _Nonnull)url SWIFT_METHOD_FAMILY(none);
- (void)closeSocketWithLogOut;
- (void)webSocketDidOpen:(IMSRWebSocket * _Null_unspecified)webSocket;
- (void)webSocket:(IMSRWebSocket * _Null_unspecified)webSocket didReceiveMessage:(id _Null_unspecified)message;
- (void)webSocket:(IMSRWebSocket * _Null_unspecified)webSocket didReceivePong:(NSData * _Null_unspecified)pongPayload;
- (void)webSocket:(IMSRWebSocket * _Null_unspecified)webSocket didFailWithError:(NSError * _Null_unspecified)error;
- (void)webSocket:(IMSRWebSocket * _Null_unspecified)webSocket didCloseWithCode:(NSInteger)code reason:(NSString * _Null_unspecified)reason wasClean:(BOOL)wasClean;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12CommonModule8IMThread")
@interface IMThread : NSThread
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)main;
@end


SWIFT_CLASS("_TtC12CommonModule12IMThumbUtils")
@interface IMThumbUtils : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12CommonModule27IMTransferDownloadControler")
@interface IMTransferDownloadControler : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, IMTransferFileSizeType, closed) {
  IMTransferFileSizeTypeSmall = 1,
  IMTransferFileSizeTypeBig = 2,
};

typedef SWIFT_ENUM(NSInteger, IMTransferProgressState, closed) {
  IMTransferProgressStateFailureMin = -100,
  IMTransferProgressStateFileNotExist = 404,
  IMTransferProgressStateStart = 0,
  IMTransferProgressStateSuccess = 100,
  IMTransferProgressStateNotDown = 400,
  IMTransferProgressStateWait = 600,
  IMTransferProgressStatePausedMin = 700,
  IMTransferProgressStateFailedMin = 800,
};

typedef SWIFT_ENUM(NSInteger, IMTransferSence, closed) {
  IMTransferSenceIM = 1,
  IMTransferSenceMoments = 2,
};


SWIFT_CLASS("_TtC12CommonModule25IMTransferUploadControler")
@interface IMTransferUploadControler : NSObject
- (id _Nonnull)copy SWIFT_WARN_UNUSED_RESULT;
- (id _Nonnull)mutableCopy SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12CommonModule21IMXPShortStreamClient")
@interface IMXPShortStreamClient : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC12CommonModule12NetAESConfig")
@interface NetAESConfig : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol OssDownLoadViewStatus;

SWIFT_PROTOCOL("_TtP12CommonModule24OssDownLoadDisplayStatus_")
@protocol OssDownLoadDisplayStatus <NSObject>
- (void)showViewWithViewStatus:(id <OssDownLoadViewStatus> _Nonnull)viewStatus;
@end


SWIFT_CLASS("_TtC12CommonModule18OssDownLoadFactory")
@interface OssDownLoadFactory : NSObject
- (id <OssDownLoadDisplayStatus> _Nonnull)createDisplayWithStatus:(NSInteger)status SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP12CommonModule21OssDownLoadViewStatus_")
@protocol OssDownLoadViewStatus <NSObject>
- (void)showDefault;
- (void)showDownloading;
- (void)showDownloadFailed;
- (void)showDownloadSuccess;
- (void)showDownloadPause;
@end

@class NSURL;

@interface UIImage (SWIFT_EXTENSION(CommonModule))
+ (UIImage * _Nullable)sdk_bundleImageWithImageName:(NSString * _Nonnull)imageName SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nullable)sdk_bundleSoundPath SWIFT_WARN_UNUSED_RESULT;
+ (NSURL * _Nullable)sdk_bundleEmptySoundPath SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)sdk_bundlePath SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)sdk_bundleEmojiPath SWIFT_WARN_UNUSED_RESULT;
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
