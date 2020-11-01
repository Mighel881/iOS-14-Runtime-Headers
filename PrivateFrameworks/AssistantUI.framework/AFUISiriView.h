/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriView : UIView <AFUIPasscodeContainerViewDelegate, AFUISiriContent, SiriUISiriStatusViewDelegate> {
    UILabel * _assistantVersionLabel;
    SiriUIVisualEffectView * _assistantVersionVisualEffectView;
    SiriUIAudioRoutePickerButton * _audioRoutePickerButton;
    _UIBackdropView * _backdropView;
    bool  _backdropViewVisible;
    _UIBackdropView * _backgroundBlurView;
    SiriUIConfiguration * _configuration;
    <AFUISiriViewDataSource> * _dataSource;
    <AFUISiriViewDelegate> * _delegate;
    UIView * _dimmingAndLockContainer;
    bool  _disabled;
    SiriUIVisualEffectView * _eyesFreeEffectView;
    UIImageView * _eyesFreeLogoView;
    bool  _flamesViewDeferred;
    bool  _flamesViewPaused;
    UIView * _foregroundContainerView;
    UIView * _foregroundView;
    SiriUIHelpButton * _helpButton;
    bool  _helpButtonDeferred;
    bool  _inFluidDismissal;
    bool  _inHideUnlockViewAnimation;
    bool  _inShowUnlockViewAnimation;
    bool  _keepStatusViewHidden;
    AFUIPasscodeContainerView * _lockContainerView;
    bool  _lockViewHidden;
    long long  _mode;
    UIView * _remoteContentView;
    bool  _remoteContentViewHidden;
    SiriUIContentButton * _reportBugButton;
    bool  _safeAreaInsetsSuspended;
    long long  _siriSessionState;
    UIView<SiriUISiriStatusViewProtocol> * _siriStatusView;
    UIView * _statusViewContainer;
    double  _statusViewHeight;
    bool  _statusViewHidden;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _suspendedSafeAreaInsets;
    UIView * _voiceActivationMaskView;
}

@property (nonatomic, readonly) _UIBackdropView *backgroundBlurView;
@property (nonatomic) <AFUISiriViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUISiriViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disabled;
@property (nonatomic, readonly) UIView *foregroundContainerView;
@property (nonatomic, readonly) UIView *foregroundView;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode;
@property (nonatomic, retain) UIView *remoteContentView;
@property (nonatomic) long long siriSessionState;
@property (nonatomic, readonly) double statusViewHeight;
@property (readonly) Class superclass;

+ (void)_animateView:(id)arg1 fromYPosition:(double)arg2 toYPosition:(double)arg3 fade:(long long)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)_animateButtonsHidden:(bool)arg1;
- (void)_animateLockViewIsAnimatingIn:(bool)arg1 completion:(id /* block */)arg2;
- (void)_audioRouteButtonTapped:(id)arg1;
- (double)_buttonInset;
- (void)_configureEyesFreeLogo;
- (void)_configureHelpButton;
- (void)_configureReportBugButtonWithHoldToTalkState:(bool)arg1;
- (void)_createAssistantVersionLabelIfNecessary;
- (void)_createReportBugButtonWithTemplateImage:(id)arg1 andConfigureWithHoldToTalkState:(bool)arg2;
- (void)_destroyAssistantVersionLabelIfNecessary;
- (bool)_helpButtonIsVisible;
- (void)_helpButtonTapped:(id)arg1;
- (bool)_isTextInputEnabled;
- (void)_layoutReportBugButton;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lockViewFrame;
- (void)_placeRemoteContentView;
- (void)_preferencesDidChange:(id)arg1;
- (bool)_reducesMotionEffects;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_remoteContentViewFrame;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (void)_setSafeAreaInsetsSuspended:(bool)arg1;
- (void)_setupButtonsIfNecessary;
- (void)_setupContentViews;
- (void)_setupVoiceActivationMaskView;
- (bool)_shouldIndicateHoldToTalkMode;
- (bool)_showsReportBugButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_statusViewContainerFrame;
- (void)_updateControlsAppearance;
- (void)_updateSiriStatusViewForMode:(long long)arg1;
- (bool)_wantsBackdropView:(long long)arg1;
- (float)audioLevelForSiriStatusView:(id)arg1;
- (id)backgroundBlurView;
- (void)cancelShowingPasscodeUnlock;
- (void)configureReportBugButtonToShowHoldToTalkState:(bool)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)dimBackdropSettings;
- (bool)disabled;
- (void)fadeOutCurrentAura;
- (bool)flamesViewPaused;
- (id)foregroundContainerView;
- (id)foregroundView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2;
- (void)layoutSubviews;
- (long long)mode;
- (void)passcodeView:(id)arg1 animateShowPasscodeWithCompletionHandler:(id /* block */)arg2;
- (bool)passcodeView:(id)arg1 attemptUnlockWithPassword:(id)arg2;
- (void)passcodeView:(id)arg1 hideLockViewWithResult:(long long)arg2 unlockCompletionHandler:(id /* block */)arg3;
- (void)pulseHelpButton;
- (void)reloadData;
- (id)remoteContentView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)safeAreaInsetsDidChange;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsForSiriStatusView:(id)arg1;
- (void)setAudioRoutePickerBluetoothOn:(bool)arg1;
- (void)setBackdropShouldRasterize:(bool)arg1;
- (void)setBackdropVisible:(bool)arg1;
- (void)setBugReportingAvailable:(bool)arg1;
- (void)setContentViewsAlpha:(double)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setFlamesViewDeferred:(bool)arg1;
- (void)setFlamesViewPaused:(bool)arg1;
- (void)setHelpButtonDeferred:(bool)arg1;
- (void)setHelpButtonEmphasized:(bool)arg1;
- (void)setInFluidDismissal:(bool)arg1;
- (void)setInUITrackingMode:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setRemoteContentView:(id)arg1;
- (void)setShowAudioRoutePicker:(bool)arg1;
- (void)setSiriSessionState:(long long)arg1;
- (void)setStatusViewHidden:(bool)arg1;
- (void)setStatusViewUserInteractionEnabled:(bool)arg1;
- (void)setVoiceActivationMaskViewVisible:(bool)arg1;
- (void)setupOrbIfNeeded;
- (void)showPasscodeUnlockWithStatusText:(id)arg1 subtitle:(id)arg2 completionHandler:(id /* block */)arg3 unlockCompletionHandler:(id /* block */)arg4;
- (void)siriDidActivateFromSource:(long long)arg1;
- (long long)siriSessionState;
- (void)siriStatusViewHoldDidBegin:(id)arg1;
- (void)siriStatusViewHoldDidEnd:(id)arg1;
- (void)siriStatusViewWasTapped:(id)arg1;
- (double)statusViewHeight;
- (void)teardownStatusView;
- (void)updateForPercentageRevealed:(double)arg1;

@end