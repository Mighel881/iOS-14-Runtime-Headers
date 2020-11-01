/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRExternalDevice : NSObject {
    unsigned int  _connectionState;
    NSArray * _personalOutputDevices;
    bool  _usingSystemPairing;
    bool  _valid;
    bool  _wantsEndpointChangeNotifications;
}

@property (nonatomic, readonly) unsigned int connectionState;
@property (nonatomic, readonly) MROrigin *customOrigin;
@property (nonatomic, readonly) MRDeviceInfo *deviceInfo;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, readonly) NSString *name;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (nonatomic, readonly) NSArray *personalOutputDevices;
@property (nonatomic, readonly) long long port;
@property (nonatomic, readonly) MRSupportedProtocolMessages *supportedMessages;
@property (getter=isUsingSystemPairing, nonatomic) bool usingSystemPairing;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic) bool wantsEndpointChangeNotifications;
@property (nonatomic) bool wantsNowPlayingArtworkNotifications;
@property (nonatomic) bool wantsNowPlayingNotifications;
@property (nonatomic) bool wantsOutputDeviceNotifications;
@property (nonatomic) bool wantsSystemEndpointNotifications;
@property (nonatomic) bool wantsVolumeNotifications;

- (void).cxx_destruct;
- (id)_init;
- (void)connectWithOptions:(unsigned int)arg1;
- (void)connectWithOptions:(unsigned int)arg1 userInfo:(id)arg2;
- (unsigned int)connectionState;
- (id)currentClientUpdatesConfigMessage;
- (id)customOrigin;
- (id)deviceInfo;
- (void)disconnect:(id)arg1;
- (id)errorForCurrentState;
- (id)hostName;
- (bool)isPaired;
- (bool)isUsingSystemPairing;
- (bool)isValid;
- (void)modifyOutputContextOfType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 withReplyQueue:(id)arg5 completion:(id /* block */)arg6;
- (id)name;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)personalOutputDevices;
- (void)ping:(double)arg1 callback:(id /* block */)arg2 withQueue:(id)arg3;
- (long long)port;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; })arg1;
- (void)sendClientUpdatesConfigMessage;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)setConnectionStateCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setCustomDataCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setNameCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setPairingAllowedCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setPairingCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setUsingSystemPairing:(bool)arg1;
- (void)setVolumeCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setWantsEndpointChangeNotifications:(bool)arg1;
- (void)setWantsNowPlayingArtworkNotifications:(bool)arg1;
- (void)setWantsNowPlayingNotifications:(bool)arg1;
- (void)setWantsOutputDeviceNotifications:(bool)arg1;
- (void)setWantsSystemEndpointNotifications:(bool)arg1;
- (void)setWantsVolumeNotifications:(bool)arg1;
- (id)supportedMessages;
- (void)unpair;
- (bool)wantsEndpointChangeNotifications;
- (bool)wantsNowPlayingArtworkNotifications;
- (bool)wantsNowPlayingNotifications;
- (bool)wantsOutputDeviceNotifications;
- (bool)wantsSystemEndpointNotifications;
- (bool)wantsVolumeNotifications;

@end