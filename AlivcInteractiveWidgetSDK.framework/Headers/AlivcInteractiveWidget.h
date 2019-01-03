//
//  AlivcInteractiveWidget.h
//  AlivcInteractiveWidgetSDK
//
//  Created by jiangsongwen on 2018/5/19.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlivcInteractiveWidgetConfig.h"
#import "AlivcInteractiveNotifyDelegate.h"
#import "AlivcInteractiveErrorDelegate.h"

#if __has_include(<AlivcUtilsSDK/AlivcUtilsSDK.h>)
#import <AlivcUtilsSDK/AlivcUtilsSDK.h>
#else
#import "AlivcUtilsSDK.h"
#endif

/**
 AlivcInteractiveForbidChatType

 - AlivcInteractiveForbidChatTypeForever: Forever
 - AlivcInteractiveForbidChatTypeEndTime: EndTime
 */
typedef NS_ENUM(NSInteger, AlivcInteractiveForbidChatType){
    AlivcInteractiveForbidChatTypeForever = 1,
    AlivcInteractiveForbidChatTypeEndTime = 2,
};


/**
 AlivcMessagePriority
 
 - AlivcMessagePriorityLow: low priority
 - AlivcMessagePriorityNormal: normal priority
 - AlivcMessagePriorityHigh: high proiority
 */
typedef NS_ENUM(NSInteger,AlivcMessagePriority) {
    AlivcMessagePriorityLow = 0,
    AlivcMessagePriorityNormal = 1,
    AlivcMessagePriorityHigh = 2,
};


@interface AlivcInteractiveWidgetStatistics : NSObject

/**
 总点赞数
 */
@property(nonatomic, assign) int totalLikeCount;

/**
 总消息数
 */
@property(nonatomic, assign) int totalChatCount;

@end


@class AlivcMessageInfo, AlivcForbidChatUserInfo;


@interface AlivcInteractiveWidget : NSObject

@property(nonatomic, strong) AlivcInteractiveWidgetStatistics* widgetStatistics;


NS_ASSUME_NONNULL_BEGIN
#pragma mark - Initializer


/**
 UNAVAILABLE_ATTRIBUTE
 @return instance
 */
- (nullable instancetype)init UNAVAILABLE_ATTRIBUTE;
/**
 UNAVAILABLE_ATTRIBUTE

 @return instance
 */
+ (nullable instancetype)new UNAVAILABLE_ATTRIBUTE;

/**
 init

 @param appId app id
 @param interactiveConfig AlivcInteractiveWidgetConfig
 @return AlivcInteractiveWidget
 */
- (nullable instancetype)initWithAppId:(NSString *)appId config:(AlivcInteractiveWidgetConfig*)interactiveConfig NS_DESIGNATED_INITIALIZER;

/**
 login

 @param sts AlivcSts
 */
- (void)login:(AlivcSts *)sts;

/**
 logout
 */
- (void)logout;

/**
 refresh sts

 @param sts AlivcSts
 */
- (void)refreshSts:(AlivcSts *)sts;

/**
 set message center

 @param messageCenter AlivcMessageCenter
 */
- (void)setMessageCenter:(AlivcMessageCenter *)messageCenter;


/**
 设置房间信息、用户信息

 @param roomId 房间ID
 @param userId 用户ID
 */
- (void)setRoomId:(NSString *)roomId userId:(NSString *)userId;


/**
 set notify delegate

 @param delegate AlivcInteractiveNotifyDelegate
 */
- (void)setNotifyDelegate:(id<AlivcInteractiveNotifyDelegate>)delegate;

/**
 set error delegate

 @param delegate AlivcInteractiveErrorDelegate
 */
- (void)setErrorDelegate:(id<AlivcInteractiveErrorDelegate>)delegate;

/**
 send chat message

 @param content message content
 @param roomId room id
 @param appUid user id
 @param userData user data
 @param completion completion
 */
- (void)sendChatMessage:(NSString *)content
                 roomId:(NSString *)roomId
                 appUid:(NSString *)appUid
               userData:(NSString *)userData
             completion:(void (^)(AlivcLiveError *error))completion;

/**
 get history chat message

 @param roomId room id
 @param completion completion
 */
- (void)getHistoryChatMessage:(NSString *)roomId
               completion:(void (^)(AlivcLiveError *error, NSArray <AlivcMessageInfo *> *messageList))completion;

/**
 send like message

 @param roomId room id
 @param count like count
 @param completion completion
 */
- (void)sendLike:(NSString *)roomId
           count:(NSInteger )count
      completion:(void (^)(AlivcLiveError *error))completion;

/**
 get like count

 @param roomId room id
 @param completion completion
 */
- (void)getLikeCount:(NSString *)roomId
         completion:(void (^)(AlivcLiveError *error, NSUInteger count))completion;


/**
 forbid chat

 @param roomId room id
 @param appUid app user id
 @param forbidAppUid user id to be forbidden
 @param type AlivcInteractiveForbidChatType
 @param duration duration
 @param completion completion
 */
- (void)forbidChat:(NSString *)roomId
            appUid:(NSString *)appUid
      forbidAppUid:(NSString *)forbidAppUid
              type:(AlivcInteractiveForbidChatType)type
           duration:(NSUInteger)duration
        completion:(void (^)(AlivcLiveError *error))completion;

/**
 allow chat

 @param roomId room id
 @param appUid app user id
 @param forbidAppUid user id to be forbidden
 @param completion completion
 */
- (void)allowChat:(NSString *)roomId
           appUid:(NSString *)appUid
     forbidAppUid:(NSString *)forbidAppUid
       completion:(void (^)(AlivcLiveError *error))completion;

/**
 get forbid chat user list

 @param roomId room id
 @param pageNum page number
 @param pageSize page size
 @param completion completion
 */
- (void)getForbidChatUserList:(NSString *)roomId
                      pageNum:(NSUInteger)pageNum
                     pageSize:(NSUInteger)pageSize
               completion:(void (^)(AlivcLiveError *error, NSArray <AlivcForbidChatUserInfo *> *forbidChatUserList))completion;


NS_ASSUME_NONNULL_END
@end

