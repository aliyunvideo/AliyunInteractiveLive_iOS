//
//  AlivcLiveHttp.h
//  ALPlayerSDK
//
//  Created by SMY on 16/7/4.
//  Copyright © 2016年 SMY. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ALIVC_LOG_ALIVCNET @"AlivcNet"

typedef NS_ENUM(NSInteger, ALiyunRequestStyle) {
    ALiyunRequestStyleAsync = 1,//异步请求
    ALiyunRequestStyleSync ,    //同步请求
};

@interface AlivcLiveHttp : NSObject
/**
 *网络请求
 *url :请求地址
 *completionHandler : 请求数据
 */
+ (BOOL)getDataWithUrl:(NSString *)url completionHandler:(void (^)(NSData * data, NSURLResponse * response, NSError * error))completionHandler;

#pragma mark - download
+ (BOOL)getDataWithUrlForDownload:(NSString*)url completionHandler:(void (^)(NSData * data, NSURLResponse * response, NSError * error))completionHandler;



/**
 *时间 : 2018-03-05
 *功能 : 网络请求
 *status : 同步/异步
  requestUrl : 请求地址
 *completionHandler : 请求数据
 */
+ (BOOL)baseRequestGetWithStatus:(ALiyunRequestStyle)status requestUrl : (NSString *)requestUrl completionHandler:(void (^)(NSData * data, NSURLResponse * response, NSError * error))completionHandler;

/**
 *设置日常
 */
+ (void)setDaily:(BOOL)isDaily;


@end
