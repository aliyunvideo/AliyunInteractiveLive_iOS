//
//  AlivcInteractiveLiveRoom.h
//  AlivcInteractiveLiveRoomSDK
//
//  Created by Charming04 on 2018/5/20.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AlivcInteractiveLiveRoomConfig.h"
#import "AlivcInteractiveLiveRoomAuthDelegate.h"
#import "AlivcInteractiveLiveRoomErrorDelegate.h"
#import "AlivcInteractiveLiveRoomConstants.h"

#if __has_include(<AlivcUtilsSDK/AlivcUtilsSDK.h>)
#import <AlivcUtilsSDK/AlivcUtilsSDK.h>
#else
#import "AlivcUtilsSDK.h"
#endif

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

@interface AlivcInteractiveLiveBase : NSObject

/**
 获取SDK版本号
 Get sdk version

 @return 当前SDK版本信息
 */
+ (NSString *)getSDKVersion;

/**
 设置Debug日志级别
 Set debug log level

 @param level 详见 AlivcInteractiveLiveRoomLogLevel
 */
+ (void)setLogLevel:(AlivcInteractiveLiveRoomLogLevel)level;

/**
 打开日志打印
 Enable debug log print
 */
+ (void)enableLog;

/**
 关闭日志打印
 Disable debug log print
 */
+ (void)disableLog;

/**
 设置阿里云互动直播appid
 Set appid
 注意：建议使用SDK前通过此接口输入业务方申请的阿里云appid
 */
+ (void)setAppId:(NSString *)appId;

/**
 设置用户信息
 Set the user info
 注意：建议使用SDK前通过此接口输入业务自定义用户信息
 */
+ (void)setUserInfo:(AlivcUser *)user;

/**
 设置用户角色
 Set the user role
 注意：建议使用SDK前通过此接口输入用户角色信息
 */
+ (void)setUserRole:(AlivcLiveRole *)role;

@end


@interface AlivcInteractiveLiveRoom : NSObject

/**
 Sts token 管理回调
 Sts token manager deleagte
 */
@property (nonatomic, weak) id<AlivcInteractiveLiveRoomAuthDelegate> authDelegate;

/**
 房间相关通知回调
 Room notify delegate
 */
@property (nonatomic, weak) id<AlivcLiveRoomNotifyDelegate> roomNotifyDelegate;

/**
 播放相关通知回调
 Player notify delegate
 */
@property (nonatomic, weak) id<AlivcLiveRoomPlayerNotifyDelegate> playerNotifyDelegate;

/**
 推流相关通知回调
 Pusher notify delegate
 */
@property (nonatomic, weak) id<AlivcLiveRoomPusherNotifyDelegate> pusherNotifyDelegate;

/**
 消息互动回调
 Interactive notify delegate
 */
@property (nonatomic, weak) id<AlivcInteractiveNotifyDelegate> interactiveNotifyDelegate;

/**
 网络通知回调
 Network notify delegate
 */
@property (nonatomic, weak) id<AlivcLiveRoomNetworkNotifyDelegate> networkNotifyDelegate;

/**
 错误回调
 Error delegate
 */
@property (nonatomic, weak) id<AlivcInteractiveLiveRoomErrorDelegate> interactiveLiveRoomErrorDelegate;

/**
 初始化
 init
 
 @param appId 阿里云互动直播appid
 @param config 初始化设置，详见 AlivcInteractiveLiveRoomConfig
 */
- (instancetype)initWithAppId:(NSString *)appId config:(AlivcInteractiveLiveRoomConfig*)config;

/**
 销毁
 destroy
 */
- (void)destroy;

/**
 进房间
 Enter room
 
 @param roomId 房间id
 @param user 用户信息，详见 AlivcUser
 @param role 角色信息，详见 AlivcLiveRole
 @param completion 回调
 */
- (void)enter:(NSString *)roomId
         user:(AlivcUser *)user
         role:(AlivcLiveRole *)role
   completion:(void (^)(AlivcLiveError *error,AlivcLiveRoomInfo *liveRoomInfo))completion;

/**
 退出房间
 Quit room
 
 @param completion 回调
 */
- (void)quit:(void (^)(AlivcLiveError *error))completion;

/**
 登陆
 Login with sts token
 
 @param sts 详见 AlivcSts
 */
- (void)login:(AlivcSts *)sts;

/**
 注销
 Logout
 */
- (void)logout;

/**
 更新Sts token
 Refresh sts
 注意：收到sts token 即将过期和已经过期的回调后，App 申请新的sts token通过此接口更新给SDK
 
 @param sts 详见 AlivcSts
 */
- (void)refreshSts:(AlivcSts *)sts;

/**
 开始预览（主播端接口）
 Start preview
 
 @param completion 回调
 */
- (void)startPreview:(void (^)(AlivcLiveError *error))completion;

/**
 停止预览（主播端接口）
 Stop preview
 */
- (void)stopPreview;

/**
 设置主播推流分辨率（主播端接口）
 Set resolution
 注意：必须在主播开始预览之后，进房间之前调用，进房间之后调用无效
 
 @param resolution 推流分辨率，详见 AlivcLivePushResolution
 */
- (void)setResolution:(AlivcLivePushResolution)resolution;

/**
 窗口显示模式设置
 Set the view display mode
 注意：该接口一定要在设置view之后调用
 
 @param mode 详见 AlivcLiveScalingMode
 */
- (void)setScalingMode:(AlivcLiveScalingMode)mode;

/**
 设置观看窗口（观众端接口）
 Set the remote display view
 注意：此接口必须要在进房间成功之后调用
 
 @param remoteView 用于显示的UIView
 @param micAppUid  主播的id
 */
- (void)setRemoteView:(UIView *)remoteView micAppUid:(NSString *)micAppUid;

/**
 设置本地预览view（主播端接口）
 Set the local preview view
 注意：此接口一定要在startPreview之前调用
 
 @param localView 用于显示的UIView
 */
- (void)setLocalView:(UIView *)localView;

/**
 发送聊天文本消息
 Send chat message
 注意：content NSString长度不能超过60
 
 @param content 聊天文本内容
 @param userData 用户自定义数据
 @param completion 回调
 */
- (void)sendChatMessage:(NSString *)content userData:(NSString *)userData completion:(void (^)(AlivcLiveError *error))completion;

/**
 发送点赞
 Send like
 
 @param count 点赞数
 @param completion 回调
 */
- (void)sendLikeWithCount:(NSInteger )count
               completion:(void (^)(AlivcLiveError *error))completion;

/**
 踢出房间（主播端接口）
 Kick out user
 
 @param userId 被踢用户id
 @param userData 用户自定义数据
 @param duration 踢出时间间隔，单位秒
                 0 表示踢出本次
                 其他值 表示踢出duration秒内不允许进入
 @param completion 回调
 */
- (void)kickout:(NSString *)userId userData:(NSString *)userData duration:(NSUInteger)duration completion:(void (^)(AlivcLiveError *error))completion;

/**
 解除踢出（主播端接口）
 Cancel Kickout user
 注意：被解除踢出的用户可以立刻进入直播间
 
 @param userId 被踢用户id
 @param completion 回调
 */
- (void)cancelKickout:(NSString *)userId
            completion:(void (^)(AlivcLiveError *error))completion;

/**
 暂停
 Pause
 注意：主播端调用时，直播只推音频，观众端调用时暂停播放
 */
- (void)pause;

/**
 恢复
 Resume
 */
- (void)resume;

/**
 静音
 Mute
 
 @param isMute 静音开关
 */
- (void)setMute:(BOOL)isMute;

/**
 重连
 Reconnect
 注意：此接口既可以用于主播端，也可以用于观众端
      主播端调用时，开始重新推流
      观众端调用时，开始重新播放
 
 @param completion 回调
 */
- (void)reconnect:(void (^)(AlivcLiveError *error))completion;

/**
 美颜开关（主播端接口）
 Set the beauty on
 
 @param beautyOn default true
 */
- (void)setBeautyOn:(BOOL)beautyOn;

/**
 调节美颜参数（主播端接口）
 Set beauty params
 
 @param beautyParams 美颜参数，详见 AlivcBeautyParams
 */
- (void)setBeautyParams:(AlivcBeautyParams *)beautyParams;

/**
 设置用户自定义滤镜
 Set custom filter delegate
 注意：SDK 支持外接滤镜，需要使用外接滤镜的时候，调用此接口设置代理，用户必须实现代理的所有方法，一旦设置了外置滤镜，SDK中的美颜滤镜就会失效
 
 @param delegate 自定义滤镜，详见 AlivcLivePusherCustomFilterDelegate
 */
- (void)setCustomFilterDelegate:(id<AlivcLivePusherCustomFilterDelegate>)delegate;

/**
 设置用户自定义人脸检测
 Set custom face detector delegate
 注意：SDK 支持外接人脸检测，需要使用外接人脸检测的时候，调用此接口设置代理，用户必须实现代理的所有方法，一旦设置了外置人脸检测，SDK中的人脸检测就会失效
 
 @param delegate 自定义滤镜，详见 AlivcLivePusherCustomDetectorDelegate
 */
- (void)setCustomDetectorDelegate:(id<AlivcLivePusherCustomDetectorDelegate>)delegate;

/**
 切换相机位置
 Switch camera position
 */
- (void)switchCamera;

/**
 获取当前相机位置
 get current camera position
 
 return 详见 AlivcLiveCameraPosition
 */
- (AlivcLiveCameraPosition)getCurrentCameraPosition;

/**
 自动聚焦设置
 Set camera auto focus
 
 @param autoFocus 是否开启自动聚焦，默认开启
 */
- (void)setAutoFocus:(BOOL)autoFocus;

/**
 手动聚焦
 Set camera focus
 
 @param point CGPoint 聚焦点
 @param autoFocus 是否做一次自动聚焦
 */
- (void)focusCameraAtPoint:(CGPoint)point needAutoFocus:(BOOL)autoFocus;

/**
 缩放
 Set zoom
 注意：默认zoom 为1.0， 每次设置为增量设置
 
 @param zoom 增量值（可以为负）
 */
- (void)setZoom:(float)zoom;

/**
 获取支持的最大缩放值
 Get max zoom
 
 @return max zoom 最大缩放值
 */
- (float)getMaxZoom;

/**
 获取当前缩放值
 Get current zoom
 
 @return 当前设置值
 */
- (float)getCurrentZoom;

/**
 获取当前曝光度
 Get current exposure
 
 @return 当前曝光度
 */
- (float)getCurrentExposure;

/**
 获取支持最小曝光度
 Get min exposure
 
 @return  最小曝光度
 */
- (float)getMinExposure;

/**
 获取支持最大曝光度
 Get max exposure
 
 @return  最大曝光度
 */
- (float)getMaxExposure;

/**
 设置曝光度
 Set exposure
 
 @return int
 */
- (int)setExposure:(float)exposure;

/**
 打开手电筒
 Open flash
 
 @param flash 是否开启
 */
- (void)setFlash:(BOOL)flash;

/**
 获取房间信息
 Get room info
 注意：此接口要在enter成功之后调用
 
 @return 详见 AlivcLiveRoomInfo
 */
- (AlivcLiveRoomInfo *)getLiveRoomInfo;

/**
 获取当前直播的播放列表
 Get play url info
 注意：此接口要在enter成功之后调用
 */
- (void)getPlayUrlInfo:(void (^)(AlivcLiveError *error, NSMutableDictionary <NSString *, AlivcPlayUrlInfo *> *playUrlDic))completion;

/**
 获取历史消息，最近20条
 Get history chat message, the last 20 messages
 注意：此接口要在enter成功之后调用
 
 @param completion 回调
 */
- (void)getHistoryChatMessage:(void (^)(AlivcLiveError *error, NSArray <AlivcMessageInfo *> *messageList))completion;

/**
 获取点赞数
 Get like count
 注意：此接口要在enter成功之后调用
 
 @param completion 回调
 */
- (void)getLikeCount:(void (^)(AlivcLiveError *error, NSUInteger count))completion;

@end
