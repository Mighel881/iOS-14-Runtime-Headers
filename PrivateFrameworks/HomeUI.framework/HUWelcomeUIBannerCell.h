/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWelcomeUIBannerCell : HUBannerCell {
    UIImageView * _backgroundImageView;
    HUGridStatusBannerCellLayoutOptions * _layoutOptions;
    HUGridWelcomeUIBannerCellLayoutOptions * _welcomeUIBannerLayoutOptions;
}

@property (nonatomic, retain) UIImageView *backgroundImageView;
@property (nonatomic, retain) HUGridWelcomeUIBannerCellLayoutOptions *welcomeUIBannerLayoutOptions;

- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)layoutOptions;
- (void)layoutOptionsDidChange;
- (void)setBackgroundColor;
- (void)setBackgroundImageView:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setWelcomeUIBannerLayoutOptions:(id)arg1;
- (void)setupCustomCellAppearence;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;
- (id)welcomeUIBannerLayoutOptions;

@end
