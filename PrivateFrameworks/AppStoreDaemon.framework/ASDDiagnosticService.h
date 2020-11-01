/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDDiagnosticService : NSObject {
    ASDServiceBroker * _serviceBroker;
}

+ (id)defaultService;
+ (id)interface;

- (void).cxx_destruct;
- (id)_asynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)activeClientsWithError:(id*)arg1;
- (void)addSubscriberWithEndpoint:(id)arg1;
- (id)initWithServiceBroker:(id)arg1;
- (bool)pingWithError:(id*)arg1;
- (bool)sendCommand:(long long)arg1 withError:(id*)arg2;
- (id)sendDetailsCommand:(long long)arg1 timeout:(id)arg2 withError:(id*)arg3;
- (id)sendDetailsCommand:(long long)arg1 withError:(id*)arg2;

@end