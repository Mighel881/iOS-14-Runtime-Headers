/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraClipUploaderFactory : NSObject <HMDCameraClipUploaderFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createAddSignificantEventOperationForClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4;
- (id)createCreateClipOperationForClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 encryptionManager:(id)arg7;
- (id)createFinalizeClipOperationForModelID:(id)arg1 localZone:(id)arg2;
- (id)createUploadPosterFrameOperationForModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5;
- (id)createUploadVideoSegmentOperationForModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5;

@end