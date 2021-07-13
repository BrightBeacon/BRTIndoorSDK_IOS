//
//  BRTLocalPoint.h
//  BRTMapProject
//
//  Created by thomasho on 2018/4/18.
//  Copyright © 2018年 o2o. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface BRTLocalPoint : NSObject

/**
 * 经纬度坐标
 */
@property (nonatomic, assign, readonly) CLLocationCoordinate2D coordinate;

/**
 *  web墨卡托投影，米坐标X
 */
@property (nonatomic, assign) double x;

/**
 *  web墨卡托投影，米坐标Y
 */
@property (nonatomic, assign) double y;

/**
 *  楼层号
 */
@property (nonatomic, assign) int floor;

/**
 *  位置点的经纬度实例化方法
 *
 *  @param coordinate 经纬度坐标
 *  @param f 位置点所在楼层
 *
 *  @return 位置点实例
 */
+ (BRTLocalPoint *)pointWithCoor:(CLLocationCoordinate2D)coordinate Floor:(int)f;

/**
 *  位置点的米坐标实例化方法
 *
 *  @param x web墨卡托投影，米坐标x
 *  @param y web墨卡托投影，米坐标y
 *  @param f 位置点所在楼层
 *
 *  @return 位置点实例
 */
+ (BRTLocalPoint *)pointWithX:(double)x Y:(double)y Floor:(int)f;

/**
 两点直线距离（由于XY坐标基于web墨卡托投影形变，随维度比实际距离放大）
 
 @param p 另一点
 @return 直线距离(平方和开方结果）
 */
- (double)distanceFromXY:(BRTLocalPoint *)p;

/**
 两点经纬度距离（计算地球表面实际距离）
 
 @param p 另一点
 @return 地球面距离
 */
- (double)distanceFromCoordinate:(BRTLocalPoint *)p;

@end

