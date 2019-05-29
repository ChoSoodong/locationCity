







#import "SDCityCollectionFlowLayout.h"

@implementation SDCityCollectionFlowLayout

/// 准备布局
- (void)prepareLayout {
    [super prepareLayout];
    //设置item尺寸
    CGFloat itemW = (self.collectionView.frame.size.width - 60)/ 3;
    self.itemSize = CGSizeMake(itemW, 40);
    
    //设置最小间距
    self.minimumLineSpacing = 10;
    self.minimumInteritemSpacing = 10;
    self.sectionInset = UIEdgeInsetsMake(0, 10, 0, 20);
}

@end
