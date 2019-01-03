//
//  AlivcLiveRoomPusherNotifyDelegate.h
//  AlivcLiveRoomSDK
//
//  Created by OjisanC on 2018/5/18.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AlivcLiveRoomPusherNotifyDelegate <NSObject>

@optional

/**
 PreviewStarted
 */
- (void)onAlivcPusherPreviewStarted;

/**
 PreviewStopped
 */
- (void)onAlivcPusherPreviewStopped;

/**
 Previewed
 */
- (void)onAlivcPusherFirstFramePreviewed;

/**
 PushStarted
 */
- (void)onAlivcPusherPushStarted;

/**
 PushPauesed
 */
- (void)onAlivcPusherPushPauesed;

/**
 PushResumed
 */
- (void)onAlivcPusherPushResumed;

/**
 PushStopped
 */
- (void)onAlivcPusherPushStopped;


@end
