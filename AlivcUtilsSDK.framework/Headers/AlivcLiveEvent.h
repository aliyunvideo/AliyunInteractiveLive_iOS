//
//  AlivcLiveEvent.h
//  AlivcInteractiveLiveRoomSDK
//
//  Created by OjisanC on 2018/6/2.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, AlivcLiveEvents){
    AlivcLiveEventStopPush = 2012,
    AlivcLiveEventStopPlay = 2015,
    AlivcLiveEventLogout = 2019,
    AlivcLiveEventImDisconnect = 2021,
    AlivcLiveEventPause = 2029,
    AlivcLiveEventResume = 2030,
    AlivcLiveEventReconnect = 2031,
    AlivcLiveEventStopPreview = 2039,
    AlivcLiveEventUserDefinedFilter = 2043,
    AlivcLiveEventUserDefinedFaceDetect = 2044,
    AlivcLiveEventSwitchCamera = 2045,
    AlivcLiveEventPushStartNotify = 2060,
    AlivcLiveEventPushStopNotify = 2061,
    AlivcLiveEventPushPauseNotify = 2062,
    AlivcLiveEventPushResumeNotify = 2063,
    AlivcLiveEventPushNetworkPoorNotify = 2064,
    AlivcLiveEventPushReconnectStartNotify = 2065,
    AlivcLiveEventPushReconnectSuccessNotify = 2066,
    AlivcLiveEventPushReconnectFailNotify = 2067,
    AlivcLiveEventPlayStartNotify = 2068,
    AlivcLiveEventPlayStopNotify = 2069,
    AlivcLiveEventPlayBufferingStartNotify = 2070,
    AlivcLiveEventPlayBufferingStopNotify = 2071,
    AlivcLiveEventPushUrlWillExpireSoon = 2074,
    AlivcLiveEventPlayUrlExpired = 2075,
    AlivcLiveEventPushNetworkRecovery = 2076,
    AlivcLiveEventPushRtmpConnectionLost = 2081,
};


@interface AlivcLiveEvent : NSObject

@property (nonatomic, copy)NSString *videoUrl;

+ (instancetype)sharedInstance;

/**
 设置房间id、appID、user id
 */
- (void)setRoomId:(NSString *)roomId appId:(NSString *)appId userId:(NSString *)userId role:(NSInteger)role;

/**
 设置SDK version
 */
- (void)setSDKVersion:(NSString *)version;

/**
 设置Debug 日志级别
 */
- (void)setDebugLogLevel:(NSInteger)level;

/**
 设置session id
 */
- (void)setSessionId:(NSString *)sessionId;

/**
 设置关联url
 */
- (void)setVideoUrl:(NSString *)videoUrl;

/**
 开启
 */
- (void)start;

/**
 停止
 */
- (void)stop;

/**
 发送事件
 */
- (void)sendEvent:(AlivcLiveEvents)event;

/**
 创建房间事件
 */
- (void)sendEventCreateRoom:(BOOL)isSuccess isAllForbid:(BOOL)isAllForbid;

/**
 进房间事件
 */
- (void)sendEventEnterRoom:(BOOL)isSuccess region:(NSInteger)region role:(int)role isAllForbid:(BOOL)isAllForbid requestId:(NSString *)requestId enterTime:(NSTimeInterval)enterTime;

/**
 退出房间事件
 */
- (void)sendEventQuitRoom:(BOOL)isSuccess requestId:(NSString *)requestId;

/**
 销毁房间事件
 */
- (void)sendEventDestoryRoom;

/**
 开始推流事件
 */
- (void)sendEventStartPush:(NSString *)url resolution:(NSInteger)resolution;

/**
 推流成功事件
 */
- (void)sendEventPushSuccess:(NSTimeInterval)pushTime;

/**
 播放开始事件
 */
- (void)sendEventStartPlay:(NSString *)url;

/**
 播放成功事件
 */
- (void)sendEventPlaySuccess:(NSTimeInterval)playTime;

/**
 上麦事件
 */
- (void)sendEventUpmic:(BOOL)isSuccess requestId:(NSString *)requestId;

/**
 下麦事件
 */
- (void)sendEventDownmic:(BOOL)isSuccess requestId:(NSString *)requestId;

/**
 登陆事件
 */
- (void)sendEventLogin:(NSString *)stsExpiredTime;

/**
 IM开始连接事件
 */
- (void)sendEventImConnect:(BOOL)isSuccess url:(NSString *)url clientId:(NSString *)clientId;

/**
 点赞事件
 */
- (void)sendEventLike:(NSString *)requestId;

/**
 禁言事件
 */
- (void)sendEventForbidChat:(BOOL)isSuccess duration:(NSUInteger)duration isAll:(BOOL)isAll requestId:(NSString *)requestId;

/**
 踢人事件
 */
- (void)sendEventKickOut:(BOOL)isSuccess userId:(NSString *)userId requestId:(NSString *)requestId;

/**
 取消踢人事件
 */
- (void)sendEventCancelKickOut:(BOOL)isSuccess userId:(NSString *)userId requestId:(NSString *)requestId;

/**
 聊天事件
 */
- (void)sendEventChatMessage:(int)type isSuccess:(BOOL)isSuccess requestId:(NSString *)requestId;

/**
 流变更下行事件
 */
- (void)sendEventStreamChangeNotify:(int)state;

/**
 麦变更下行事件
 */
- (void)sendEventMicChangeNotify:(int)state;

/**
 踢人下行事件
 */
- (void)sendEventUserKickedOutNotify:(NSString *)userId;

/**
 禁播下行事件
 */
- (void)sendEventForbidBroadcastNotify;

/**
 IM 更新Token事件
 */
- (void)sendEventImUpdateToken:(NSString *)token;

/**
 更新Sts事件
 */
- (void)sendEventRefreshSts:(NSString *)stsExpiredTime;

/**
 获取聊天历史事件
 */
- (void)sendEventGetHistoryMsg:(BOOL)isSuccess requestId:(NSString *)requestId;

/**
 获取点赞事件
 */
- (void)sendEventGetLikeCount:(NSInteger)count isSuccess:(BOOL)isSuccess requestId:(NSString *)requestId;

/**
 设置显示模式事件
 */
- (void)sendEventSetDisplayMode:(NSInteger)mode;

/**
 设置本地view事件
 */
- (void)sendEventSetLocalView:(BOOL)valid;

/**
 设置远程view事件
 */
- (void)sendEventSetRemoteView:(BOOL)valid userId:(NSString *)userId;

/**
 开始预览事件
 */
- (void)sendEventStartPreview:(BOOL)isSuccess;

/**
 设置分辨率事件
 */
- (void)sendEventSetResolution:(NSInteger)resolution;

/**
 设置美颜事件
 */
- (void)sendEventSetBeauty:(BOOL)beautyOn;

/**
 设置美颜参数事件
 */
- (void)sendEventSetBeautyWhite:(int)white buffing:(int)buffing thin:(int)thin bigEye:(int)bigEye shorten:(int)shorten pink:(int)pink ruddy:(int)ruddy;

/**
 设置自动聚焦事件
 */
- (void)sendEventSetAutoFocus:(BOOL)autoFocus;

/**
 设置聚焦事件
 */
- (void)sendEventSetFocus:(BOOL)autoFocus x:(float)x y:(float)y;

/**
 设置缩放事件
 */
- (void)sendEventSetZoom:(float)zoom;

/**
 获取最大缩放事件
 */
- (void)sendEventMaxZoom:(float)zoom;

/**
 获取c当前缩放事件
 */
- (void)sendEventCurrentZoom:(float)zoom;

/**
 设置手电筒事件
 */
- (void)sendEventSetTorch:(BOOL)torchOn;

/**
 设置静音事件
 */
- (void)sendEventSetMute:(BOOL)muteOn;

/**
 设置相机事件
 */
- (void)sendEventCameraPos:(NSInteger)pos;

/**
 设置日志事件
 */
- (void)sendEventLogOn:(BOOL)logOn;

/**
 获取播放信息事件
 */
- (void)sendEventGetPlayInfo:(BOOL)isSussess requestId:(NSString *)requestId;

/**
 设获取推流信息事件
 */
- (void)sendEventGetPushInfo:(BOOL)isSussess requestId:(NSString *)requestId;

/**
 获取IM token事件
 */
- (void)sendEventRequestImToken:(BOOL)isSussess requestId:(NSString *)requestId;

/**
 STS token 快要过期事件
 */
- (void)sendEventStsTokenWillExpireSoomNotify:(NSString *)expiredTime;

/**
 STS token 已经过期事件
 */
- (void)sendEventStsTokenHasExpiredNotify:(NSString *)expiredTime;

/**
 IM token 快要过期事件
 */
- (void)sendEventImTokenWillExpireSoomNotify:(NSString *)expiredTime;

/**
 IM token 已经过期事件
 */
- (void)sendEventImTokenHasExpiredNotify:(NSString *)expiredTime;

/**
 设置曝光度事件
 */
- (void)sendEventSetExposure:(float)exposure;

/**
 获取当前曝光度事件
 */
- (void)sendEventCurrentExposure:(float)exposure;

/**
 获取最大曝光度事件
 */
- (void)sendEventMaxExposure:(float)exposure;

/**
 获取最小曝光度事件
 */
- (void)sendEventMinExposure:(float)exposure;

/**
 错误事件
 */
- (void)sendEventErrorModule:(NSInteger)module code:(NSInteger)code details:(NSString *)details event:(NSInteger)event;

/**
 周期性事件
 */
- (void)sendEventHeartBeats:(NSMutableDictionary *)params;

@end
