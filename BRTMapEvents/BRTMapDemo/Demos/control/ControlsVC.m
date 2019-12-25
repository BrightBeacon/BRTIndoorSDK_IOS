//
//  ControlNorthVC.m
//  mapdemo
//
//  Created by thomasho on 2017/7/31.
//  Copyright © 2017年 thomasho. All rights reserved.
//

#import "ControlsVC.h"

@interface ControlsVC ()

@end

@implementation ControlsVC

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.mapView.showsScale = YES;
    self.mapView.compassView.hidden = NO;
//    self.mapView.compassView.center = CGPointMake(80, 80);
}
@end
