/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRichComplicationProgressView : UIView <CLKMonochromeComplicationView, CLKMonochromeFilterProvider> {
    NTKRichComplicationShapeView * _backgroundView;
    float  _currentBackgroundViewAlphaPercentage;
    CLKDevice * _device;
    bool  _enabled;
    long long  _family;
    <CLKMonochromeFilterProvider> * _filterProvider;
    NTKRichComplicationShapeView * _foregroundView;
    CLKGaugeProvider * _gaugeProvider;
    NSArray * _gradientColors;
    double  _progress;
    UIView * _ringView;
    long long  _style;
    NSNumber * _updateToken;
}

@property (nonatomic, readonly) NTKRichComplicationShapeView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (nonatomic, readonly) NTKRichComplicationShapeView *foregroundView;
@property (nonatomic, retain) CLKGaugeProvider *gaugeProvider;
@property (nonatomic, retain) NSArray *gradientColors;
@property (readonly) unsigned long long hash;
@property (nonatomic) double progress;
@property (nonatomic, readonly) UIView *ringView;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_adjustBackgroundViewAlphaWithPercentage:(float)arg1;
- (void)_applyStyle;
- (void)_createRingView;
- (void)_updateUIFromGaugeProvider;
- (void)animateToProgress:(float)arg1 duration:(double)arg2;
- (id)backgroundView;
- (id)colorForView:(id)arg1 accented:(bool)arg2;
- (void)dealloc;
- (bool)enabled;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)filterProvider;
- (id)foregroundView;
- (id)gaugeProvider;
- (id)gradientColors;
- (id)initForFamily:(long long)arg1 device:(id)arg2 backgroundShapeView:(id)arg3 foregroundShapeView:(id)arg4;
- (void)layoutSubviews;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 locations:(id)arg2;
- (double)progress;
- (id)ringView;
- (void)setEnabled:(bool)arg1;
- (void)setFilterProvider:(id)arg1;
- (void)setGaugeProvider:(id)arg1;
- (void)setGradientColors:(id)arg1;
- (void)setGradientColors:(id)arg1 locations:(id)arg2;
- (void)setProgress:(double)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
