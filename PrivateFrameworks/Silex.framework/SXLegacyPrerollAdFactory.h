/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLegacyPrerollAdFactory : NSObject <SXVideoAdProviderFactory> {
    SXAdController * _adController;
    <SXScrollObserverManager> * _scrollObserverManager;
    SXViewport * _viewport;
    <SVVolumeProviding> * _volumeProvider;
}

@property (nonatomic, readonly) SXAdController *adController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXScrollObserverManager> *scrollObserverManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic, readonly) <SVVolumeProviding> *volumeProvider;

- (void).cxx_destruct;
- (id)adController;
- (id)createVideoAdProviderForComponentView:(id)arg1 videoPlayerViewController:(id)arg2 analyticsReporter:(id)arg3;
- (id)initWithViewport:(id)arg1 adController:(id)arg2 scrollObserverManager:(id)arg3 volumeProvider:(id)arg4;
- (id)scrollObserverManager;
- (id)viewport;
- (id)volumeProvider;

@end