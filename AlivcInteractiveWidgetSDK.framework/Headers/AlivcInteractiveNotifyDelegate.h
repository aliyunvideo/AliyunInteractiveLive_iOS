//
//  AlivcInteractiveNotifyDelegate.h
//  AlivcInteractiveLiveRoomSDK
//
//  Created by jiangsongwen on 2018/5/23.
//

#import <Foundation/Foundation.h>
#import "AlivcInteractiveWidget.h"

@class AlivcInteractiveWidget;
@protocol AlivcInteractiveNotifyDelegate <NSObject>
@optional

/**
 * notify chat message userData base64!!!!!
 */
- (void)onAlivcInteractiveChatMsg:(AlivcInteractiveWidget *)widget userId:(NSString *)userId content:(NSString *)content userData:(NSString *)userData;

/**
 * notify like count
 */
- (void)onAlivcInteractiveLikeMsg:(AlivcInteractiveWidget *)widget count:(NSInteger )likeCount;
@end
