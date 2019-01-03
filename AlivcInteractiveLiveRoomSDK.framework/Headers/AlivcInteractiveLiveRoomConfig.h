//
//  AlivcInteractiveLiveRoomConfig.h
//  AlivcInteractiveLiveRoomSDK
//
//  Created by Charming04 on 2018/5/20.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<AlivcLiveRoomSDK/AlivcLiveRoomSDK.h>)
#import <AlivcLiveRoomSDK/AlivcLiveRoomSDK.h>
#else
#import "AlivcLiveRoomSDK.h"
#endif

#if __has_include(<AlivcInteractiveWidgetSDK/AlivcInteractiveWidgetSDK.h>)
#import <AlivcInteractiveWidgetSDK/AlivcInteractiveWidgetSDK.h>
#else
#import "AlivcInteractiveWidgetSDK.h"
#endif

@interface AlivcInteractiveLiveRoomConfig : NSObject

/**
 阿里云直播服务区域，默认上海
 liveRegion, default is AlivcLiveRegionShangHai
 */
@property(nonatomic, assign) AlivcLiveRegion region;

/**
 IM server broker, if set region as AlivcLiveRegionUserDefined, must set this value
 */
@property(nonatomic, copy) NSString *imHost;

/**
 ilvb server broker, if set region as AlivcLiveRegionUserDefined, must set this value
 */
@property(nonatomic, copy) NSString *ilvbHost;

/**
 美颜开关（默认: 打开）
 beauty setting （default: YES）
 */
@property(nonatomic, assign) BOOL beautyOn;

/**
 相机位置（默认:前置）
 camera position:(default:front)
 */
@property(nonatomic, assign) AlivcLiveCameraPosition cameraPosition;

/**
 beautyMode
 */
@property(nonatomic, assign) AlivcBeautyMode beautyMode;

/**
 推流分辨率（默认:540P）
 push resolution (default:540P)
 */
@property(nonatomic, assign) AlivcLivePushResolution resolution;

/**
 pauseImg
 */
@property(nonatomic, strong) UIImage *pauseImg;

/**
 播放url类型
 默认 : flv
 */
@property(nonatomic, assign) AlivcLivePlaybackUrlType urlType;

/**
 liveRoomConfig
 */
@property(nonatomic, strong, readonly) AlivcLiveRoomConfig *liveRoomConfig;

/**
 widgetConfig
 */
@property(nonatomic, strong, readonly) AlivcInteractiveWidgetConfig *widgetConfig;

/**
 alivc inner test flag
 内部环境测试flag
 * 默认 : 关闭
 */
@property(nonatomic, assign) BOOL alivcTest;

@end
