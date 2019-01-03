//
//  AlivcInteractiveLiveRoomConstants.h
//  AlivcInteractiveLiveRoomSDK
//
//  Created by OjisanC on 2018/5/17.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#ifndef AlivcInteractiveLiveRoomConstants_h
#define AlivcInteractiveLiveRoomConstants_h

/**
 AlivcInteractiveLiveRoomLogLevel

 - AlivcInteractiveLiveRoomLogLevelDebug: Debug
 - AlivcInteractiveLiveRoomLogLevelInfo: Info
 - AlivcInteractiveLiveRoomLogLevelWarn: Warn
 - AlivcInteractiveLiveRoomLogLevelError: Error
 */
typedef NS_ENUM(NSInteger, AlivcInteractiveLiveRoomLogLevel){
    AlivcInteractiveLiveRoomLogLevelDebug = 0,
    AlivcInteractiveLiveRoomLogLevelInfo  = 1,
    AlivcInteractiveLiveRoomLogLevelWarn  = 2,
    AlivcInteractiveLiveRoomLogLevelError = 3,
};

/**
 AlivcInteractiveLiveRoomLogMode

 - AlivcInteractiveLiveRoomLogModePrint: print
 - AlivcInteractiveLiveRoomLogModeLocalFile: print to local file
 */
typedef NS_ENUM(NSInteger,AlivcInteractiveLiveRoomLogMode) {
    AlivcInteractiveLiveRoomLogModePrint = 1 << 0,
    AlivcInteractiveLiveRoomLogModeLocalFile = 1 << 1,
};

#endif /* AlivcLiveRoomConstants_h */
