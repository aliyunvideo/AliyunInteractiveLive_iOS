//
//  AlivcPushInfo.h
//  AlivcLiveRoomSDK
//
//  Created by Charming04 on 2018/5/20.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AlivcPushInfo : NSObject

/**
 requestId
 */
@property(nonatomic, copy) NSString *requestId;
/**
 rtmp
 */
@property(nonatomic, copy) NSString *rtmp;
/**
 expireTime
 */
@property(nonatomic, copy) NSString *expireTime;

/**
 init

 @param dic data
 @return instance
 */
- (instancetype)initWithDic:(NSDictionary *)dic;

@end
