//
//  AlivcLiveRoomNetworkNotifyDelegate.h
//  AlivcInteractiveLiveRoomSDK
//
//  Created by OjisanC on 2018/6/5.
//

@protocol AlivcLiveRoomNetworkNotifyDelegate <NSObject>

@optional

/**
 Network Poor
 弱网提示（主播端）
 */
- (void)onAlivcLiveRoomNetworkPoor;

/**
 Network Recovery
 网络恢复（主播端）
 */
- (void)onAlivcLiveRoomNetworkRecovery;

/**
 Reconnect Start
 开始重连
 */
- (void)onAlivcLiveRoomReconnectStart;

/**
 Reconnect Success
 重连成功
 */
- (void)onAlivcLiveRoomReconnectSuccess;

/**
 Reconnect Fail
 重连失败
 */
- (void)onAlivcLiveRoomReconnectFail;

@end
