//
//  AlivcEventReport.h
//  AlivcEventReport
//
//  Created by OjisanC on 2018/5/18.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AlivcEventReportConfig;
@protocol AlivcEventReportDelegate;

@interface AlivcEventReport : NSObject

@property (weak, nonatomic) id<AlivcEventReportDelegate> delegate;

/**
 init

 @param config AlivcEventReportConfig
 @return AlivcEventReport
 */
- (instancetype)initWithConfig:(AlivcEventReportConfig *)config;
    
/**
 setSessionId
 
 @param sessionId sessionId
 */
- (void)setSessionId:(NSString *)sessionId;

/**
 send event

 @param params params
 @return 0:success others:failed
 */
- (int)sendEvent:(NSDictionary *)params;


@end
