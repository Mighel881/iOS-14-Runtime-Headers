/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAppleMediaServices : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)appStoreAppWithBundleIdentifiers:(id)arg1 artworkSize:(struct CGSize { double x1; double x2; })arg2 screenScale:(double)arg3 completion:(id /* block */)arg4;
- (void)appStoreAppWithBundleIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)appStoreAppWithIdentifiers:(id)arg1 artworkSize:(struct CGSize { double x1; double x2; })arg2 screenScale:(double)arg3 type:(long long)arg4 completion:(id /* block */)arg5;
- (void)appStoreAppWithIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 artworkSize:(struct CGSize { double x1; double x2; })arg3 screenScale:(double)arg4 type:(long long)arg5 completion:(id /* block */)arg6;
- (void)appStoreAppWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)connection;
- (id)init;
- (void)mediaResultWithIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 artworkSize:(struct CGSize { double x1; double x2; })arg3 screenScale:(double)arg4 type:(long long)arg5 completion:(id /* block */)arg6;
- (void)openConnectionIfNeeded;
- (id)queue;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;

@end
