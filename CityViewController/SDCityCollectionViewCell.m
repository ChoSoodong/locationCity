







#import "SDCityCollectionViewCell.h"
#import "SDCityConfig.h"

@interface SDCityCollectionViewCell ()

@property (nonatomic, strong) UILabel *label;

@end

@implementation SDCityCollectionViewCell

- (instancetype)initWithFrame:(CGRect)frame {
    if (self = [super initWithFrame:frame]) {
        UILabel *label = [[UILabel alloc] initWithFrame:self.bounds];
        label.backgroundColor = [UIColor whiteColor];
        label.textColor = [UIColor grayColor];
        label.textAlignment = NSTextAlignmentCenter;
        label.font = [UIFont systemFontOfSize:14];
        [self addSubview:label];
        self.label = label;
    }
    return self;    
}

/// 设置collectionView cell的border
- (void)layoutSubviews {
    [super layoutSubviews];
    self.layer.cornerRadius = 5;
    self.layer.borderWidth = 0.5;
    self.layer.borderColor = RGBAColor(155, 155, 165, 0.5).CGColor;
    self.layer.masksToBounds = YES;
}

- (void)setTitle:(NSString *)title {
    self.label.text = title;
}

@end
