//
//  AlivcChatMessage.h
//  AlivcAdapters
//
//  Created by will on 2018/4/27.
//

#import <Foundation/Foundation.h>

/**
 AlivcChatMsgPriority
 
 - AlivcChatMsgPriorityLow: low priority
 - AlivcChatMsgPriorityNormal: normal priority
 - AlivcChatMsgPriorityHigh: high proiority
 */
typedef NS_ENUM(NSInteger,AlivcChatMsgPriority) {
    AlivcChatMsgPriorityLow = 0,
    AlivcChatMsgPriorityNormal = 1,
    AlivcChatMsgPriorityHigh = 2,
};

/**
 AlivcChatMsgType
 
 - AlivcChatMsgCustom: custom defined msg
 - AlivcChatMsgGift: gift msg
 - AlivcChatMsgChat: chat msg
 - AlivcChatMsgLike: like msg
 - AlivcChatMsgSystem: system msg
 */
typedef NS_ENUM(NSInteger,AlivcChatMsgType) {
    AlivcChatMsgTypeCustom = 0,
    AlivcChatMsgTypeGift = 1,
    AlivcChatMsgTypeChat = 2,
    AlivcChatMsgTypeLike = 3,
    AlivcChatMsgTypeSystem = 4,
};

@interface AlivcChatMessage : NSObject

@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *toRoomId;     //下发到的用户所在房间ID
@property (nonatomic, copy) NSString *msgType;      //消息类型（"p2p&" + 业务中的消息名称）
@property (nonatomic, copy) NSString *data;         //消息内容
@property (nonatomic, copy) NSString *userId;       //当前用户ID

- (NSMutableDictionary *)toDictionary;

@end

@interface AlivcChatUserMessage : AlivcChatMessage

@property (nonatomic, copy) NSString *toUserId;     //下发到的用户ID

@end

@interface AlivcChatRoomMessage : AlivcChatMessage

@property (nonatomic, assign) NSInteger qos;          //消息丢弃级别（不传或传错默认为高丢弃级别） 非必选

@end

@interface AlivcChatDeviceMessage : AlivcChatMessage

@property (nonatomic, copy) NSString *toDeviceId;   //设备Id utdid， 临时
@property (nonatomic, copy) NSString *appKey;       //要发送设备的appKey

@end

@interface AlivcMQTTChatMessage : AlivcChatMessage

@property (nonatomic, copy) NSString *toUserId;     //下发到的用户ID
@property (copy, nonatomic) NSString *event;        //MQTT msg 的
@property (nonatomic, assign) AlivcChatMsgType type;
@property (nonatomic, assign) AlivcChatMsgPriority priority;
@property (nonatomic, copy) NSString *messageName;

@end
