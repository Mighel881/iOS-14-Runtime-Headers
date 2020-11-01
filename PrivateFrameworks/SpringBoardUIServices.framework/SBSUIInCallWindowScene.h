/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIInCallWindowScene : UIWindowScene {
    bool  _callConnected;
    bool  _idleTimerDisabled;
    unsigned long long  _preferredHardwareButtonEventTypes;
    int  _preferredStatusBarStyleOverridesToSuppress;
    long long  _presentationMode;
    bool  _shouldBecomeVisibleWhenWakingDisplay;
    bool  _supportsDeviceLockEvents;
}

@property (getter=isCallConnected, nonatomic) bool callConnected;
@property (getter=isIdleTimerDisabled, nonatomic) bool idleTimerDisabled;
@property (nonatomic) unsigned long long preferredHardwareButtonEventTypes;
@property (nonatomic) int preferredStatusBarStyleOverridesToSuppress;
@property (nonatomic, readonly) long long presentationMode;
@property (nonatomic) bool shouldBecomeVisibleWhenWakingDisplay;
@property (nonatomic) bool supportsDeviceLockEvents;

- (void)_handleDeviceLockAction:(id)arg1;
- (void)_handleFrameChanged;
- (void)_handleHardwareButtonEventSceneActions:(id)arg1;
- (void)_updatePresentationMode:(long long)arg1 analyticsSource:(id)arg2;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;
- (bool)isCallConnected;
- (bool)isIdleTimerDisabled;
- (unsigned long long)preferredHardwareButtonEventTypes;
- (int)preferredStatusBarStyleOverridesToSuppress;
- (long long)presentationMode;
- (void)requestTransitionToPresentationMode:(long long)arg1;
- (void)requestTransitionToPresentationMode:(long long)arg1 isUserInitiated:(bool)arg2;
- (void)requestTransitionToPresentationMode:(long long)arg1 isUserInitiated:(bool)arg2 analyticsSource:(id)arg3;
- (void)setCallConnected:(bool)arg1;
- (void)setIdleTimerDisabled:(bool)arg1;
- (void)setPreferredHardwareButtonEventTypes:(unsigned long long)arg1;
- (void)setPreferredStatusBarStyleOverridesToSuppress:(int)arg1;
- (void)setShouldBecomeVisibleWhenWakingDisplay:(bool)arg1;
- (void)setSupportsDeviceLockEvents:(bool)arg1;
- (bool)shouldBecomeVisibleWhenWakingDisplay;
- (bool)supportsDeviceLockEvents;

@end