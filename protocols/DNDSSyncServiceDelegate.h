/* Generated by RuntimeBrowser.
 */

@protocol DNDSSyncServiceDelegate <NSObject>

@required

- (void)syncService:(id <DNDSSyncService>)arg1 didReceiveMessage:(NSDictionary *)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(NSString *)arg4;

@optional

- (bool)syncService:(id <DNDSSyncService>)arg1 shouldAcceptIncomingMessage:(NSDictionary *)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(NSString *)arg4;

@end
