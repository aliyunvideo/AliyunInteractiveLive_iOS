//
//  AlivcPlayerDelegate.h
//  AlivcLiveRoomSDK
//
//  Created by OjisanC on 2018/5/19.
//  Copyright © 2018年 Aliyun. All rights reserved.
//


#import <Foundation/Foundation.h>

@class AlivcPlayer;

@protocol AlivcPlayerDelegate <NSObject>

@optional

/**
 Started

 @param player AlivcPlayer
 */
- (void)onAlivcPlayerStarted:(AlivcPlayer *)player;

/**
 Stopped

 @param player AlivcPlayer
 */
- (void)onAlivcPlayerStopped:(AlivcPlayer *)player;

/**
 Finished
 
 @param player AlivcPlayer
 */
- (void)onAlivcPlayerFinished:(AlivcPlayer *)player;

/**
 Buffering Started
 
 @param player AlivcPlayer
 */
- (void)onAlivcPlayerBufferingStart:(AlivcPlayer *)player;

/**
 Buffering End
 
 @param player AlivcPlayer
 */
- (void)onAlivcPlayerBufferingEnd:(AlivcPlayer *)player;

/**
 Error

 @param player AlivcPlayer
 @param errorCode Code
 */
- (void)onAlivcPlayerError:(AlivcPlayer *)player errorCode:(NSInteger)errorCode;

@end
