//
//  AlivcLog.h
//  AlivcLog
//
//  Created by OjisanC on 2018/5/20.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlivcLogConfig.h"

#define AlivcLogDebug(tag,fmt, ...)  \
[[AlivcLog sharedInstance] debug:tag func:__FUNCTION__ format:fmt, ##__VA_ARGS__]

#define AlivcLogInfo(tag,fmt, ...)  \
[[AlivcLog sharedInstance] info:tag func:__FUNCTION__ format:fmt, ##__VA_ARGS__]

#define AlivcLogWarn(tag,fmt, ...)  \
[[AlivcLog sharedInstance] warn:tag func:__FUNCTION__ format:fmt, ##__VA_ARGS__]

#define AlivcLogError(tag,fmt, ...)  \
[[AlivcLog sharedInstance] error:tag func:__FUNCTION__ format:fmt, ##__VA_ARGS__]

#define AlivcLogDebugFun(tag, ...)  \
[[AlivcLog sharedInstance] debug:tag func:__FUNCTION__ format:@"", ##__VA_ARGS__]

@class AlivcLog;

@protocol AlivcLogDelegate <NSObject>

@optional

- (void)onAlivcLogCreateLogFileSuccess:(AlivcLog *)alivcLog localPath:(NSString *)path;

- (void)onAlivcLogCreateLogFileError:(AlivcLog *)alivcLog errorCode:(NSUInteger)errorCode;

- (void)onAlivcLogUploadLogFileSuccess:(AlivcLog *)alivcLog localPath:(NSString *)path uploadPath:(NSString *)path;

- (void)onAlivcLogUploadLogFileError:(AlivcLog *)alivcLog localPath:(NSString *)path errorCode:(NSUInteger)errorCode;

@end


@interface AlivcLog : NSObject

@property (nonatomic, weak) id<AlivcLogDelegate> delegate;

+ (instancetype)sharedInstance;
   
/**
 设置appId
 */
- (void)setAppId:(NSString *)appId;
 
/**
 设置uuid
 */
- (void)setUUID:(NSString *)uuId;
 
/**
 设置sessionId
 */
- (void)setSessionId:(NSString *)sessionId;

/**
 日志打开

 @param mode 日志模式
 */
- (void)enableDebug:(AlivcLogMode)mode;

/**
 日志关闭
 */
- (void)disableDebug;

/**
 设置日志等级

 @param level 日志等级
 */
- (void)setLevel:(AlivcLogLevel)level;

/**
 设置日志文件路径

 @param path 文件路径
 */
- (void)setFilePath:(NSString *)path;

/**
 设置文件大小上限

 @param size 文件大小
 */
- (void)setFileMaxSize:(NSUInteger)size;

/**
 日志上传成功后是否删除本地文件

 @param enable enable
 */
- (void)removeLogFileAfterUpload:(BOOL)enable;

/**
 设置OSS host 和sts token
 */
- (void)setOssHost:(NSString *)host accessId:(NSString *)accessId accessKey:(NSString *)accessKey token:(NSString *)token;

/**
 设置OSS bucket
 */
- (void)setOssBucket:(NSString *)bucket;

/**
 开始上传日志文件
 */
- (void)uploadFile;

/**
 重置
 */
- (void)reset;

// debug 日志
- (void)debug:(NSString *)format, ... NS_FORMAT_FUNCTION(1, 2);

- (void)debug:(NSString *)tag func:(const char *)func format:(NSString *)format, ... NS_FORMAT_FUNCTION(3, 4);

// info 日志
- (void)info:(NSString *)format, ... NS_FORMAT_FUNCTION(1, 2);

- (void)info:(NSString *)tag func:(const char *)func format:(NSString *)format, ... NS_FORMAT_FUNCTION(3, 4);

// warn 日志
- (void)warn:(NSString *)format, ... NS_FORMAT_FUNCTION(1, 2);

- (void)warn:(NSString *)tag func:(const char *)func format:(NSString *)format, ... NS_FORMAT_FUNCTION(3, 4);

// error 日志
- (void)error:(NSString *)format, ... NS_FORMAT_FUNCTION(1, 2);

- (void)error:(NSString *)tag func:(const char *)func format:(NSString *)format, ... NS_FORMAT_FUNCTION(3, 4);

@end
