/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCAssistantEndpointContext : MPCAssistantContext {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    MPCAssistantDiscovery * _discoveryAudio;
    MPCAssistantDiscovery * _discoveryEndpoint;
    MPCAssistantDiscovery * _discoveryLogical;
    NSObject<OS_dispatch_group> * _modificationInProgress;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *modificationInProgress;

- (void).cxx_destruct;
- (void)_discoverLocalEndpointFromDeviceInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)_setOutputDevices:(id)arg1 onEndpoint:(id)arg2 completion:(id /* block */)arg3;
- (void)_updateDiscoverableDeviceList:(id)arg1 deviceInfo:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)modificationInProgress;
- (void)modifySystemMusicContextForDestination:(id)arg1 completion:(id /* block */)arg2;
- (void)setModificationInProgress:(id)arg1;

@end