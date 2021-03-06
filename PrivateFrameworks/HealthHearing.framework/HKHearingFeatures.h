/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthHearing.framework/HealthHearing
 */

@interface HKHearingFeatures : NSObject

+ (bool)_boolForPreferenceKey:(id)arg1 defaultValue:(bool)arg2 fromValues:(id)arg3;
+ (id)_numbersForPreferenceKeys:(id)arg1 error:(id*)arg2;
+ (id)_sharedAudioDataAnalysisManager;
+ (bool)isHeadphoneExposureNotificationsEnabled;
+ (id)sharedInstance;
+ (bool)unitTesting_forceDefaultHeadphoneDataCollectionInterval;
+ (void)unitTesting_overrideForceDefaultHeadphoneDataCollectionInterval:(id)arg1;
+ (void)unitTesting_overrideIsHeadphoneExposureNotificationsEnabled:(id)arg1;
+ (void)unitTesting_overrideSimulateLocalHeadphonePlayback:(id)arg1;
+ (bool)unitTesting_simulateLocalHeadphonePlayback;

- (void)_adasPreferenceDidChange:(id)arg1;
- (void)_startObservingForChanges;
- (void)_stopObserveringForChanges;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (bool)isHeadphoneExposureNotificationsEnabled;

@end
