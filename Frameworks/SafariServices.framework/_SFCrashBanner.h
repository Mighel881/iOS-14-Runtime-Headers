/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFCrashBanner : UIView {
    UIVisualEffectView * _backdrop;
    NSString * _bannerText;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedLabelLayoutSize;
    UIButton * _closeButton;
    UIVisualEffectView * _contentEffectView;
    UILabel * _label;
    NSString * _manuallyWrappedBannerText;
    UIView * _separator;
    _SFBarTheme * _theme;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, readonly) NSString *bannerText;
@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, readonly) NSString *manuallyWrappedBannerText;
@property (nonatomic, retain) _SFBarTheme *theme;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_labelLayoutSizeForWidth:(double)arg1;
- (void)_layoutCloseButton;
- (bool)_shouldUseManuallyWrappedCrashMessageForWidth:(double)arg1;
- (id)backdropGroupName;
- (id)bannerText;
- (id)closeButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)manuallyWrappedBannerText;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBannerText:(id)arg1 manuallyWrappedBannerText:(id)arg2;
- (void)setCloseButton:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)theme;
- (unsigned long long)type;

@end
