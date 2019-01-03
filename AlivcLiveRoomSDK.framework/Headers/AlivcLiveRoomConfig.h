//
//  AlivcLiveRoomConfig.h
//  AlivcLiveRoomSDK
//
//  Created by OjisanC on 2018/5/18.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlivcRoomConfig.h"
#import "AlivcPlayerConfig.h"
#import "AlivcPusherConfig.h"
#import "AlivcLiveRoomConstants.h"

@interface AlivcLiveRoomConfig : NSObject

/**
 roomConfig
 */
@property(nonatomic, strong, readonly) AlivcRoomConfig *roomConfig;

/**
 playerConfig
 */
@property(nonatomic, strong, readonly) AlivcPlayerConfig *playerConfig;

/**
 pusherConfig
 */
@property(nonatomic, strong, readonly) AlivcPusherConfig *pusherConfig;

/**
 playUrlType
 */
@property(nonatomic, assign) AlivcLiveRoomPlayUrlType playUrlType;

/**
 notifyIntervalBeforeExpired
 */
@property (nonatomic, assign)NSUInteger notifyIntervalBeforeExpired;

/**
 beautyOn
 */
@property(nonatomic, assign) BOOL beautyOn;

/**
 beautyMode
 */
@property(nonatomic, assign) AlivcBeautyMode beautyMode;

/**
 resolution
 */
@property(nonatomic, assign) AlivcLivePushResolution resolution;

/**
 pauseImg
 */
@property(nonatomic, strong) UIImage *pauseImg;

/**
 camera position
 */
@property(nonatomic, assign) AlivcLiveCameraPosition cameraPosition;

@end
