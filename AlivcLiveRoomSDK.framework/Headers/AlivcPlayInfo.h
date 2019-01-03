//
//  AlivcPlayInfo.h
//  AlivcLiveRoomSDK
//
//  Created by Charming04 on 2018/5/20.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlivcRoomConfig.h"


@interface AlivcPlayUrlInfo : NSObject

/**
 FLV Url
 */
@property(nonatomic, copy) NSString *flvUrl;

/**
 HLS Url
 */
@property(nonatomic, copy) NSString *hlsUrl;

/**
 URL 过期时间 UTC时间
 */
@property(nonatomic, copy) NSString *expireTime;

@end

@interface AlivcPlayInfo : NSObject

/**
 requestId
 */
@property(nonatomic, copy) NSString *requestId;

/**
 micNumber
 */
@property(nonatomic, assign) int micNumber;

/**
 micVersion
 */
@property(nonatomic, assign) int micVersion;

/**
 micStreamStatus
 */
@property(nonatomic, assign) int micStreamStatus;

/**
 micAppUid
 */
@property(nonatomic, copy) NSString *micAppUid;

/**
 micStreamName
 */
@property(nonatomic, copy) NSString *micStreamName;

/**
 current play Url
 当前播放url
 */
@property(nonatomic, copy) NSString *playUrl;

/**
 URL 过期时间 UTC时间
 */
@property(nonatomic, copy) NSString *expireTime;

/**
 play url list
 播放url列表
 */
@property(nonatomic, strong)NSMutableDictionary <NSString *, AlivcPlayUrlInfo *> *playUrlDic;

/**
 init

 @param dic data
 @param config AlivcRoomConfig
 @return instance
 */
- (instancetype)initWithDic:(NSDictionary *)dic config:(AlivcRoomConfig *)config;

@end
