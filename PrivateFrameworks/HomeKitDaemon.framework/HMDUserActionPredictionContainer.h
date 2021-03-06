/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserActionPredictionContainer : HMFObject {
    HMFUnfairLock * _lock;
    NSMutableArray * _sortedPredictionGroups;
    NSArray * _sortedPredictionsByServiceGroup;
    bool  _sortedPredictionsByServiceGroupNeedsUpdate;
}

@property (readonly, copy) NSArray *allPredictions;
@property (nonatomic, retain) NSMutableArray *sortedPredictionGroups;
@property (copy) NSArray *sortedPredictionsByServiceGroup;

- (void).cxx_destruct;
- (unsigned long long)_insertPredictionGroup:(id)arg1;
- (id)_movePrediction:(id)arg1 fromGroup:(id)arg2 intoGroup:(id)arg3;
- (unsigned long long)addOrUpdatePrediction:(id)arg1;
- (id)allPredictions;
- (id)createPredictionGroupForPrediction:(id)arg1;
- (id)init;
- (unsigned long long)removePrediction:(id)arg1;
- (void)setSortedPredictionGroups:(id)arg1;
- (void)setSortedPredictionsByServiceGroup:(id)arg1;
- (id)sortedPredictionGroups;
- (id)sortedPredictionsByServiceGroup;

@end
