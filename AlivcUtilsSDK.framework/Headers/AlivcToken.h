//
//  AlivcToken.h
//  AlivcAuth
//
//  Created by OjisanC on 2018/5/16.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AlivcToken : NSObject

/**
 Expire Time
 */
@property (nonatomic, copy) NSString *expireTime;

/**
 Token
 */
@property (nonatomic, copy) NSString *securityToken;

@end
