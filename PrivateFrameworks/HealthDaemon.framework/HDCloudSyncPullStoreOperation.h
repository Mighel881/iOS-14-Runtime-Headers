/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncPullStoreOperation : HDCloudSyncOperation {
    bool  _hasAppliedChange;
    CKServerChangeToken * _initialServerChangeToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDCloudSyncTarget * _target;
}

@property (nonatomic, readonly) bool hasAppliedChange;
@property (nonatomic, readonly) HDCloudSyncTarget *target;

- (void).cxx_destruct;
- (void)_fetchChangeRecordsOperationDidFinish:(id)arg1 initialChangeToken:(id)arg2;
- (void)_fetchChangeRecordsWithChangeToken:(id)arg1;
- (bool)_isRelevantChangeRecord:(id)arg1;
- (bool)_isValidAnchorRangeMap:(id)arg1 lastAnchorMap:(id)arg2 error:(id*)arg3;
- (id)_orderedChangeRecordsBySequenceRecordIDWithFetchedChangeRecords:(id)arg1;
- (bool)_prepareForEpochChangeWithPersistedState:(id)arg1 error:(id*)arg2;
- (id)_requiredRecordsWithOrderedChangeRecords:(id)arg1 sequenceRecord:(id)arg2 error:(id*)arg3;
- (long long)_requiresSyncForSequence:(id)arg1 error:(id*)arg2;
- (long long)_requiresSyncWithError:(id*)arg1;
- (bool)_resetPullState:(id)arg1 error:(id*)arg2;
- (bool)_shouldApplyAnchorRangeMap:(id)arg1 receivedAnchorMap:(id)arg2;
- (void)_updatePersistedServerChangeToken:(id)arg1;
- (bool)hasAppliedChange;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3;
- (void)main;
- (id)persistedStoreState;
- (id)target;

@end
