







#import <UIKit/UIKit.h>

@protocol SDCityHeaderViewDelegate <NSObject>

- (void)cityNameWithSelected:(BOOL)selected;
- (void)beginSearch;
- (void)endSearch;
- (void)searchResult:(NSString *)result;
@end

@interface SDCityHeaderView : UIView

@property (nonatomic, copy) NSString *cityName;
@property (nonatomic, strong) NSString *buttonTitle;
@property (nonatomic, weak) id<SDCityHeaderViewDelegate> delegate;

/// 取消搜索
- (void)cancelSearch;
@end
