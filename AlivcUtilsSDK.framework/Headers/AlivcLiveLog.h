//
//  AlivcLiveLog.h
//  AlivcLivePusher_Static
//
//  Created by lyz on 2017/11/1.
//  Copyright © 2017年 TripleL. All rights reserved.
//

#ifndef AlivcLiveLog_h
#define AlivcLiveLog_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, AlivcLogLevel){
    AlivcLogLevelAll = 1,
    AlivcLogLevelVerbose,
    AlivcLogLevelDebug,
    AlivcLogLevelInfo,
    AlivcLogLevelWarn,
    AlivcLogLevelError,
    AlivcLogLevelFatal,
};

extern void AlivcLivePusherCustomLog(AlivcLogLevel level, NSString *tag, const char *func, NSString *format, ...);

#define AlivcLiveDebugLog(tag, format,...) AlivcLivePusherCustomLog(AlivcLogLevelDebug,tag,__FUNCTION__,format,##__VA_ARGS__)
#define AlivcLiveErrorLog(tag, format,...) AlivcLivePusherCustomLog(AlivcLogLevelError,tag,__FUNCTION__,format,##__VA_ARGS__)
#define AlivcLiveFatalLog(tag, format,...) AlivcLivePusherCustomLog(AlivcLogLevelFatal,tag,__FUNCTION__,format,##__VA_ARGS__)

@interface AlivcLiveLog : NSObject

+ (void)setLogOpen:(BOOL)isOpen;

+ (void)setLogLevel:(AlivcLogLevel)level;

+ (BOOL)getLogOpen;

+ (AlivcLogLevel)getLogLevel;

@end

#endif // AlivcLiveLog_h


