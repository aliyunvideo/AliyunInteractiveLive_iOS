//
//  AlivcLiveRoomConstants.h
//  AlivcLiveRoomSDK
//
//  Created by OjisanC on 2018/5/17.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#ifndef AlivcLiveRoomConstants_h
#define AlivcLiveRoomConstants_h

/**
 AlivcLiveRoomType

 - AlivcLiveRoomTypeChat: Chat
 - AlivcLiveRoomTypePush: Push
 - AlivcLiveRoomTypeLive: Live
 */
typedef NS_ENUM(NSInteger,AlivcLiveRoomType) {
    AlivcLiveRoomTypeChat = 0,
    AlivcLiveRoomTypePush = 1,
    AlivcLiveRoomTypeLive = 2,
};

/**
 AlivcLiveRoomPlayUrlType

 - AlivcLiveRoomPlayUrlTypeHlsUd: HlsUd
 - AlivcLiveRoomPlayUrlTypeFlvUd: FlvUd:
 - AlivcLiveRoomPlayUrlTypeHlsHd: HlsHd
 - AlivcLiveRoomPlayUrlTypeFlvHd: FlvHd
 - AlivcLiveRoomPlayUrlTypeHlsOd: HlsOd
 - AlivcLiveRoomPlayUrlTypeFlvOd: FlvOd
 - AlivcLiveRoomPlayUrlTypeHlsSd: HlsSd
 - AlivcLiveRoomPlayUrlTypeFlvSd: FlvSd
 */
typedef NS_ENUM(NSInteger,AlivcLiveRoomPlayUrlType) {
    AlivcLiveRoomPlayUrlTypeHlsUd = 0,
    AlivcLiveRoomPlayUrlTypeFlvUd,
    AlivcLiveRoomPlayUrlTypeHlsHd,
    AlivcLiveRoomPlayUrlTypeFlvHd,
    AlivcLiveRoomPlayUrlTypeHlsOd,
    AlivcLiveRoomPlayUrlTypeFlvOd,
    AlivcLiveRoomPlayUrlTypeHlsSd,
    AlivcLiveRoomPlayUrlTypeFlvSd,
};

/**
 AlivcLiveRegion
 
 - AlivcLiveRegionShangHai: Shanghai Region
 - AlivcLiveRegionSingapore: Singapore Region
 - AlivcLiveRegionUserDefined: User Defined Region
 */
typedef NS_ENUM(NSInteger,AlivcLiveRegion) {
    AlivcLiveRegionShangHai = 0,
    AlivcLiveRegionSingapore = 1,
    AlivcLiveRegionUserDefined = 2,
};

/**
 AlivcLiveScalingMode
 
 - AlivcLiveScalingModeAspectFit: Aspect Fit
 - AlivcLiveScalingModeAspectFitWithCropping: Aspect Fit With Cropping
 */
typedef NS_ENUM(NSUInteger,AlivcLiveScalingMode) {
    AlivcLiveScalingModeAspectFit = 0,
    AlivcLiveScalingModeAspectFitWithCropping = 1,
};

/**
 摄像头方向
 
 - AlivcLiveCameraPositionBack: 后置摄像头
 - AlivcLiveCameraPositionFront: 前置摄像头
 */
typedef NS_ENUM(NSInteger, AlivcLiveCameraPosition){
    AlivcLiveCameraPositionBack = 0,
    AlivcLiveCameraPositionFront,
};

/**
 播放url格式
 
 - AlivcLivePlaybackTypeFlv: flv
 - AlivcLivePlaybackTypeHls: hls
 */
typedef NS_ENUM(NSInteger, AlivcLivePlaybackUrlType){
    AlivcLivePlaybackUrlTypeFlv = 0,
    AlivcLivePlaybackUrlTypeHls,
};


#endif /* AlivcLiveRoomConstants_h */
