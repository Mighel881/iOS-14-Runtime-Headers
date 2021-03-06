/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNewsletterEndpointConnection : FCEndpointConnection

- (void)deletePersonalizationVectorWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)getNewsletterSubscriptionWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithConfigurationManager:(id)arg1;
- (void)newsletterSubscribeTo:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)submitPersonalizationVector:(id)arg1 withCallbackQueue:(id)arg2 completion:(id /* block */)arg3;

@end
