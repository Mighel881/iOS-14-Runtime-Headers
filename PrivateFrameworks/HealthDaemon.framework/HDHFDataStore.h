/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHFDataStore : NSObject {
    <HDHFDataStoreDelegate> * _delegate;
    struct shared_ptr<health::VirtualFilesystem> { 
        struct VirtualFilesystem {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _fileSystem;
    NSString * _fileSystemPath;
    _Atomic bool  _hasOpenStore;
    struct shared_ptr<health::DataStore> { 
        struct DataStore {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _highFrequencyDataStore;
    _Atomic bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _openQueue;
}

@property (nonatomic) <HDHFDataStoreDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *fileSystemPath;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_convertExceptionsToError:(id*)arg1 inBlock:(id /* block */)arg2;
- (struct shared_ptr<health::DataStore> { struct DataStore {} *x1; struct __shared_weak_count {} *x2; })_highFrequencyDataStoreWithError:(id*)arg1;
- (struct shared_ptr<health::DataStore> { struct DataStore {} *x1; struct __shared_weak_count {} *x2; })_lock_highFrequencyDataStoreWithError:(id*)arg1;
- (bool)_lock_openHighFrequencyDataStoreWithError:(id*)arg1;
- (struct shared_ptr<health::DataStore> { struct DataStore {} *x1; struct __shared_weak_count {} *x2; })_lock_primitiveOpenHighFrequencyDataStoreWithError:(id*)arg1;
- (bool)accessStoreWithError:(id*)arg1 block:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)discardStoreWithError:(id*)arg1;
- (id)fileSystemPath;
- (id /* block */)flushHandlerForInvalidation:(bool)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 fileSystem:(struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (void)setDelegate:(id)arg1;

@end