//
//  AlivcIMManager.h
//  AlivcIM
//
//  Created by OjisanC on 2018/4/10.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlivcIMTypeDef.h"
#import "AlivcUtilsSDK.h"

@class AlivcIMManager;

@protocol AlivcIMManagerDelegate <NSObject>

@optional

/**
 IM connect success notify

 @param manager AlivcIMManager
 @param imHost imHost
 @param clientId clientId
 */
- (void)onNotifyConnectSuccess:(AlivcIMManager *)manager imHost:(NSString *)imHost clientId:(NSString *)clientId;

/**
 IM connect fail notify
 
 @param manager AlivcIMManager
 @param imHost imHost
 @param clientId clientId
 */
- (void)onNotifyConnectFail:(AlivcIMManager *)manager imHost:(NSString *)imHost clientId:(NSString *)clientId;

/**
 token upload success notify

 @param manager AlivcIMManager
 @param imToken imToken
 */
- (void)onNotifyUploadTokenSuccess:(AlivcIMManager *)manager imToken:(NSString *)imToken;

/**
 subscribe topic success

 @param manager AlivcIMManager
 */
- (void)onNotifySubscribeSuccess:(AlivcIMManager *)manager;

/**
 gets called when a new message was received
 
 @param topic the topic the msg was published to
 @param manager AlivcIMManager
 @param msg MQTTMessage message
 */
- (void)onNotifyMessageArrived:(AlivcIMManager *)manager topic:(NSString *)topic msg:(NSData *)msg;

/**
 gets called when token is out of date
 
 @param manager AlivcIMManager
 */
- (void)onNotifyTokenOutofDate:(AlivcIMManager *)manager;

/**
 gets called when token is illegal
 
 @param manager AlivcIMManager
 @param token the illgeal token
 */
- (void)onNotifyIllegalToken:(AlivcIMManager *)manager token:(NSString *)token;

/**
 gets called when subscribe topics error
 
 @param manager AlivcIMManager
 @param token token
 @param topics topics
 */
- (void)onSubscribeTopicError:(AlivcIMManager *)manager token:(NSString *)token topics:(NSArray <NSString *> *)topics;


/**
 gets called when the connection has been lost
 
 @param manager AlivcIMManager
 @param token token
 @param message message info
 */
- (void)onNotifyConnectionLost:(AlivcIMManager *)manager token:(NSString *)token message:(NSString *)message;

/**
 gets called when common error happened
 
 @param manager AlivcIMManager
 @param token token
 @param error error message
 */
- (void)onNotifyCommonError:(AlivcIMManager *)manager token:(NSString *)token error:(NSString *)error;

/**
 gets called when sending message failed
 
 @param manager AlivcIMManager
 @param error error message
 */
- (void)onNotifySendMessageFail:(AlivcIMManager *)manager error:(NSString *)error;

/**
 gets called when sending message success

 @param manager AlivcIMManager
 @param msgId message id
 */
- (void)onNotifySendMessageSuccess:(AlivcIMManager *)manager msgId:(int)msgId;

@end

@interface AlivcIMManager : NSObject

@property (weak, nonatomic) id<AlivcIMManagerDelegate> delegate;


/**
 Init

 @param token IM Token
 @param groupId Group ID
 @param clientId Client ID
 @return AlivcIMManager
 */
- (instancetype)initWithToken:(NSString *)token
                      groupId:(NSString *)groupId
                     clientId:(NSString *)clientId;


/**
 Set Listen Topics

 @param listenerTopics Listener Topics
 @return AlivcIMReturnCode
 */
- (int)setIMListenerTopics:(NSArray <NSString *> *)listenerTopics;

/**
 Refresh IM Token
 
 @param token new token
 @return AlivcIMReturnCode
 */
- (int)refreshToken:(NSString *)token;

/**
 Start Listen
 
 @return AlivcIMReturnCode
 */
- (int)startListen;

/**
 Reset
 
 @return AlivcIMReturnCode
 */
- (int)reset;

/**
 Stop Listen
 */
- (void)stopListen;

/**
 Send Message

 @param topic the
 @param priority message priority
 @param msgData message data
 @return value > 0 : message ID ; value < 0 : AlivcIMReturnCode
 */
- (int)sendMessage:(NSString *)topic priority:(AlivcMsgPriority)priority msgData:(NSData *)msgData;

/**
 Set IM Host
 */
+ (void)setIMHost:(NSString *)host;

@end


