//
//  AlivcLiveTime.h
//  AlivcInteractiveLiveRoomSDK
//
//  Created by OjisanC on 2018/6/11.
//

#import <Foundation/Foundation.h>

@interface AlivcLiveTime : NSObject

/**
 create
 */
+ (void)createInstance ;

/**
 destory
 */
+ (void)destoryInstance ;

/**
 utctime

 @return NSUInteger
 */
+ (NSUInteger)getUTCTime;

/**
 currentUTC + s

 @param duration s
 @return NSString
 */
+ (NSString *)getUTCTime:(NSUInteger)duration;

/**
 NSData

 @param utc <#utc description#>
 @return <#return value description#>
 */
+ (NSDate *)getUTCTimeFromString:(NSString *)utc;

@end
