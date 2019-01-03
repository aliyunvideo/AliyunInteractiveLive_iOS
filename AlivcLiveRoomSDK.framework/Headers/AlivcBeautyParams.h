//
//  AlivcBeautyParams.h
//  AlivcLiveRoomSDK
//
//  Created by OjisanC on 2018/5/17.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 AlivcBeautyParamsLevel

 - AlivcBeautyParamsLevel0: Level0
 - AlivcBeautyParamsLevel1: Level1
 - AlivcBeautyParamsLevel2: Level2
 - AlivcBeautyParamsLevel3: Level3
 - AlivcBeautyParamsLevel4: Level4
 - AlivcBeautyParamsLevel5: Level5
 */
typedef NS_ENUM(NSInteger,AlivcBeautyParamsLevel) {
    AlivcBeautyParamsLevel0 = 0,
    AlivcBeautyParamsLevel1,
    AlivcBeautyParamsLevel2,
    AlivcBeautyParamsLevel3,
    AlivcBeautyParamsLevel4,
    AlivcBeautyParamsLevel5
};

@interface AlivcBeautyParams : NSObject

/**
 white
 
 default : 70
 value range : [0,100]
 */
@property (nonatomic, assign) int beautyWhite;

/**
 buffing
 
 default : 40
 value range : [0,100]
 */
@property (nonatomic, assign) int beautyBuffing;

/**
 ruddy
 
 default : 70
 value range : [0,100]
 */
@property (nonatomic, assign) int beautyRuddy;

/**
 pink
 
 default : 15
 value range : [0,100]
 */
@property (nonatomic, assign) int beautyCheekPink;

/**
 slim face
 
 default : 40
 value range : [0,100]
 */
@property (nonatomic, assign) int beautySlimFace;

/**
 shorten face
 
 default : 50
 value range : [0,100]
 */
@property (nonatomic, assign) int beautyShortenFace;

/**
 big eye
 
 default : 30
 value range : [0,100]
 */

@property (nonatomic, assign) int beautyBigEye;

/**
 init

 @return AlivcBeautyParams
 */
- (instancetype)init;

/**
 default beauty params

 @param level AlivcBeautyParamsLevel
 @return AlivcBeautyParams
 */
+ (AlivcBeautyParams *)defaultBeautyParamsWithLevel:(AlivcBeautyParamsLevel)level;

/**
 default beauty AlivcBeautyParamsLevel

 @return AlivcBeautyParamsLevel
 */
+ (AlivcBeautyParamsLevel)defaultBeautyLevel;

@end
