//
//  AlivcLiveRoom.h
//  AlivcLiveRoomSDK
//
//  Created by OjisanC on 2018/5/17.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AlivcLiveRoomErrorDelegate.h"
#import "AlivcLiveRoomNotifyDelegate.h"
#import "AlivcLiveRoomPlayerErrorDelegate.h"
#import "AlivcLiveRoomPlayerNotifyDelegate.h"
#import "AlivcLiveRoomPusherErrorDelegate.h"
#import "AlivcLiveRoomPusherNotifyDelegate.h"
#import "AlivcLiveRoomNetworkNotifyDelegate.h"
#import "AlivcPusherDelegate.h"

#import "AlivcLiveRoomConstants.h"

#import "AlivcLiveRoomInfo.h"
#import "AlivcLiveRoomConfig.h"
#import "AlivcLiveRole.h"
#import "AlivcBeautyParams.h"
#import "AlivcPlayInfo.h"
#import "AlivcPushInfo.h"
#import "AlivcLiveRoomInfo.h"
#import "AlivcUser.h"

#if __has_include(<AlivcUtilsSDK/AlivcUtilsSDK.h>)
#import <AlivcUtilsSDK/AlivcUtilsSDK.h>
#else
#import "AlivcUtilsSDK.h"
#endif

@interface AlivcLiveRoomStatistics : NSObject
/**
 总自定义通知数
 */
@property(nonatomic, assign) int totalUdfMessageCount;

@end


@interface AlivcLiveRoom : NSObject

@property (nonatomic, strong) AlivcLiveRoomStatistics* roomStatistics;

/**
 live room error delegate
 */
@property (nonatomic, weak) id<AlivcLiveRoomErrorDelegate> roomErrorDelegate;

/**
 live room notify delegate
 */
@property (nonatomic, weak) id<AlivcLiveRoomNotifyDelegate> roomNotifyDelegate;

/**
 live room error delegate
 */
@property (nonatomic, weak) id<AlivcLiveRoomPlayerErrorDelegate> playerErrorDelegate;

/**
 play notify delegate
 */
@property (nonatomic, weak) id<AlivcLiveRoomPlayerNotifyDelegate> playerNotifyDelegate;

/**
 pusher error delegate
 */
@property (nonatomic, weak) id<AlivcLiveRoomPusherErrorDelegate> pusherErrorDelegate;

/**
 pusher notify delegate
 */
@property (nonatomic, weak) id<AlivcLiveRoomPusherNotifyDelegate> pusherNotifyDelegate;

/**
 pusher notify delegate
 */
@property (nonatomic, weak) id<AlivcLiveRoomNetworkNotifyDelegate> networkNotifyDelegate;


/**
 AlivcInteractiveLiveRoom
 @param appId biz appId
 @param liveRoomConfig AlivcLiveRoomConfig
 @return AlivcInteractiveLiveRoom
 */
- (instancetype)initWithAppId:(NSString *)appId config:(AlivcLiveRoomConfig*)liveRoomConfig;

/**
 messageCenter

 @param messageCenter AlivcMessageCenter
 */
- (void)setMessageCenter:(AlivcMessageCenter *)messageCenter;

/**
 pause
 */
- (void)pause;

/**
 resume
 */
- (void)resume;

#pragma mark room

/**
 enter liveRoom
 @param roomId roomId
 @param user AlivcUser
 @param role AlivcLiveRole
 @param completion completionCallback
 */
- (void)enter:(NSString *)roomId user:(AlivcUser *)user role:(AlivcLiveRole *)role completion:(void (^)(AlivcLiveError *error, AlivcLiveRoomInfo *liveRoomInfo))completion;

/**
 quit liveRoom
 @param completion completionCallback
 */
- (void)quit:(void (^)(AlivcLiveError *error))completion;

/**
 kickout

 @param appUid kitckoutedAppUid
 @param reason reason
 @param duration expireTime
 @param completion completionCallback
 */
- (void)kickout:(NSString *)appUid reson:(NSString *)reason duration:(NSUInteger)duration completion:(void (^)(AlivcLiveError *error))completion;

/**
 cancelKickout

 @param appUid relievedKickoutAppuid
 @param completion completionCallback
 */
- (void)cancelKickout:(NSString *)appUid completion:(void (^)(AlivcLiveError *error))completion;

/**
 IMToken

 @param completion completionCallback
 */
- (void)requestImToken:(void (^)(AlivcLiveError *error, AlivcToken *token))completion;

/**
 set sts
 @param sts AlivcSts
 */
- (void)login:(AlivcSts *)sts;

/**
 clear sts
 */
- (void)logout;

/**
 refresh sts
 */
- (void)refreshSts:(AlivcSts *)sts;

/**
 liveRoomInfo

 @return AlivcLiveRoomInfo
 */
- (AlivcLiveRoomInfo *)liveRoomInfo;

/**
 get play url info
 */
- (void)getPlayUrlInfo:(void (^)(AlivcLiveError *error, NSMutableDictionary <NSString *, AlivcPlayUrlInfo *> *playUrlDic))completion;


#pragma mark player

/**
 player scaling mode
 @param mode AlivcLiveScalingMode
 */
- (void)setScalingMode:(AlivcLiveScalingMode)mode;

/**
 player render View
 @param remoteView mic UIView
 @param micAppUid  mic id in mic_list
 */
- (void)setRemoteView:(UIView *)remoteView micAppUid:(NSString *)micAppUid;

#pragma mark push
/**
 previewView must set before call startPreview, and only can set once
 @param localView UIView
 */
- (void)setLocalView:(UIView *)localView;

/**
 AlivcLiveRoleHost start preview
 @param completion completionCallback
 */
- (void)startPreview:(void (^)(AlivcLiveError *error))completion;

/**
 AlivcLiveRoleHost stop preview
 */
- (void)stopPreview;

/**
 for host, will reconnect push, for audience, will reconnect play
 @param completion completionCallback
 */
- (void)reconnect:(void (^)(AlivcLiveError *error))completion;

/**
 Set push resolution, must called during previewing

 @param resolution AlivcLivePushResolution
 */
- (void)setResolution:(AlivcLivePushResolution)resolution;


#pragma mark beauty
/**
 beautyOn
 @param beautyOn default true
 */
- (void)setBeautyOn:(BOOL)beautyOn;

/**
 beautyParams
 @param beautyParams AlivcBeautyParams
 */
- (void)setBeautyParams:(AlivcBeautyParams *)beautyParams;

/**
 custom filter delegate
 @param delegate AlivcLivePusherCustomFilterDelegate
 */
- (void)setCustomFilterDelegate:(id<AlivcLivePusherCustomFilterDelegate>)delegate;

/**
 custom detector delegate
 @param delegate AlivcLivePusherCustomDetectorDelegate
 */
- (void)setCustomDetectorDelegate:(id<AlivcLivePusherCustomDetectorDelegate>)delegate;

#pragma mark camera
/**
 switch camera
 */
- (void)switchCamera;

/**
 get current camera position
 */
- (AlivcLiveCameraPosition)getCurrentCameraPosition;

/**
 autoFocus
 @param autoFocus default true
 */
- (void)setAutoFocus:(BOOL)autoFocus;

/**
 focusCamera
 @param point CGPoint
 @param autoFocus BOOL
 */
- (void)focusCameraAtPoint:(CGPoint)point needAutoFocus:(BOOL)autoFocus;

/**
 zoom
 @param zoom float
 */
- (void)setZoom:(float)zoom;

/**
 获取当前曝光度
 
 @return 当前变焦值
 */
- (float)getCurrentExposure;

/**
 获取支持最小曝光度
 
 @return  最小曝光度
 */
- (float)getMinExposure;

/**
 获取支持最大曝光度
 
 @return  最大曝光度
 */
- (float)getMaxExposure;

/**
 设置曝光度
 
 @return int
 */
- (int)setExposure:(float)exposure;

/**
 max zoom
 @return max zoom value
 */
- (float)getMaxZoom;

/**
 current zoom
 @return current zoom value
 */
- (float)getCurrentZoom;

/**
 flash true:open flash, false: close flash
 @param flash BOOL
 */
- (void)setFlash:(BOOL)flash;

#pragma mark sound
/**
 mute switch
 @param isMute true:mute push false:nomarl push
 */
- (void)setMute:(BOOL)isMute;

/**
 set running environment
 */
+ (void)setEnvironment:(AlivcLiveEnvironment)environment;

@end

