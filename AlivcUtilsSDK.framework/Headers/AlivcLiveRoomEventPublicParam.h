//
//  AlivcLiveRoomEventPublicParam.h
//  AlivcInteractiveLiveRoomSDK
//
//  Created by OjisanC on 2018/6/2.
//

#import <Foundation/Foundation.h>

@interface AlivcLiveRoomEventPublicParam : NSObject
/*所需设定参数*/
@property (nonatomic, copy) NSString *logStore;//日志文件目录.
@property (nonatomic, copy) NSString *time;    //客户端时间
@property (nonatomic, copy) NSString *logLevel;//默认AliyunEventDebug
@property (nonatomic, copy) NSString *product; //默认 @""
@property (nonatomic, copy) NSString *module;  //默认 @""
@property (nonatomic, copy) NSString *subModule; //默认 @""
@property (nonatomic, copy) NSString *businessID; //阿里云aliuid账号，若没有阿里云账号，可以填空，如&bi=&; 默认 @""
@property (nonatomic, copy) NSString *videoType;    //默认 @""
@property (nonatomic, copy) NSString *appVersion; // 播放器（player）或推流器（publisher）的版本号。默认@”1.0.0“
@property (nonatomic, copy) NSString *videoUrl ; //推流或播放url，默认 @""
@property (nonatomic, copy) NSString *userAgent; //默认 @""
@property (nonatomic, copy) NSString *cdnIP;//播放器下载数据／推流端上传数据cdn的IP地址,不能获得则设为0.0.0.0(例如Flash和H5播放器)
@property (nonatomic, copy) NSString *referer;//来源网站和链接信息
@property (nonatomic, copy) NSString *roomId;//房间Id
@property (nonatomic, copy) NSString *userId;//用户Id
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, copy) NSString *role; //直播间用户角色
/*默认参数*/
@property (nonatomic, copy) NSString *logVersion;
@property (nonatomic, copy) NSString *hostName;
@property (nonatomic, copy) NSString *terminalType;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSString *operationSystem;
@property (nonatomic, copy) NSString *osVersion;
@property (nonatomic, copy) NSString *connection;
@property (nonatomic, copy) NSString *applicatonID;
@property (nonatomic, copy) NSString *applicationName;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic, copy) NSString *brand;
@property (nonatomic, copy) NSString *manufactor;
@property (nonatomic, copy) NSString *traceID;

- (void)updateClientTime; //更新客户端时间
- (void)refreshRequestID;  //刷新requestId
- (void)setRequestId:(NSString *)requestId;
- (NSDictionary *)publicParamArgs;
/*************************/


@end
