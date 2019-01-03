//
//  AlivcRoomInfo.h
//  AlivcLiveRoomSDK
//
//  Created by Charming04 on 2018/5/21.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AlivcPushInfo.h"
#import "AlivcPlayInfo.h"
#import "AlivcRoomConfig.h"

/**
 房间管控状态
 - AlivcRoomInfoRoomControlStatusAllow: 允许直播
 - AlivcRoomInfoRoomControlStatusForbid: 禁止播放
 */
typedef NS_ENUM(NSInteger, AlivcRoomInfoRoomControlStatus) {
    AlivcRoomInfoRoomControlStatusAllow = 0,
    AlivcRoomInfoRoomControlStatusForbid
};

/**
 AlivcRoomInfoRoomStatus

 - AlivcRoomInfoRoomStatusClose: Close
 - AlivcRoomInfoRoomStatusOn: On
 - AlivcRoomInfoRoomStatusInterrupt: Interrupt
 */
typedef NS_ENUM(NSInteger, AlivcRoomInfoRoomStatus) {
    AlivcRoomInfoRoomStatusClose = 0,
    AlivcRoomInfoRoomStatusOn,
    AlivcRoomInfoRoomStatusInterrupt
};

/**
 AlivcRoomInfoUserStatus

 - AlivcRoomInfoUserStatusNormal: Normal
 - AlivcRoomInfoUserStatusKickedOut: KickedOut
 */
typedef NS_ENUM(NSInteger, AlivcRoomInfoUserStatus) {
    AlivcRoomInfoUserStatusNormal = 0,
    AlivcRoomInfoUserStatusKickedOut
};

@interface AlivcRoomInfo : NSObject

/**
 appId
 */
@property(nonatomic, strong) NSString *appId;
/**
 roomId
 */
@property(nonatomic, strong) NSString *roomId;

/**
 requestId
 */
@property(nonatomic, strong) NSString *requestId;
/**
 status
 */
@property(nonatomic, assign) int status;
/**
 clientId
 */
@property(nonatomic, strong) NSString *clientId;
/**
 tokenId
 */
@property(nonatomic, strong) NSString *tokenId;
/**
 tokenExpireTime
 */
@property(nonatomic, strong) NSString *tokenExpireTime;
/**
 roomControlStatus
 */
@property(nonatomic, assign) AlivcRoomInfoRoomControlStatus roomControlStatus;
/**
 roomStatus
 */
@property(nonatomic, assign) AlivcRoomInfoRoomStatus roomStatus;
/**
 userStatus
 */
@property(nonatomic, assign) AlivcRoomInfoUserStatus userStatus;
/**
 anchorAppUid
 */
@property(nonatomic, strong) NSString *anchorAppUid;

/**
 mic playInfosDic
 */
@property(nonatomic, strong) NSMutableDictionary <NSString *, AlivcPlayInfo *> *playInfosDic;
/**
 pushInfo
 */
@property(nonatomic, strong) AlivcPushInfo *pushInfo;

/**
 init

 @param dic data
 @param config AlivcRoomConfig
 @return instance
 */
- (instancetype)initWithDic:(NSDictionary *)dic config:(AlivcRoomConfig *)config;

@end
