//
//  AlivcLiveRoomPlayerNotifyDelegate.h
//  AlivcLiveRoomSDK
//
//  Created by OjisanC on 2018/5/18.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AlivcLiveRoomPlayerNotifyDelegate <NSObject>

@optional
/**
 play start notify
 播放开始通知
 */
- (void)onAlivcPlayerStarted;

/**
 play stop notify
 播放停止通知
 */
- (void)onAlivcPlayerStopped;

/**
 play buffering start notify
 播放开始缓冲通知
 */
- (void)onAlivcPlayerBufferingStart;

/**
 play buffering end notify
 播放结束缓冲通知
 */
- (void)onAlivcPlayerBufferingEnd;

@end

