# BRTMap3D_IOS_SDK_Release

#### 项目介绍
BRTMap3D_IOS_SDK

#### 使用说明

创建或打开XCode新项目

## 1、项目设置
* 再搜索Other Linker Flags->设置：<code>-ObjC -lc++ -lgeos -framework BRTMapSDK -framework BRTMapData -framework BRTLocationEngine</code>
 
## 2、引入geos目录下geos.xcodeproj项目（也可以先编译成libgeos.a库，配置Paths方式引用）
* 项目引用需配置Build Phases->Target Dependencies->+geos
* 再配置Link Binary With Libraries引入libgeos.a
<br />*使用xcodeproj项目方式引入，磁盘占用小，方便调试git提交但编译慢；使用libgeos.a编译速度快。

## 3、拖动引入地图定位库（或配指向路径）
* BRTMapData.framework库：[BRTMapData.framework](BRTMapDemo/BRTMapData.framework)
* 集成地图需要： [BRTMapSDK.framework](BRTMapDemo/BRTMapSDK.framework)
* 集成定位需要：[BRTLocationEngine.framework](BRTMapDemo/BRTLocationEngine.framework)
* ps:如出现头文件无法找到，请检查Framework Search Paths是否包含以上库路径

## 4、IOS8/IOS10以上需配置定位权限描述字符串
* 打开Info.plist添加使用期间“WhenInUse”定位描述说明：NSLocationWhenInUseUsageDescription，（填写描述如：用于室内地图导航）
* 若应用需要使用后台及使用期间定位权限“Always”(含“WhenInUse”)，需添加3项以支持不同IOS版本：NSLocationAlwaysAndWhenInUseUsageDescription、NSLocationAlwaysUsageDescription和NSLocationWhenInUseUsageDescription

#### 更新日志

***
3.1.9
修复：地图图标机型自适配
新增：BRTPoi: 新增所在大区信息（zoneID和zoneName），新增大区层级zoneLayer

***
3.1.8
修复：BRTPoi: buildingID和floorID
优化：getPoiOnCurrentFloorWithPoiID无需传人layer
新增：symbol图标解析，ICON_NAME，LEVEL_MIN，LEVEL_MAX解析

***
3.1.6
修复：经过的路线在其他楼层出现
优化：数据几何结构
新增：shade层，可用于展示大区信息等

***
3.1.5
修复：部分离线路线规划失败闪退

***
3.1.4
新增：地图、定位数据离线化支持

***
3.1.3
新增：离线路网增加多层级规划

***
3.1.2
修复：离线路网内存优化

***
3.1.1
修复：离线路网偶然截取闪退

***
3.1.0
修复：修复路网总距离计算

***
3.0.9
修复：离线路网算法更新

***
3.0.8
修复：新增设施选中

***
3.0.7
修复：路网颜色，设置地图加载8s超时，定位方向开关验证

***
3.0.6
新增：多功能在线导航，详见示例：RouteVC

***
3.0.5
修复：修正离线路网hint,修正distanceToRouteEnd

***
3.0.4
新增：
1、mapview释放labellayer和facilitylayer方便配置
2、本地化labellayer设置
修复：修正hints闪退

***
3.0.3
修复：闪退，mapload和floor顺序

***
3.0.2
新增：地图智能本地化，图文混排，独立搜索API
修复：路径规划泄漏

***
3.0.1
新增：BRTPoi新增labelPoint
修复：加载逻辑，路网优化

***
3.0.0

版本发布


#### 智石科技

* [智石官网](http://www.brtbeacon.com)
* [帮助文档](http://help.brtbeacon.com)
* [社区提问](http://bbs.brtbeacon.com)

#### 商务合作、地图绘制咨询[4000-999-023](tel:4000999023)
