/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraRecordingOptionsItemManager : HFItemManager <HUCameraRecordingSettingsModuleDelegate> {
    HUCameraRecordingSettingsModule * _cameraRecordingItemModule;
}

@property (nonatomic, retain) HUCameraRecordingSettingsModule *cameraRecordingItemModule;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)cameraRecordingItemModule;
- (void)cameraRecordingSettingsModule:(id)arg1 didUpdateItem:(id)arg2;
- (void)setCameraRecordingItemModule:(id)arg1;

@end
