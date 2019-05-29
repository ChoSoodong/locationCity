







#ifndef SDCitySelectHeader_h
#define SDCitySelectHeader_h

#define IS_IPAD           (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
//判断iPHoneX
#define IS_IPHONE_X ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )812 ) < DBL_EPSILON )
//判断iPHoneXr
#define IS_IPHONE_Xr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !IS_IPAD : NO)
//判断iPhoneXs
#define IS_IPHONE_Xs ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !IS_IPAD : NO)
//判断iPhoneXs Max
#define IS_IPHONE_Xs_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !IS_IPAD : NO)
//判断全面屏
#define IS_IPHONE_X_ALL (IS_IPHONE_X || IS_IPHONE_Xr || IS_IPHONE_Xs || IS_IPHONE_Xs_Max)

// 状态栏高度
#define STATUS_BAR_HEIGHT [UIApplication sharedApplication].statusBarFrame.size.height

// 导航栏高度
#define NAVIGATION_BAR_HEIGHT 44.0f
#define NAVIGATION_HEIGHT (NAVIGATION_BAR_HEIGHT + STATUS_BAR_HEIGHT)


// 底部安全高度
#define BOTTOM_BAR_HEIGHT        (IS_IPHONE_X_ALL ? 34.0 : 0)

#define RGBAColor(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(r)/255.0 blue:(r)/255.0 alpha:a]

// 屏幕宽度
#define Kscreen_width [UIScreen mainScreen].bounds.size.width
// 屏幕高度
#define Kscreen_height [UIScreen mainScreen].bounds.size.height

// 搜索栏高度
#define KSearchHeight 40
// 头部高度
#define KHeaderViewHeight 80

#endif /* SDCitySelectHeader_h */
