//
//  AlivcPusherDelegate.h
//  AlivcLiveRoomSDK
//
//  Created by OjisanC on 2018/5/19.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AlivcPusher;

@protocol AlivcPusherDelegate <NSObject>

@optional

/**
 preview start
 
 @param pusher AlivcPusher
 */
- (void)onAlivcPusherPreviewStarted:(AlivcPusher *)pusher;

/**
 preview stop
 
 @param pusher AlivcPusher
 */
- (void)onAlivcPusherPreviewStopped:(AlivcPusher *)pusher;

/**
 first frame previewed
 
 @param pusher AlivcPusher
 */
- (void)onAlivcPusherFirstFramePreviewed:(AlivcPusher *)pusher;

/**
 push started
 
 @param pusher AlivcPusher
 */
- (void)onAlivcPusherPushStarted:(AlivcPusher *)pusher;

/**
 push paused
 
 @param pusher AlivcPusher
 */
- (void)onAlivcPusherPushPauesed:(AlivcPusher *)pusher;

/**
 push resumed
 
 @param pusher AlivcPusher
 */
- (void)onAlivcPusherPushResumed:(AlivcPusher *)pusher;

/**
 push stopped
 
 @param pusher AlivcPusher
 */
- (void)onAlivcPusherPushStopped:(AlivcPusher *)pusher;

/**
 network poor
 
 @param pusher AlivcPusher
 */
- (void)onAlivcPusherNetworkPoor:(AlivcPusher *)pusher;

/**
 network recovery
 
 @param pusher AlivcPusher
 */
- (void)onAlivcPusherNetworkRecovery:(AlivcPusher *)pusher;

/**
 server reconnect start
 
 @param pusher AlivcPusher
 */
- (void)onAlivcPusherReconnectStart:(AlivcPusher *)pusher;

/**
 server reconnect success
 
 @param pusher AlivcPusher
 */
- (void)onAlivcPusherReconnectSuccess:(AlivcPusher *)pusher;

/**
 server reconnect fail
 
 @param pusher AlivcPusher
 */
- (void)onAlivcPusherReconnectFail:(AlivcPusher *)pusher;

/**
 server connect lost
 
 @param pusher AlivcPusher
 */
- (void)onAlivcPusherConnectionLost:(AlivcPusher *)pusher;

/**
 url authentication close to expire
 
 @param pusher AlivcPusher
 @return new url
 */
- (NSString *)onAlivcPusherURLAuthenticationAboutToExpire:(AlivcPusher *)pusher;

/**
 alivc pusher error notify

 @param pusher AlivcPusher
 @param errorCode error code
 @param errorDetail error detail
 */
- (void)onAlivcPusherError:(AlivcPusher *)pusher errorCode:(NSInteger)errorCode errorDetail:(NSString *)errorDetail;

@end
