/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchWhitelistedBundleIDsOperation : CKDOperation {
    NSArray * _bundleIDs;
}

@property (nonatomic, copy) NSArray *bundleIDs;
@property (nonatomic, retain) <CKFetchWhitelistedBundleIDsOperationCallbacks> *clientOperationCallbackProxy;

- (void).cxx_destruct;
- (id)activityCreate;
- (id)bundleIDs;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (int)operationType;
- (void)setBundleIDs:(id)arg1;

@end
