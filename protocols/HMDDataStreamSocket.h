/* Generated by RuntimeBrowser.
 */

@protocol HMDDataStreamSocket <NSObject>

@required

- (NSString *)applicationProtocolName;
- (void)close;
- (<HMDDataStreamSocketDelegate> *)delegate;
- (bool)isClosed;
- (NSData *)readData;
- (void)setDelegate:(id <HMDDataStreamSocketDelegate>)arg1;
- (bool)writeData:(NSData *)arg1 error:(id*)arg2;

@end
