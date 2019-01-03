//
//  AlivcAuthManager.h
//  AlivcAuth
//
//  Created by OjisanC on 2018/5/16.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlivcAuthConfig.h"
#import "AlivcSts.h"
#import "AlivcToken.h"
#import "AlivcKey.h"
#import "AlivcAuthTypeDef.h"

@class AlivcAuthManager;

@protocol AlivcAuthManagerDelegate <NSObject>

@optional

/**
 STS about to expire notify

 @param authManager AlivcAuthManager
 @param sts AlivcSts
 @param time ms
 */
- (void)onStsAboutToExpire:(AlivcAuthManager *)authManager sts:(AlivcSts *)sts afterTime:(NSUInteger)time;

/**
 STS expired notify

 @param authManager AlivcAuthManager
 @param sts AlivcSts
 */
- (void)onStsExpired:(AlivcAuthManager *)authManager sts:(AlivcSts *)sts;

/**
 Token about to expire notify
 
 @param authManager AlivcAuthManager
 @param token AlivcToken
 @param time ms
 */
- (void)onTokenAboutToExpire:(AlivcAuthManager *)authManager token:(AlivcToken *)token afterTime:(NSUInteger)time;

/**
 Token expired notify
 
 @param authManager AlivcAuthManager
 @param token AlivcToken
 */
- (void)onTokenExpired:(AlivcAuthManager *)authManager token:(AlivcToken *)token;


@end

@interface AlivcAuthManager : NSObject

/**
 sharedInstance
 
 @return AlivcAuthManager
 */
+ (instancetype)sharedInstance;


/**
 AlivcAuthManagerDelegate
 */
@property (nonatomic, weak) id<AlivcAuthManagerDelegate> delegate;


/**
 Subscribe STS

 @param sts AlivcSts
 @param authConfig AlivcAuthConfig
 @return AlivcAuthReturnCode
 */
- (int)subscribeSts:(AlivcSts *)sts authConfig:(AlivcAuthConfig *)authConfig;

/**
 Subscribe token

 @param token AlivcToken
 @param authConfig AlivcAuthConfig
 @return AlivcAuthReturnCode
 */
- (int)subscribeToken:(AlivcToken *)token authConfig:(AlivcAuthConfig *)authConfig;

/**
 Subscribe key

 @param key AlivcKey
 @return AlivcAuthReturnCode
 */
- (int)subscribeKey:(AlivcKey *)key;

/**
 Unsubscribe STS

 @param sts AlivcSts
 @return AlivcAuthReturnCode
 */
- (int)unSubscribeSts:(AlivcSts *)sts;

/**
 Unsubscribe Key

 @param key AlivcKey
 @return AlivcAuthReturnCode
 */
- (int)unSubscribeKey:(AlivcKey *)key;

/**
 Unsubscribe Token

 @param token AlivcToken
 @return AlivcAuthReturnCode
 */
- (int)unSubscribeToken:(AlivcToken *)token;

/**
 Destory

 */
- (void)destory;


@end
