/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFWiFiManagerDataSource : HMFObject <HMFWiFiManagerDataSource> {
    struct __WiFiNetwork { } * _currentNetwork;
    <HMFWiFiManagerDataSourceDelegate> * _delegate;
    struct __WiFiManagerClient { } * _wifiClientReference;
    struct __WiFiDeviceClient { } * _wifiDeviceReference;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (getter=isAssertionActive, readonly) bool assertionActive;
@property (readonly) unsigned long long assertionOptions;
@property (nonatomic) struct __WiFiNetwork { }*currentNetwork;
@property (nonatomic, readonly, copy) NSString *currentNetworkSSID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMFWiFiManagerDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __WiFiManagerClient { }*wifiClientReference;
@property (nonatomic) struct __WiFiDeviceClient { }*wifiDeviceReference;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (getter=isWoWAsserted, setter=setWoWAsserted:, nonatomic) bool wowAsserted;

+ (id)MACAddressString;

- (void).cxx_destruct;
- (void)_setCurrentNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)activateWithOptions:(unsigned long long)arg1;
- (unsigned long long)assertionOptions;
- (struct __WiFiNetwork { }*)currentNetwork;
- (id)currentNetworkSSID;
- (void)deactivate;
- (void)dealloc;
- (id)delegate;
- (void)handleWiFiLinkChangedWithEventDictionary:(id)arg1;
- (id)initWithWorkQueue:(id)arg1;
- (bool)isAssertionActive;
- (bool)isWoWAsserted;
- (void)performBlockAfterWoWReassertionDelay:(id /* block */)arg1;
- (void)setCurrentNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWifiDeviceReference:(struct __WiFiDeviceClient { }*)arg1;
- (void)setWoWAsserted:(bool)arg1;
- (void)startWithWiFiDevice:(struct __WiFiDeviceClient { }*)arg1;
- (struct __WiFiManagerClient { }*)wifiClientReference;
- (struct __WiFiDeviceClient { }*)wifiDeviceReference;
- (id)workQueue;

@end
