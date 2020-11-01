/* Generated by RuntimeBrowser.
 */

@protocol HAP2AccessoryServerBrowserDelegate <NSObject>

@required

- (void)accessoryServerBrowser:(id <HAP2AccessoryServerBrowser>)arg1 didDiscoverPairedAccessoryServer:(id <HAP2PairedAccessoryServer>)arg2;
- (void)accessoryServerBrowser:(id <HAP2AccessoryServerBrowser>)arg1 didDiscoverUnpairedAccessoryServer:(id <HAP2UnpairedAccessoryServer>)arg2;

@optional

- (void)accessoryServerBrowser:(id <HAP2AccessoryServerBrowser>)arg1 didLosePairedAccessoryServer:(id <HAP2PairedAccessoryServer>)arg2 error:(NSError *)arg3;
- (void)accessoryServerBrowser:(id <HAP2AccessoryServerBrowser>)arg1 didLoseUnpairedAccessoryServer:(id <HAP2UnpairedAccessoryServer>)arg2 error:(NSError *)arg3;
- (void)accessoryServerBrowser:(id <HAP2AccessoryServerBrowser>)arg1 didStartDiscoveringWithError:(NSError *)arg2;
- (void)accessoryServerBrowser:(id <HAP2AccessoryServerBrowser>)arg1 didStopDiscoveringWithError:(NSError *)arg2;

@end