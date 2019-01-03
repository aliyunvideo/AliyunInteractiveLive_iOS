//
//  NSString+AlivcNetSDK.h
//  AlivcNet
//
//  Created by OjisanC on 2018/6/51.
//  Copyright © 2018年 SMY. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface NSString (AlivcNetSDK)
/*
 * 功能 ： 检查字符串是否是nil/null，返回判断后的字符串
 * 参数 : inputString : 输入字符串
 * return : 返回判断后的字符串
 */
+ (NSString *)alivcNet_checkString:(NSString *)inputString;
+ (BOOL)alivcNet_checkStringIsEmpty:(NSString *)inputString;

/*
 * 功能 ： MD5
 * 参数 : inputString : 输入字符串
 * return : 返回MD5后的字符串
 */
+ (NSString *)alivcNet_MD5:(NSString *) inputString;

/*
 * 功能 ： 编码
 * 参数 : inputString : 输入字符串
 * return : 返回编码后的字符串
 */
+ (NSString *)alivcNet_encodeToPercentEscapeString: (NSString *) inputString;

/*
 * 功能 ： 解码
 * 参数 : inputString : 输入字符串
 * return : 返回解码后的字符串
 */
+ (NSString *)alivcNet_decodeFromPercentEscapeString: (NSString *) inputString;

/*
 * 功能 : 获取UUID
 * return : 返回UUID的字符串
 */
+ (NSString*)alivcNet_generateUUID;

/*
 * 功能 : 获取UTC时间
 * return : 返回UTC时间的字符串
 */
+ (NSString *)alivcNet_getDateUTCTime;


@end
