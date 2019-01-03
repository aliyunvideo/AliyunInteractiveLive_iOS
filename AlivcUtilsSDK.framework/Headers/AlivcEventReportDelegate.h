//
//  AlivcEventReportDelegate.h
//  AlivcEventReport
//
//  Created by OjisanC on 2018/5/20.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AlivcEventReport;

@protocol AlivcEventReportDelegate <NSObject>

@optional


- (void)onAlivcEventReportStsKeyRequestError:(AlivcEventReport *)eventReport errorDetail:(NSString *)errorDetail;

/**
 event report error notify

 @param eventReport AlivcEventReport
 @param params event params
 @param errorCode error code
 */
- (void)onAlivcEventReportError:(AlivcEventReport *)eventReport params:(NSDictionary *)params errorCode:(NSUInteger)errorCode;

@end
