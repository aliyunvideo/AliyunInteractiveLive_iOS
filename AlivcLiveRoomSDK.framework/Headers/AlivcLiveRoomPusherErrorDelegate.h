//
//  AlivcLiveRoomPusherErrorDelegate.h
//  AlivcLiveRoomSDK
//
//  Created by OjisanC on 2018/5/18.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AlivcLiveRoomPusherErrorDelegate <NSObject>

@optional
/**
 push error

 @param errorCode Code
 @param errorDetail errorDetail
 */
- (void)onAlivcPusherErrorCode:(NSInteger)errorCode errorDetail:(NSString *)errorDetail;

@end
