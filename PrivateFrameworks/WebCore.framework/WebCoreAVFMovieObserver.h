/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate, AVPlayerItemMetadataCollectorPushDelegate, AVPlayerItemMetadataOutputPushDelegate> {
    int  m_delayCallbacks;
    struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> { 
        struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { 
            struct WeakPtrImpl<WTF::EmptyCounter> {} *m_ptr; 
        } m_impl; 
    }  m_player;
    struct GenericTaskQueue<WebCore::Timer> { 
        struct WeakPtrFactory<WebCore::GenericTaskQueue<WebCore::Timer>, WTF::EmptyCounter> { 
            struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { 
                struct WeakPtrImpl<WTF::EmptyCounter> {} *m_ptr; 
            } m_impl; 
        } m_weakPtrFactory; 
        struct UniqueRef<WebCore::TaskDispatcher<WebCore::Timer> > { 
            struct unique_ptr<WebCore::TaskDispatcher<WebCore::Timer>, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer> > > { 
                struct __compressed_pair<WebCore::TaskDispatcher<WebCore::Timer> *, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer> > > { 
                    struct TaskDispatcher<WebCore::Timer> {} *__value_; 
                } __ptr_; 
            } m_ref; 
        } m_dispatcher; 
        unsigned int m_pendingTasks; 
        bool m_isClosed; 
    }  m_taskQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didEnd:(id)arg1;
- (void)disconnect;
- (id)initWithPlayer:(struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> {} *x_1_1_1; } x1; }*)arg1;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)metadataCollector:(id)arg1 didCollectDateRangeMetadataGroups:(id)arg2 indexesOfNewGroups:(id)arg3 indexesOfModifiedGroups:(id)arg4;
- (void)metadataLoaded;
- (void)metadataOutput:(id)arg1 didOutputTimedMetadataGroups:(id)arg2 fromPlayerItemTrack:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(int)arg4;
- (void)outputSequenceWasFlushed:(id)arg1;

@end