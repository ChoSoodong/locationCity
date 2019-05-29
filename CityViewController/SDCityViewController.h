//
//  JFCityViewController.h
//  JFFootball
//
//  Created by 张志峰 on 2016/11/21.
//  Copyright © 2016年 zhifenx. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SDCityViewControllerDelegate <NSObject>

- (void)cityName:(NSString *)name;

@end

@interface SDCityViewController : UIViewController

@property (nonatomic, weak) id<SDCityViewControllerDelegate> delegate;
@end
