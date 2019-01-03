//
//  AlivcMessageInfo.h
//  AlivcInteractiveLiveRoomSDK
//
//  Created by OjisanC on 2018/5/28.
//

#import <Foundation/Foundation.h>

@interface AlivcMessageInfo : NSObject

- (instancetype)initWithDict:(NSDictionary *)dict;

@property (nonatomic, copy) NSString *userId;

@property (nonatomic, copy) NSString *userData;

@property (nonatomic, copy) NSString *content;

@end
