//
//  AlivcPusherConfig.h
//  AlivcLiveRoomSDK
//
//  Created by OjisanC on 2018/5/17.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AlivcLivePusher/AlivcLivePusherHeader.h>

/**
 AlivcBeautyMode
 
 - AlivcBeautyNone: no beauty
 - AlivcBeautyStandard: beauty with standard level
 - AlivcBeautyPressional: beauty with professional
 - AlivcBeautyCustomCPU: user defined beauty by CPU process
 - AlivcBeautyCustomGPU: user defined beauty by GPU process
 - AlivcBeautyCustomCPUAndGPU: user defined beauty by CPU and GPU process
 */
typedef NS_ENUM(NSInteger,AlivcBeautyMode) {
    AlivcBeautyNone = 0,
    AlivcBeautyStandard = 1,
    AlivcBeautyPressional = 2,
    AlivcBeautyCustomCPU = 3,
    AlivcBeautyCustomGPU = 4,
    AlivcBeautyCustomCPUAndGPU = 5,
} ;


@interface AlivcPusherConfig : NSObject

/**
 AlivcLivePushConfig object
 */
@property (nonatomic, strong) AlivcLivePushConfig *livePushConfig;

/**
 beauty On-Off（default : YES）
 */
@property(nonatomic, assign) BOOL beautyOn;

/**
 resolution（default : AlivcLivePushDefinition540P）
 */
@property(nonatomic, assign) AlivcLivePushResolution resolution;

/**
 beauty mode(default: AlivcLivePushBeautyModeProfessional)
 */
@property(nonatomic, assign) AlivcBeautyMode beautyMode;

/**
 pause push image
 */
@property(nonatomic, strong) UIImage *pauseImg;

/**
 network poor image
 */
@property(nonatomic, strong) UIImage *networkPoorImg;

/**
 camera type
 */
@property (nonatomic, assign)AlivcLivePushCameraType cameraType;

/**
 display mode
 */
@property (nonatomic, assign)AlivcPusherPreviewDisplayMode displayMode;

@end
