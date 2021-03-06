/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVRoutingDiscoverySessionWrapper : NSProxy {
    MRAVRoutingDiscoverySessionConfiguration * _configuration;
    unsigned int  _discoveryMode;
    NSMutableDictionary * _endpointCallbacks;
    NSMutableDictionary * _endpointTokenMap;
    NSMutableDictionary * _outputDeviceCallbacks;
    NSMutableDictionary * _outputDeviceTokenMap;
    MRAVRoutingDiscoverySession * _sharedSession;
}

@property (nonatomic, retain) MRAVRoutingDiscoverySessionConfiguration *configuration;
@property (nonatomic, retain) NSMutableDictionary *endpointCallbacks;
@property (nonatomic, retain) NSMutableDictionary *endpointTokenMap;
@property (nonatomic, retain) NSMutableDictionary *outputDeviceCallbacks;
@property (nonatomic, retain) NSMutableDictionary *outputDeviceTokenMap;
@property (nonatomic, retain) MRAVRoutingDiscoverySession *sharedSession;

- (void).cxx_destruct;
- (id)addEndpointsChangedCallback:(id /* block */)arg1;
- (id)addOutputDevicesChangedCallback:(id /* block */)arg1;
- (id)configuration;
- (void)dealloc;
- (unsigned int)discoveryMode;
- (id)endpointCallbacks;
- (id)endpointTokenMap;
- (void)forwardInvocation:(id)arg1;
- (id)initWithSession:(id)arg1 configuration:(id)arg2;
- (id)mappedEndpointTokenForToken:(id)arg1;
- (id)mappedOutputDeviceTokenForToken:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)outputDeviceCallbacks;
- (id)outputDeviceTokenMap;
- (void)reevaluateDiscoveryModeForSession:(id)arg1;
- (void)removeEndpointsChangedCallback:(id)arg1;
- (void)removeOutputDevicesChangedCallback:(id)arg1;
- (void)setAlwaysAllowUpdates:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDiscoveryMode:(unsigned int)arg1;
- (void)setEndpointCallbacks:(id)arg1;
- (void)setEndpointTokenMap:(id)arg1;
- (void)setOutputDeviceCallbacks:(id)arg1;
- (void)setOutputDeviceTokenMap:(id)arg1;
- (void)setPopulatesExternalDevice:(bool)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (void)setSharedSession:(id)arg1;
- (id)sharedSession;
- (void)transferCallbacksFromSession:(id)arg1 toSession:(id)arg2;
- (void)updateSharedSession;

@end
