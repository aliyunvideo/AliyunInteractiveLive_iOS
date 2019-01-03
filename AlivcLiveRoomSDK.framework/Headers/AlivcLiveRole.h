//
//  AlivcLiveRole.h
//  AlivcLiveRoom
//
//  Created by OjisanC on 2018/4/27.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 AlivcLiveRoleType
 
 - AlivcLiveRoleNone: AlivcLiveRoleNone
 - AlivcLiveRoleHost: AlivcLiveRoleHost
 - AlivcLiveRoleAudience: AlivcLiveRoleAudience
 */
typedef NS_ENUM(NSInteger,AlivcLiveRoleType) {
    AlivcLiveRoleNone = -1,
    AlivcLiveRoleHost = 0,
    AlivcLiveRoleAudience = 1,
} ;

@interface AlivcLiveRole : NSObject

/**
 type
 */
@property (nonatomic, assign) AlivcLiveRoleType type;

/**
 name
 */
@property (nonatomic, copy) NSString *name;

/**
 init

 @param type type
 @return instance
 */
- (instancetype)initWithType:(NSInteger)type;

/**
 init

 @param name name
 @return instance
 */
- (instancetype)initWithName:(NSString *)name;
@end
