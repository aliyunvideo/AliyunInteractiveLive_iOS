//
//  AlivcMessageCenter.h
//  AlivcMessageCenter
//
//  Created by wangxiaoxiang on 2018/3/30.
//  Copyright © 2018年 wangxiaoxiang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlivcChatMessageDelegate.h"
#import "AlivcMessageChannel.h"
#import "AlivcMessageCenterConfig.h"

#import "AlivcChatMessage.h"

@class AlivcChatMessageDelegate;

@protocol AlivcImStateDelegate <NSObject>

/**
 im连接状态回调

 */
- (void)imStateDidChange:(id)state;


@end

@interface AlivcMessageCenter : NSObject

/**
 注册IM状态回调
 */
@property (nonatomic, weak) id<AlivcImStateDelegate> imStateDelegate;


/**
 注册消息协议
 
 @param clazz 一个继承自AlivcChatConnection的class
 @param key 协议名称 比如：PM:// WS://
*/

+ (void)registerClass:(id)clazz key:(NSString *)key;

/**
 解除注册消息协议
 
 @param key 协议名称 比如：PM:// WS://
*/
+ (void)unregisterClass:(NSString *)key;

/**
 初始化，设置appId
 */
- (instancetype)initWithAppId:(NSString *)appId;

/**
 初始化，设置appId 等参数
 */
- (instancetype)initWithTokon:(NSString *)token client:(NSString *)clientId group:(NSString *)groupId appId:(NSString *)appId roomId:(NSString *)roomId;

/**
 设置发送消息的 topics
 */
- (void)setImTopics:(NSArray <NSString *> *)listenerTopics sendTopics:(NSArray <NSString *> *)sendTopics;

/**
 进入房间
 */
- (void)enter:(NSString *)roomId result:(void(^)(NSError *error))block;

/**
 退出房间
 */
- (void)leave:(NSString *)roomId result:(void(^)(NSError *error))block;

/**
 发送消息给指定用户
 */
- (void)sendMessageToUser:(AlivcChatMessage *)message result:(void(^)(NSError *error))block;

/**
 发送消息到指定房间
 */
- (void)sendMessageToRoom:(AlivcChatMessage *)message result:(void(^)(NSError *error))block;

/**
 发送消息到指定设备
 */
- (void)sendMessageToDevice:(AlivcChatMessage *)message result:(void(^)(NSError *error))block;


/**
 添加delegate
 @param messageDelegate 继承自AlivcChatMessageDelegate的类
 */
- (BOOL)addMessageDelegate:(AlivcChatMessageDelegate *)messageDelegate;


/**
 移除delegate
 @param messageDelegate 继承自AlivcChatMessageDelegate的类
 */
- (void)removeMessageDelegate:(AlivcChatMessageDelegate *)messageDelegate;

/**
 refresh the token
 
 @param token new token
 @return AlivcIMReturnCode
 */
- (int)refreshToken:(NSString *)token;


/**
 注册消息
 
 消息通道收到的是一个消息数组，如果使用这个方法注册，则不需要分发，直接将消息数组回调上去。
 可以和- (BOOL)addMessageDelegate:(AlivcChatMessageDelegate *)messageDelegate;选择性使用，
 也可以一起使用
 
 @param block 回调消息
 
 */
- (void)registerMessage:(void(^)(NSDictionary *message))block;


/*
//how to use
·
 //全局调用一遍即可
 [AlivcMessageCenter registerClass:[AlivcPMChatConnection class] key:@"PM://"];
 
 //初始化
 _MessageCenter = [[AlivcMessageCenter alloc] initWithAppId:@"100"];
 
 //设置要订阅的消息名称，创建一个待分发的代理类
 NSSet *names = [NSSet setWithObjects:@"10501", @"34567", @"34568", nil];
 AlivcBlockMessageDelegate* _messageHandler = [[AlivcBlockMessageDelegate alloc] initWithNames:names handler:^(AlivcChatMessageDelegate *messageDelegate, id message) {
 NSLog(@"reviceMessage");
 }];
 
 //添加分发代理
 [_MessageCenter addMessageDelegate:_messageHandler];
 
 //进入房间
 [_MessageCenter enter:@"1000003" result:^(NSError *error){
 
 }];
 
 [_MessageCenter sendMessageToUser:mesage result:^(NSError *error){
 
 }];
*/
@end

