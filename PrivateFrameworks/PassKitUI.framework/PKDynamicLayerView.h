/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDynamicLayerView : UIView {
    bool  _automaticallyLoadContent;
    PKDynamicContentView * _backgroundParallaxView;
    CALayer * _dimmingLayer;
    PKDynamicLayerConfiguration * _dynamicLayerConfiguration;
    PKDynamicContentView * _foregroundParallaxView;
    bool  _invalidated;
    bool  _loaded;
    PKDynamicContentView * _neutralView;
    PKPass * _pass;
    bool  _paused;
    bool  _reduceMotionEnabled;
    UIImageView * _staticFallbackView;
    PKDynamicContentView * _staticOverlayView;
    PKDynamicLayerTransactionEffectConfiguration * _transactionEffectConfiguration;
    UIImage * _transactionEffectEmitterImage;
    CAEmitterLayer * _transactionEffectLayer;
    NSData * _transactionEffectShapeData;
}

@property (nonatomic) bool automaticallyLoadContent;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (getter=isPaused, nonatomic) bool paused;
@property (getter=isReduceMotionEnabled, nonatomic) bool reduceMotionEnabled;

- (void).cxx_destruct;
- (void)_addParallaxMotionEffect;
- (void)_configureDynamicViewsWithImageSet:(id)arg1;
- (void)_configureViews;
- (id)_dimmingLayerAnimationWithDuration:(double)arg1;
- (void)_removeParallaxMotionEffect;
- (void)_updateDynamicElements;
- (void)_updateVisibility;
- (bool)automaticallyLoadContent;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pass:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pass:(id)arg2 automaticallyLoadContent:(bool)arg3;
- (void)invalidate;
- (bool)isLoaded;
- (bool)isPaused;
- (bool)isReduceMotionEnabled;
- (void)layoutSubviews;
- (void)loadContent;
- (void)runTransactionEffect;
- (void)setAutomaticallyLoadContent:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setReduceMotionEnabled:(bool)arg1;

@end
