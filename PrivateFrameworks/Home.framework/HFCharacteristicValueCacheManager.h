/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCharacteristicValueCacheManager : NSObject {
    NSObject<OS_dispatch_group> * _dispatchGroup;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwlock;
    NSMutableDictionary * _transactionsByActionSetID;
    NSMutableDictionary * _transactionsByCharacteristicID;
    NSMutableOrderedSet * _unprocessedAddedTransactions;
    NSMutableOrderedSet * _unprocessedRemovedTransactions;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _unprocessedTransctionLock;
}

@property (nonatomic, retain) NSMutableDictionary *transactionsByActionSetID;
@property (nonatomic, retain) NSMutableDictionary *transactionsByCharacteristicID;
@property (nonatomic, retain) NSMutableOrderedSet *unprocessedAddedTransactions;
@property (nonatomic, retain) NSMutableOrderedSet *unprocessedRemovedTransactions;

- (void).cxx_destruct;
- (void)_enumerateTransactionsRemovingFailingItems:(id)arg1 block:(id /* block */)arg2;
- (void)_finishUpdatesNowIfNeeded;
- (void)_locked_updateWithAddedTransaction:(id)arg1;
- (void)_locked_updateWithRemovedTransaction:(id)arg1;
- (id)_perfomUpdatedCacheRead:(id /* block */)arg1;
- (id)_performReadLock:(struct _opaque_pthread_rwlock_t { long long x1; BOOL x2[192]; }*)arg1 block:(id /* block */)arg2;
- (void)_performWriteLock:(struct _opaque_pthread_rwlock_t { long long x1; BOOL x2[192]; }*)arg1 block:(id /* block */)arg2;
- (void)_scheduleRemoveTransactions:(id)arg1 fromSet:(id)arg2;
- (bool)_transaction:(id)arg1 isWritingCharacteristic:(id)arg2;
- (bool)_transaction:(id)arg1 isWritingCharacteristic:(id)arg2 allowingActions:(bool)arg3;
- (id)cachedValueForCharacteristic:(id)arg1;
- (bool)containsTransactionsExecutingActionSet:(id)arg1;
- (bool)containsTransactionsReadingCharacteristic:(id)arg1 filterBlock:(id /* block */)arg2;
- (bool)containsTransactionsWritingCharacteristic:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setTransactionsByActionSetID:(id)arg1;
- (void)setTransactionsByCharacteristicID:(id)arg1;
- (void)setUnprocessedAddedTransactions:(id)arg1;
- (void)setUnprocessedRemovedTransactions:(id)arg1;
- (void)transactionAdded:(id)arg1;
- (void)transactionRemoved:(id)arg1;
- (id)transactionsByActionSetID;
- (id)transactionsByCharacteristicID;
- (id)transactionsExecutingActionSet:(id)arg1;
- (id)transactionsReadingCharacteristic:(id)arg1 filterBlock:(id /* block */)arg2;
- (id)transactionsWritingCharacteristic:(id)arg1;
- (id)unprocessedAddedTransactions;
- (id)unprocessedRemovedTransactions;

@end