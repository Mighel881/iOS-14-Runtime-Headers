/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
 */

@interface ATXModeRoutineFeaturizer : NSObject <ATXModeFeaturizer> {
    <ATXModeFeaturizerDelegate> * _delegate;
    CLCircularRegion * _homeLOIRegion;
    double  _homeLOISearchRadius;
    <ATXLocationManagerProtocol><ATXLocationOfInterestManagerProtocol> * _locationManager;
    CLCircularRegion * _workLOIRegion;
    double  _workLOISearchRadius;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXModeFeaturizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double homeLOISearchRadius;
@property (readonly) Class superclass;
@property double workLOISearchRadius;

- (void).cxx_destruct;
- (void)_locationManagerDidEnterRegion:(id)arg1;
- (void)_locationManagerDidExitRegion:(id)arg1;
- (void)_routineLocationsOfInterestDidChange:(id)arg1;
- (void)_updateLOIAndUpdateFeatures;
- (void)_watchRegionForLOIType:(long long)arg1;
- (void)beginListening;
- (void)beginMonitoringForLocation:(id)arg1 radius:(double)arg2 type:(long long)arg3;
- (void)dealloc;
- (id)delegate;
- (double)homeLOISearchRadius;
- (id)init;
- (id)initWithLocationManager:(id)arg1;
- (bool)isInRegion:(id)arg1;
- (id)provideFeatures;
- (void)setDelegate:(id)arg1;
- (void)setHomeLOISearchRadius:(double)arg1;
- (void)setWorkLOISearchRadius:(double)arg1;
- (void)stopListening;
- (double)workLOISearchRadius;

@end