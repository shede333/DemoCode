//
//  LZBMKMapViewDelegate.h
//  BaiduMapSW
//
//  Created by shaowei on 13-1-4.
//  Copyright (c) 2013年 苏州知惠馆信息系统有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "BMapKit.h"

@interface LZBMKMapViewDelegate : NSObject<BMKMapViewDelegate>{
    BMKAnnotationView *selectedAV;
}

@end
