/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRIDSTransport : MRExternalDeviceTransport {
    MRIDSInputStream * _inputStream;
    MRAVOutputDevice * _outputDevice;
    MRIDSOutputStream * _outputStream;
    IDSService * _service;
    long long  _type;
}

- (void).cxx_destruct;
- (void)_handleDeviceDisconnected:(id)arg1;
- (id)deviceInfo;
- (id)error;
- (bool)getInputStream:(id*)arg1 outputStream:(id*)arg2 userInfo:(id)arg3;
- (id)hostname;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 outputDevice:(id)arg2;
- (id)name;
- (long long)port;
- (void)reset;
- (void)setShouldUseSystemAuthenticationPrompt:(bool)arg1;
- (bool)shouldUseSystemAuthenticationPrompt;
- (id)uid;

@end