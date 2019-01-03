//
//  AlivcLiveRoomEventUtils.h
//  AlivcInteractiveLiveRoomSDK
//
//  Created by OjisanC on 2018/6/2.
//

#import <Foundation/Foundation.h>

@interface AlivcLiveRoomEventUtils : NSObject

//urlEncode
+ (NSString*)urlEncode:(NSString*)url;
//ip地址
+ (NSDictionary *)getIPAddresses;
//ipv4
+ (NSDictionary *)getIPAddress:(BOOL)preferIPv4;
//uuid
+ (NSString*) generateUUID;
//device id
+ (NSString *)getDeviceId;
//device model
+ (NSString*)getDeviceModel;
//system version
+ (NSString*)getSystemVersion;
//system name
+ (NSString *)systemName;

//iphone / ipad
+ (NSString*)getTerminalType;
//当前时间 毫秒数
+ (NSString*)getTimeStamp;

+ (NSString *)deviceNetwrok;

+ (NSString*)getlogVersion;

+ (NSString *)bundleId;

+ (NSString *)deviceUUID;

+ (NSString*)deviceModel;

+ (NSString *)systemVersion;

+ (NSString *)terminalType;

+ (NSString *)appDisplayName;

+ (NSString*)getDeviceBrand;

+ (NSString*)getDeviceManufactor;

@end
