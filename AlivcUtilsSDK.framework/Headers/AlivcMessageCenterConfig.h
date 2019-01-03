//
//  AlivcMessageCenterConfig.h
//  AlivcChatKit
//
//  Created by will on 2018/4/4.
//  Copyright © 2018年 wangxiaoxiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AlivcMessageCenterConfigExt : NSObject

@property (nonatomic, copy) NSString *topic;               //PowerMessage的topic id
@property (nonatomic, copy) NSString *token;               //WebSocket中的token

@property (nonatomic, copy) NSString *groupId;
@property (nonatomic, copy) NSString *clientId;

- (instancetype)initWithDic:(NSDictionary *)dic;

@end

@interface AlivcMessageCenterConfig : NSObject

@property (nonatomic, strong) id identifier;                   //唯一标示
@property (nonatomic, copy) NSString * protocol;             //使用的消息协议，如：PM:// WS://
@property (nonatomic, strong) AlivcMessageCenterConfigExt *ext;      //扩展配置项

- (instancetype)initWithDic:(NSDictionary *)dic;

@end
