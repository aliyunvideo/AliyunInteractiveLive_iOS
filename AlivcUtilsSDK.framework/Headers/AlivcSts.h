//
//  AlivcSts.h
//  AlivcAuth
//
//  Created by OjisanC on 2018/5/8.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AlivcSts : NSObject

/**
 Access Key
 */
@property (nonatomic, copy) NSString *accessKey;

/**
 Secret Key
 */
@property (nonatomic, copy) NSString *secretKey;

/**
 Expire Time
 */
@property (nonatomic, copy) NSString *expireTime;

/**
 Token
 */
@property (nonatomic, copy) NSString *securityToken;

@end

