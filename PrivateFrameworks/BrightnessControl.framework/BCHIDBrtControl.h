/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BrightnessControl.framework/BrightnessControl
 */

@interface BCHIDBrtControl : BCBrtControl {
    unsigned long long  _brighntessUpdateCounter;
    HIDElement * _brightnessElement;
    HIDElement * _brightnessFadeElement;
    NSObject<OS_dispatch_queue> * _brightnessUpdateQueue;
    float  _brightnessUpdateTarget;
    HIDDevice * _hidBrightnessDevice;
    unsigned int  _hidBrightnessService;
    double  _nits;
    float  _nitsScaler;
    unsigned long long  _registryID;
}

@property (readonly) unsigned long long registryID;

+ (id)_copyLogHandleName;
+ (id)copyAvailableControls;
+ (id)newMonitorWithHandler:(id /* block */)arg1 error:(id*)arg2;

- (bool)_getDeviceNits:(double*)arg1;
- (bool)_setDeviceNits:(double)arg1;
- (id)copyProperty:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (double)getNitsWithError:(id*)arg1;
- (id)init;
- (id)initWithService:(unsigned int)arg1;
- (unsigned long long)registryID;
- (bool)setNits:(double)arg1 error:(id*)arg2;
- (bool)setProperty:(id)arg1 value:(id)arg2 error:(id*)arg3;

@end
