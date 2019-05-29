







#import <UIKit/UIKit.h>

@protocol SDSearchViewDelegate <NSObject>

- (void)searchResults:(NSDictionary *)dic;
- (void)touchViewToExit;
@end

@interface SDSearchView : UIView

/** 搜索结果*/
@property (nonatomic, strong) NSMutableArray *resultMutableArray;
@property (nonatomic, weak) id<SDSearchViewDelegate> delegate;
@end
