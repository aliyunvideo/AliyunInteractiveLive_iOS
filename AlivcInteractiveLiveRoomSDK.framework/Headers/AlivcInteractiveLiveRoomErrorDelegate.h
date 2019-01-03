//
//  AlivcInteractiveLiveRoomErrorDelegate.h
//  AlivcInteractiveLiveRoomSDK
//
//  Created by OjisanC on 2018/6/2.
//

#import <Foundation/Foundation.h>

@class AlivcLiveError;

@protocol AlivcInteractiveLiveRoomErrorDelegate <NSObject>

@optional

- (void)onAlivcInteractiveLiveRoomError:(AlivcLiveError *)error;

@end
