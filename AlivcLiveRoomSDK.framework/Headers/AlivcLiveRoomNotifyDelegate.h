//
//  AlivcLiveRoomNotifyDelegate.h
//  AlivcLiveRoomSDK
//
//  Created by OjisanC on 2018/5/18.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AlivcLiveRole;

@protocol AlivcLiveRoomNotifyDelegate <NSObject>

@optional

/**
 自定义房间通知
 */
- (void)onAlivcRoomCustomMsgNotify:(NSData *)data;

/**
 主播开始直播通知
 */
- (void)onAlivcRoomUpMic:(NSString *)userId;

/**
 主播停止直播通知
 */
- (void)onAlivcRoomDownMic:(NSString *)userId;

/**
 用户被踢出房间通知
 */
- (void)onAlivcRoomKickOutUserId:(NSString *)userId userData:(NSString *)userData;

/**
 主播被禁播通知
 */
- (void)onAlivcRoomForbidPushStream:(NSString *)userData;

@end
