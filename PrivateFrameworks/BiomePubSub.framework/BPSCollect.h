/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSCollect : BPSPublisher {
    BPSPublisher * _upstream;
}

@property (nonatomic, readonly) BPSPublisher *upstream;

// Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub

- (void).cxx_destruct;
- (id)initWithUpstream:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)upstream;

// Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams

- (id)bookmarkableUpstreams;
- (id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2;

@end
