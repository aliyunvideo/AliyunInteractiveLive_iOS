//
//  AlivcErrorCode.h
//  AlivcLiveRoomSDK
//
//  Created by OjisanC on 2018/5/19.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


/**
 SDK 错误模块定义

 */
typedef NS_ENUM(NSInteger,AlivcErrorModule) {
    
    ALIVC_ERROR_MODULE_PLAYER =  -2001,
    ALIVC_ERROR_MODULE_PUSHER =  -2002,
    ALIVC_ERROR_MODULE_RTC =  -2003,
    ALIVC_ERROR_MODULE_IM  = -2004,
    ALIVC_ERROR_MODULE_ROOM =  -2005,
};

/**
 SDK 错误码定义

 */
typedef NS_ENUM(NSInteger,AlivcErrorCode) {
    
    ALIVC_ERROR_INVALID_STATE                       = -4 ,
    ALIVC_ERROR_INVALID_PARAM                       = -3 ,    
    ALIVC_ERROR_UNKNOWN                             = -2 ,
    ALIVC_ERROR_RETURN_FAILED                       = -1 ,
    ALIVC_RETURN_SUCCESS                            = 0,
    
    ALIVC_ERROR_ROOM_NOT_AUTHORIZED_ENTER_ROOM       = 2001, //不允许进入房间
    ALIVC_ERROR_ROOM_FORBID_PUSH_STREAM              = 2002, //主播被禁止直播
    
    ALIVC_ERROR_INVALID_ENV_HOST                     = 3001,

    ALIVC_ERROR_AUTH_EXPIRED                          = 4002,
    ALIVC_ERROR_INVALID_INPUTFILE                     = 4003,
    ALIVC_ERROR_NO_INPUTFILE                          = 4004,
    ALIVC_ERROR_READ_DATA_FAILED                      = 4005,
    ALIVC_ERROR_LOADING_TIMEOUT                       = 4008,
    ALIVC_ERROR_REQUEST_DATA_ERROR                    = 4009,
    ALIVC_ERROR_VIDEO_FORMAT_UNSUPORTED               = 4011,
    ALIVC_ERROR_PLAYAUTH_PARSE_FAILED                 = 4012,
    ALIVC_ERROR_DECODE_FAILED                         = 4013,
    ALIVC_ERROR_NO_SUPPORT_CODEC                      = 4019,
    ALIVC_ERROR_UNKNOWN_ERROR                         = 4400,
    ALIVC_ERROR_REQUEST_ERROR                         = 4500,
    ALIVC_ERROR_DATA_ERROR                            = 4501,
    ALIVC_ERROR_QEQUEST_SAAS_SERVER_ERROR             = 4502,
    ALIVC_ERROR_QEQUEST_MTS_SERVER_ERROR              = 4503,
    ALIVC_ERROR_SERVER_INVALID_PARAM                  = 4504,
    ALIVC_ERROR_ILLEGALSTATUS                         = 4521,
    ALIVC_ERROR_NO_VIEW                               = 4022,
    ALIVC_ERROR_NO_MEMORY                             = 4023,
    
    ALIVC_ERROR_DOWNLOAD_NO_NETWORK                   = 4101,
    ALIVC_ERROR_DOWNLOAD_NETWORK_TIMEOUT              = 4102,
    ALIVC_ERROR_DOWNLOAD_QEQUEST_SAAS_SERVER_ERROR    = 4103,
    ALIVC_ERROR_DOWNLOAD_QEQUEST_MTS_SERVER_ERROR     = 4104,
    ALIVC_ERROR_DOWNLOAD_SERVER_INVALID_PARAM         = 4105,
    ALIVC_ERROR_DOWNLOAD_INVALID_INPUTFILE            = 4106,
    ALIVC_ERROR_DOWNLOAD_NO_ENCRYPT_FILE              = 4107,
    ALIVC_ERROR_DONWNLOAD_GET_KEY                     = 4108,
    ALIVC_ERROR_DOWNLOAD_INVALID_URL                  = 4109,
    ALIVC_ERROR_DONWLOAD_NO_SPACE                     = 4110,
    ALIVC_ERROR_DOWNLOAD_INVALID_SAVE_PATH            = 4111,
    ALIVC_ERROR_DOWNLOAD_NO_PERMISSION                = 4112,
    ALIVC_ERROR_DOWNLOAD_MODE_CHANGED                 = 4113,
    ALIVC_ERROR_DOWNLOAD_ALREADY_ADDED                = 4114,
    ALIVC_ERROR_DOWNLOAD_NO_MATCH                     = 4115,
    
    ALIVC_ERROR_PUSHER_CONNECT_FAIL                    = 5010,
    ALIVC_ERROR_PUSHER_SEND_DATA_TIMEOUT               = 5011,
    ALIVC_ERROR_PUSHER_RECONNECT_FAIL                  = 5012,
    ALIVC_ERROR_PUSHER_AUTH_EXPIRED                    = 5013,
    
    ALIVC_ERROR_ROOM_IM_TOKEN_REQUEST_ERROR             = 6001,
    ALIVC_ERROR_IM_CONNECT_FAIL                         = 6002,
    ALIVC_ERROR_IM_TOKEN_OUT_OF_DATE                    = 6003,
    ALIVC_ERROR_IM_TOKEN_ILLEGAL                        = 6004,
    ALIVC_ERROR_IM_SUBSCRIBE_TOPIC                      = 6005,
    ALIVC_ERROR_IM_CONNECT_LOST                         = 6006,
    ALIVC_ERROR_IM_INVALID_CHAT_MESSAGE_LEN             = 6007,

} ;

