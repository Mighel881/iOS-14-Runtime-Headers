/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDCRSAuthException : NSObject <NFAWDEventProtocol> {
    AWDNFCCRSAuthExceptionEvent * _metric;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCCRSAuthExceptionEvent *metric;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (void)setMetric:(id)arg1;
- (void)updateExceptionUUID:(id)arg1;

@end
