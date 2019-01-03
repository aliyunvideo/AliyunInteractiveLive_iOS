//
//  AlivcAuthConfig.h
//  AlivcAuth
//
//  Created by OjisanC on 2018/5/16.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AlivcAuthConfig : NSObject

// 设置token过期之前多少毫秒触发通知，默认60000毫秒
@property (nonatomic, assign)NSUInteger notifyIntervalBeforeExpired;

@end
