/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSTestAutomationService : SBSAbstractSystemService

- (id)acquireHUDHiddenAssertionForIdentifier:(id)arg1;
- (void)addWidgetWithIdentifier:(id)arg1 toPage:(int)arg2 withSizing:(int)arg3;
- (void)addWidgetsToEachPage;
- (void)countScenesForBundleIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)loadStashedSwitcherModelFromPath:(id)arg1;
- (void)resetToHomeScreenAnimated:(bool)arg1;
- (void)setAlertsEnabled:(bool)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1 blockedForScreenTime:(bool)arg2;
- (void)setHiddenFeaturesEnabled:(bool)arg1;
- (void)setIdleTimerEnabled:(bool)arg1;
- (void)setMallocStackLoggingEnabled:(bool)arg1;
- (void)setOrientationLockEnabled:(bool)arg1;
- (void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1;
- (void)stashSwitcherModelToPath:(id)arg1;
- (void)suspendAllDisplays;

@end
