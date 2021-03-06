/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDPeerPaymentEnrolled : NSObject <NFAWDEventProtocol> {
    AWDNFCPeerPaymentEnrolled * _metric;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCPeerPaymentEnrolled *metric;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (void)setDuration:(unsigned long long)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setErrorStep:(unsigned int)arg1;
- (void)setMetric:(id)arg1;

@end
