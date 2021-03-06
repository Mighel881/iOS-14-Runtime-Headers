/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSScan : BPSPublisher <BPSPublisher> {
    id  _initialResult;
    id /* block */  _nextPartialResult;
    BPSPublisher * _upstream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id initialResult;
@property (nonatomic, readonly, copy) id /* block */ nextPartialResult;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BPSPublisher *upstream;

// Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub

- (void).cxx_destruct;
- (id)initWithUpstream:(id)arg1 initialResult:(id)arg2 nextPartialResult:(id /* block */)arg3;
- (id)initialResult;
- (id /* block */)nextPartialResult;
- (void)subscribe:(id)arg1;
- (id)upstream;

// Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams

- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)canStorePassThroughValueInBookmark;
- (id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2;

@end
