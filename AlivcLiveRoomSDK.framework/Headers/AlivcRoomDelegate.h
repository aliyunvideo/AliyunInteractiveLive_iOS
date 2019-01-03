//
//  AlivcRoomDelegate.h
//  AlivcInteractiveLiveRoomSDK
//
//  Created by Charming04 on 2018/5/27.
//

#import <Foundation/Foundation.h>

@class AlivcRoom;
@protocol AlivcRoomDelegate <NSObject>

@optional

/**
 room error

 @param room AlivcRoom
 @param errorCode Code
 @param errorDetail errorDetail
 */
- (void)onAlivcRoom:(AlivcRoom *)room errorCode:(NSInteger)errorCode errorDetail:(NSString *)errorDetail;

@end
