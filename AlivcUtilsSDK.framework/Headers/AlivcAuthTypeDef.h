//
//  AlivcAuthTypeDef.h
//  AlivcAuth
//
//  Created by OjisanC on 2018/5/16.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#ifndef AlivcAuthTypeDef_h
#define AlivcAuthTypeDef_h

/**
 AlivcAuthReturnCode

 - AlivcAuthInvalidState: invalid state
 - AlivcAuthUnknownError: unknown error
 - AlivcAuthInvalidParam: invalid param
 - AlivcAuthFailed: failed
 - AlivcAuthSuccess: success
 */
typedef NS_ENUM(NSInteger, AlivcAuthReturnCode) {
    
    AlivcAuthInvalidState = -4,
    AlivcAuthUnknownError = -3,
    AlivcAuthInvalidParam = -2,
    AlivcAuthFailed = -1,
    AlivcAuthSuccess = 0,
};


#endif /* AlivcAuthTypeDef_h */
