//
//  AlivcNetManager.h
//  AlivcNet
//
//  Created by OjisanC on 2018/5/14.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AlivcNetManager;

typedef NS_ENUM(NSInteger, AlivcNetRequestMethod) {
    AlivcNetRequestMethodGet = 0,//get请求
    AlivcNetRequestMethodPost ,  //post请求
};


@protocol AlivcNetManagerDelegate <NSObject>

@optional

@end

@interface AlivcNetManager : NSObject

@property (nonatomic, weak) id<AlivcNetManagerDelegate> delegate;


/**
 initWithStsAccessKey

 @param accessKey access key
 @param secretKey secret key
 @param expireTime expire time
 @param token token
 @return AlivcNetManager
 */
- (instancetype)initWithStsAccessKey:(NSString *)accessKey secretKey:(NSString *)secretKey expireTime:(NSString *)expireTime token:(NSString *)token;


/**
 refreshStsAccessKey

 @param accessKey access key
 @param secretKey secret key
 @param expireTime expire time
 @param token token
 */
- (void)refreshStsAccessKey:(NSString *)accessKey secretKey:(NSString *)secretKey expireTime:(NSString *)expireTime token:(NSString *)token;

/**
 HTTP Get Request

 @param requestParams request params
 @param completionHandler completion handler
 @return YES,NO
 */
- (BOOL)httpRequestGetWithParams:(NSDictionary *)requestParams completionHandler:(void (^)(NSData *data, NSURLResponse *response, NSError *error))completionHandler;

/**
 HTTP Post Request
 
 @param requestParams request params
 @param completionHandler completion handler
 @return YES,NO
 */
- (BOOL)httpRequestPostWithParams:(NSDictionary *)requestParams completionHandler:(void (^)(NSData *data, NSURLResponse *response, NSError *error))completionHandler;

/**
 http request

 @param host host
 @param params params
 @param method AlivcNetRequestMethod
 @param isSync isSync
 @param completionHandler completionHandler
 @return YES:success NO:fail
 */
- (BOOL)httpRequest:(NSString *)host
             params:(NSDictionary *)params
             method:(AlivcNetRequestMethod)method
             isSync:(BOOL)isSync
  completionHandler:(void (^)(NSData *data, NSURLResponse *response, NSError *error))completionHandler;


/**
 Set Host
 */
+ (void)setHost:(NSString *)host isDaily:(BOOL)isDaily;


@end
