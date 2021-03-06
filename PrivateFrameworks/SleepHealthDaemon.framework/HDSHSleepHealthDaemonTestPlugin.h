/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
 */

@interface HDSHSleepHealthDaemonTestPlugin : HDSHSleepHealthDaemonPlugin {
    HDSHProfileExtension * _mainExtension;
    HDSHSleepOnboardingTestStore * _sleepStore;
}

@property (nonatomic, retain) NSDate *currentDate;
@property (nonatomic) bool springBoardGreetingDisabled;

- (void).cxx_destruct;
- (id)_availabilityStoreForFeature:(id)arg1;
- (id)currentDate;
- (id)extensionForProfile:(id)arg1;
- (id)init;
- (void)notifyForOnboardingVersionChangeForFeature:(id)arg1;
- (id)onboardingCompletedDateForFeature:(id)arg1;
- (long long)onboardingCompletedVersionForFeature:(id)arg1;
- (void)setCurrentDate:(id)arg1;
- (void)setSpringBoardGreetingDisabled:(bool)arg1;
- (bool)springBoardGreetingDisabled;

@end
