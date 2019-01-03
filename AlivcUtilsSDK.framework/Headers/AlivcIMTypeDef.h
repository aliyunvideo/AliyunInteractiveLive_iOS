//
//  AlivcIMTypeDef.h
//  AlivcIM
//
//  Created by OjisanC on 2018/4/10.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#ifndef AlivcIMTypeDef_h
#define AlivcIMTypeDef_h

typedef NS_ENUM(NSInteger, AlivcIMReturnCode) {

    AlivcIMInvalidState = -4,
    AlivcIMUnknownError = -3,
    AlivcIMInvalidParam = -2,
    AlivcIMFailed = -1,
    AlivcIMSuccess = 0,
};

/**
 AlivcMsgPriority
 
 - AlivcMsgPriorityLow: low priority
 - AlivcMsgPriorityNormal: normal priority
 - AlivcMsgPriorityHigh: high proiority
 */
typedef NS_ENUM(NSInteger,AlivcMsgPriority) {
    AlivcMsgPriorityLow = 0,
    AlivcMsgPriorityNormal = 1,
    AlivcMsgPriorityHigh = 2,
};



#endif /* AlivcIMTypeDef_h */
