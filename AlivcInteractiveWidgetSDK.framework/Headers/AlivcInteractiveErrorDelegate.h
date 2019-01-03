//
//  AlivcInteractiveErrorDelegate.h
//  AlivcInteractiveLiveRoomSDK
//
//  Created by OjisanC on 2018/5/26.
//
#import <Foundation/Foundation.h>

@protocol AlivcInteractiveErrorDelegate <NSObject>

@optional
/**
 interactive error

 @param errorCode Code
 @param errorDetail errorDetail
 */
- (void)onAlivcInteractiveErrorCode:(NSInteger)errorCode errorDetail:(NSString *)errorDetail;

@end
