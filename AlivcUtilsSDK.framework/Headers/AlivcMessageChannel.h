//
//  AlivcMessageChannel.h
//  AlivcChatKit
//
//  Created by will on 2018/4/4.
//  Copyright © 2018年 wangxiaoxiang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlivcMessageCenterConfig.h"
#import "AlivcChatMessage.h"

@protocol AlivcMessageChannelProtocol;

@interface AlivcMessageChannel : NSObject

@property (nonatomic, weak) id<AlivcMessageChannelProtocol> delegate;

/**
 初始化协议和参数
 
 @param protocol 协议名 比如：PM:// WS://
 @param ext 协议中的扩展配置 如：topic，token等
 */
- (instancetype)initWithProtocol:(id)protocol ext:(AlivcMessageCenterConfigExt *)ext;

/**
 设置协议和参数
 
 @param protocol 协议名 比如：PM:// WS://
 @param ext 协议中的扩展配置 如：topic，token等
 */
- (void)setProtocol:(id)protocol ext:(AlivcMessageCenterConfigExt *)ext;

/**
 连接消息
 
 */
- (void)connect:(void(^)(NSDictionary *ret))success
          error:(void(^)(NSDictionary *ret))error;

/**
 断开消息
 
 */
- (void)disConnect;

/**
 发送消息
 
 @param message 消息字典
 @param success 成功block
 @param error 失败block
 */
- (void)sendMessage:(NSDictionary *)message success:(void(^)(NSDictionary *ret))success
                                              error:(void(^)(NSDictionary *ret))error;

/**
 发送消息
 
 @param message 消息对象
 @param block 返回结果

 */
- (void)sendMessage:(AlivcChatMessage *)message result:(void(^)(NSError *error))block;

/**
 send broadcast msg
 
 @param msgObject message object
 @param msgInfo message info
 @return AlivcIMReturnCode
 */
- (int)sendBroadcastMessage:(id)msgObject info:(id)msgInfo ;

/**
 send p2p message
 
 @param userId user id
 @param msgObject message object
 @param msgInfo message info
 @return AlivcIMReturnCode
 */
- (int)sendPeerToPeerMessage:(int)userId
                        type:(id)msgObject
                        info:(id)msgInfo;

/**
 set IM topics of listener
 
 @param listenerTopics listener topics
 @param sendTopics send topics
 @return AlivcIMReturnCode
 */
- (int)setIMListenerTopics:(NSArray <NSString *> *)listenerTopics sendTopics:(NSArray <NSString *> *)sendTopics;

/**
 refresh the token
 
 @param token new token
 @return AlivcIMReturnCode
 */
- (int)refreshToken:(NSString *)token;
///**
// 发送消息给指定用户
// */
//- (void)sendMessageToUser:(AlivcChatUserMessage *)message result:(void(^)(NSError *error))block;
//
///**
// 发送消息到指定房间
// */
//- (void)sendMessageToRoom:(AlivcChatRoomMessage *)message result:(void(^)(NSError *error))block;

/**
 获取消息连接状态
 
 */
- (NSInteger)state;

@end

@protocol AlivcMessageChannelProtocol <NSObject>

/**
 消息连接状态回调
 
 */
- (void)stateDidChange:(id)state;

/**
 收到消息回调
 
 @param message 消息字典
 */
- (void)didReviceMessage:(id)message;

@end
