/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCCPredictionManager : NSObject <HMUserActionPredictionControllerDelegate> {
    <HUCCPredictionManagerDelegate> * _delegate;
    HMHome * _home;
    <HUCCPredictionController> * _predictionController;
    unsigned long long  _predictionLimit;
    NSObject<OS_dispatch_queue> * _predictionQueue;
    NSArray * _predictions;
    bool  _wasQueriedForInFlightPredictions;
}

@property (nonatomic) <HUCCPredictionManagerDelegate> *delegate;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) <HUCCPredictionController> *predictionController;
@property (nonatomic) unsigned long long predictionLimit;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *predictionQueue;
@property (nonatomic, retain) NSArray *predictions;
@property (nonatomic) bool wasQueriedForInFlightPredictions;

- (void).cxx_destruct;
- (id)_homeKitObjectForAccessoryUUID:(id)arg1;
- (id)_homeKitObjectForMediaSystemUUID:(id)arg1;
- (id)_homeKitObjectForSceneUUID:(id)arg1;
- (id)_homeKitObjectForServiceGroupUUID:(id)arg1;
- (id)_homeKitObjectForServiceUUID:(id)arg1;
- (id)_processUserActionPredictions:(id)arg1;
- (void)_queryUserActionPredictions;
- (void)_queryUserActionPredictionsOnQueue;
- (id)delegate;
- (id)fetchUserActionPredictions;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 predictionController:(id)arg2 delegate:(id)arg3 predictionLimit:(unsigned long long)arg4;
- (id)predictionController;
- (unsigned long long)predictionLimit;
- (id)predictionQueue;
- (id)predictions;
- (void)setDelegate:(id)arg1;
- (void)setPredictionController:(id)arg1;
- (void)setPredictionLimit:(unsigned long long)arg1;
- (void)setPredictionQueue:(id)arg1;
- (void)setPredictions:(id)arg1;
- (void)setWasQueriedForInFlightPredictions:(bool)arg1;
- (void)userActionPredictionController:(id)arg1 didUpdatePredictions:(id)arg2;
- (bool)wasQueriedForInFlightPredictions;

@end