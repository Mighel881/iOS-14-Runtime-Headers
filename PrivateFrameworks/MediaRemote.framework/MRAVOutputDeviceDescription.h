/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVOutputDeviceDescription : NSObject {
    unsigned int  _deviceSubtype;
    unsigned int  _deviceType;
    NSString * _uid;
}

@property (nonatomic, readonly) unsigned int deviceSubtype;
@property (nonatomic, readonly) unsigned int deviceType;
@property (nonatomic, readonly) NSString *uid;

- (void).cxx_destruct;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (id)initWithDeviceType:(unsigned int)arg1 deviceSubtype:(unsigned int)arg2 uid:(id)arg3;
- (id)uid;

@end