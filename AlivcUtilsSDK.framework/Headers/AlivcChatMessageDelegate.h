//
//  AlivcMessageDelegate.h
//
//  Created by wangxiaoxiang on 2018/3/30.
//  Copyright © 2018年 wangxiaoxiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AlivcChatMessageDelegate : NSObject

@property (nonatomic, copy, readonly) NSSet<NSString *> *names;

- (instancetype)initWithNames:(NSSet *)names;


- (void)didReceiveMessage:(NSDictionary *)message;

@end


typedef void(^AlivcBlockMessageDelegateHandler)(AlivcChatMessageDelegate *messageDelegate,NSDictionary *message);

@interface AlivcBlockMessageDelegate : AlivcChatMessageDelegate

/**
 初始化消息delegate
 
 @param names 消息类型集合
 @param handler 消息回调
 */
- (instancetype)initWithNames:(NSSet *)names
                            handler:(AlivcBlockMessageDelegateHandler)handler;

@property (nonatomic, copy, readonly) AlivcBlockMessageDelegateHandler handler;

@end
