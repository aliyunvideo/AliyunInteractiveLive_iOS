//
//  AlivcEventReportConfig.h
//  AlivcEventReport
//
//  Created by OjisanC on 2018/5/18.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AlivcEventReportConfig : NSObject

/**
 host address
 */
@property (nonatomic, copy)NSString *host;

/**
 project name
 */
@property (nonatomic, copy)NSString *projectName;

/**
 log store name
 */
@property (nonatomic, copy)NSString *logStore;

/**
 uuid
 */
@property (nonatomic, copy)NSString *uuid;

/**
 log print enable
 */
@property (nonatomic, assign)BOOL enableLog;


@end
