/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBFluidSwitcherAppLayoutHeaderItemController : NSObject <BSInvalidatable, SBDeviceApplicationSceneHandleObserver, SBIconObserver> {
    SBAppLayout * _appLayout;
    FBSDisplayIdentity * _displayIdentity;
    NSMutableDictionary * _displayItemToIcon;
    NSMutableDictionary * _displayItemToLoadedImage;
    NSMutableDictionary * _displayItemToSceneHandle;
    NSArray * _displayItems;
    NSMutableSet * _downloadingIcons;
    bool  _invalidated;
    id /* block */  _updateHandler;
    bool  _useDarkLabels;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;
@property (getter=isUsingDarkLabels, nonatomic) bool useDarkLabels;

- (void).cxx_destruct;
- (id)_computeHeaderItems;
- (void)_handleDidReplaceDownloadingIconNotification:(id)arg1;
- (id)_iconForDisplayItem:(id)arg1;
- (void)_loadIconForDisplayItem:(id)arg1;
- (void)_performUpdateHandler;
- (void)_startTrackingDownloadingIcon:(id)arg1;
- (void)_stopTrackingDownloadingIcon:(id)arg1;
- (void)_updateDisplayItemIcons;
- (void)dealloc;
- (void)iconImageDidUpdate:(id)arg1;
- (id)initWithAppLayout:(id)arg1 applicationSceneHandleProvider:(id)arg2 displayIdentity:(id)arg3 showCanvasTitles:(bool)arg4;
- (void)invalidate;
- (bool)isUsingDarkLabels;
- (void)sceneHandle:(id)arg1 didChangeSceneTitle:(id)arg2;
- (void)setUpdateHandler:(id /* block */)arg1;
- (void)setUseDarkLabels:(bool)arg1;
- (id /* block */)updateHandler;

@end
