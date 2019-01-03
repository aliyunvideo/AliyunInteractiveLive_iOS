//
//  AlivcForbidChatUserInfo.h
//  AlivcInteractiveLiveRoomSDK
//
//  Created by OjisanC on 2018/5/28.
//

#import <Foundation/Foundation.h>

@interface AlivcForbidChatUserInfo : NSObject


- (instancetype)initWithDict:(NSDictionary *)dict;

@property (nonatomic, copy)NSString *appId;
@property (nonatomic, copy)NSString *forbidAppUid;
@property (nonatomic, copy)NSString *roomId;
@property (nonatomic, copy)NSString *type;
@property (nonatomic, copy)NSString *userId;
@property (nonatomic, copy)NSString *startTime;
@property (nonatomic, copy)NSString *endTime;

@end

