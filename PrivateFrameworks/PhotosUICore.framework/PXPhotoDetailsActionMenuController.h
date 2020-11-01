/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoDetailsActionMenuController : PXActionMenuController <PXAssetCollectionActionPerformerDelegate, PXChangeObserver> {
    PXPhotoKitAssetCollectionActionManager * _assetActionManager;
    <PXPhotosDetailsActionMenuDelegate> * _delegate;
    PHFetchResult * _people;
    PXCMMSendBackSuggestionSource * _sendBackSuggestionSource;
}

@property (nonatomic, readonly) PXPhotoKitAssetCollectionActionManager *assetActionManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPhotosDetailsActionMenuDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHFetchResult *people;
@property (nonatomic, retain) PXCMMSendBackSuggestionSource *sendBackSuggestionSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)assetActionManager;
- (id)assetCollectionActionManager;
- (void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2;
- (id)availableActionTypes;
- (id)delegate;
- (id)initWithActionManagers:(id)arg1;
- (id)initWithSelectionManager:(id)arg1 displayTitleInfo:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)people;
- (id)sendBackSuggestionSource;
- (void)setDelegate:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)setSendBackSuggestionSource:(id)arg1;
- (bool)shouldAllowPerformanceOfActionType:(id)arg1;

@end