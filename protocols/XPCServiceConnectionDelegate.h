/* Generated by RuntimeBrowser.
 */

@protocol XPCServiceConnectionDelegate <NSObject>

@required

- (void)XPCServiceConnection:(XPCServiceConnection *)arg1 didReceiveRequest:(XPCRequest *)arg2 sequenceNumber:(unsigned long long)arg3;
- (void)XPCServiceConnectionDidDisconnect:(XPCServiceConnection *)arg1;

@end