//
//  AlivcInteractiveLiveRoomAuthDelegate.h
//  AlivcLiveRoomSDK
//
//  Created by Charming04 on 2018/5/21.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AlivcInteractiveLiveRoomAuthDelegate <NSObject>

@required

/**
 sts will expire

 @param accessKey accessKey
 @param secretKey secretKey
 @param expireTime expireTime
 @param token token
 @param time time
 */
- (void)onStsWillBeExpireSoonWithAccessKey:(NSString *)accessKey
                                 secretKey:(NSString *)secretKey
                                expireTime:(NSString *)expireTime
                                     token:(NSString *)token
                                 afterTime:(NSUInteger)time;

/**
 sts expired

 @param accessKey accessKey
 @param secretKey secretKey
 @param expireTime expireTime
 @param token token
 */
- (void)onStsExpiredWithAccessKey:(NSString *)accessKey
                        secretKey:(NSString *)secretKey
                       expireTime:(NSString *)expireTime
                            token:(NSString *)token;

@end
