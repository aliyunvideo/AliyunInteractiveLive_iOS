//
//  AlivcMqttMessageChannel.h
//  AlivcChatKit
//
//  Created by will on 2018/5/16.
//  Copyright © 2018年 will. All rights reserved.
//

#import "AlivcMessageChannel.h"

@interface AlivcMqttMessageChannel : AlivcMessageChannel

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

/**
 reset
 
 @return AlivcIMReturnCode
 */
- (int)reset;


@end
