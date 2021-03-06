/* Generated by RuntimeBrowser.
 */

@protocol UWBSessionDelegateProxyProtocol <NSObject>

@required

- (void)didRemoveNearbyObjects:(NSArray *)arg1 withReason:(unsigned long long)arg2;
- (void)didUpdateNearbyObjects:(NSArray *)arg1;
- (void)uwbSessionDidFailWithError:(NSError *)arg1;
- (void)uwbSessionDidInvalidateWithError:(NSError *)arg1;
- (void)uwbSessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2;
- (void)uwbSessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;
- (void)uwbSystemDidChangeState:(unsigned long long)arg1;

@end
