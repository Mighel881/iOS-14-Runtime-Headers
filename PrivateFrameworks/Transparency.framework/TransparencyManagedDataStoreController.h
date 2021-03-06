/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface TransparencyManagedDataStoreController : NSObject {
    TransparencyManagedDataStore * _dataStore;
    NSManagedObjectContext * _mainQueueContext;
    TransparencyManagedDataStore * _mainQueueDataStore;
    NSHashTable * _mocStore;
    bool  _movedDatabase;
    NSPersistentContainer * _persistentContainer;
    _Atomic long long  _sequenceId;
    NSManagedObjectContext * _topLevelContext;
    TransparencyManagedDataStore * _xpcQueueDataStore;
}

@property (readonly) NSManagedObjectContext *backgroundContext;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (readonly) bool loadedStore;
@property (retain) NSManagedObjectContext *mainQueueContext;
@property (retain) TransparencyManagedDataStore *mainQueueDataStore;
@property (retain) NSHashTable *mocStore;
@property bool movedDatabase;
@property (retain) NSPersistentContainer *persistentContainer;
@property (readonly) _Atomic long long*sequenceId;
@property (retain) NSManagedObjectContext *topLevelContext;
@property (retain) TransparencyManagedDataStore *xpcQueueDataStore;

+ (void)reportCoreDataEventForEntity:(id)arg1 hardFailure:(bool)arg2 write:(bool)arg3 code:(long long)arg4 underlyingError:(id)arg5;
+ (void)reportCoreDataEventForEntity:(id)arg1 write:(bool)arg2 code:(long long)arg3 underlyingError:(id)arg4;

- (void).cxx_destruct;
- (id)backgroundContext;
- (id)bundleURL;
- (void)createContexts;
- (void)createDataStores;
- (long long)currentSequenceId:(id*)arg1;
- (id)dataStore;
- (void)handleDidSaveNotification:(id)arg1;
- (id)init;
- (void)loadPersistentStores;
- (bool)loadedStore;
- (id)mainQueueContext;
- (id)mainQueueDataStore;
- (id)mocStore;
- (bool)moveAsideDatabase:(id)arg1;
- (bool)movedDatabase;
- (id)persistentContainer;
- (bool)saveContext:(id)arg1 error:(id*)arg2;
- (void)saveTopLevelContext;
- (_Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void**)sequenceId:(SEL)arg1;
- (void)setDataStore:(id)arg1;
- (void)setMainQueueContext:(id)arg1;
- (void)setMainQueueDataStore:(id)arg1;
- (void)setMocStore:(id)arg1;
- (void)setMovedDatabase:(bool)arg1;
- (void)setPersistentContainer:(id)arg1;
- (void)setTopLevelContext:(id)arg1;
- (void)setXpcQueueDataStore:(id)arg1;
- (bool)shouldMoveAsideDatabase:(id)arg1;
- (id)topLevelContext;
- (id)xpcQueueDataStore;

@end
