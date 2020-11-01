/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetPickerCoordinator : NSObject <PUAssetExplorerReviewScreenViewControllerDelegate, PUAssetPickerContainerControllerActionHandler, PUAssetPickerViewControllerActionHandler, PUPhotoPickerResizeTaskDescriptorViewModelDelegate, PUPhotoPickerServicesConsumer, PUPhotosGridDownloadUpdateHandler, PUUIImageViewControllerFileResizingDelegate, PXSelectionCoordinatorDelegate, UINavigationControllerDelegate> {
    NSMutableDictionary * _assetIdentifierByLoadOperationID;
    PUPickerConfiguration * _configuration;
    <PUAssetPickerCoordinatorActionHandler> * _coordinatorActionHandler;
    NSDictionary * _downloadAssetsProgressMap;
    PUPhotosGridDownloadHelper * _downloadHelper;
    NSMutableDictionary * _downloadProgress;
    NSProgress * _downloadProgressViewProgress;
    PUAssetPickerFilterOptions * _filterOptions;
    PXLoadingStatusManager * _loadingStatusManager;
    NSObject<OS_dispatch_group> * _multipleAssetAvailabilityGroup;
    UINavigationController * _navigationController;
    <PUPhotoPicker> * _photoPicker;
    PUAssetPickerActivityProgressController * _progressController;
    PUPhotoPickerResizeTaskDescriptorViewModel * _resizeTaskDescriptorViewModel;
    PUAssetPickerContainerController * _rootViewController;
    PHAsset * _selectedAssetToResize;
    NSMutableOrderedSet * _selectedAssets;
    PXSelectionCoordinator * _selectionCoordinator;
}

@property (nonatomic, readonly) NSMutableDictionary *assetIdentifierByLoadOperationID;
@property (nonatomic, readonly) PUPickerConfiguration *configuration;
@property (nonatomic, readonly) <PUAssetPickerCoordinatorActionHandler> *coordinatorActionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *downloadAssetsProgressMap;
@property (nonatomic, readonly) PUPhotosGridDownloadHelper *downloadHelper;
@property (nonatomic, retain) NSMutableDictionary *downloadProgress;
@property (nonatomic, retain) NSProgress *downloadProgressViewProgress;
@property (nonatomic, retain) PUAssetPickerFilterOptions *filterOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLoadingStatusManager *loadingStatusManager;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *multipleAssetAvailabilityGroup;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic) <PUPhotoPicker> *photoPicker;
@property (nonatomic, retain) PUAssetPickerActivityProgressController *progressController;
@property (nonatomic, retain) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel;
@property (nonatomic, readonly) PUAssetPickerContainerController *rootViewController;
@property (nonatomic, retain) PHAsset *selectedAssetToResize;
@property (nonatomic, retain) NSMutableOrderedSet *selectedAssets;
@property (nonatomic, readonly) PXSelectionCoordinator *selectionCoordinator;
@property (readonly) Class superclass;

+ (bool)_assetCanPlay:(id)arg1;
+ (bool)_editingEnabled:(id)arg1;
+ (id)_extraArgumentsForResizeTaskDescriptor:(id)arg1;
+ (bool)_shouldTreatAssetAsLivePhoto:(id)arg1 photoPicker:(id)arg2 filterOptions:(id)arg3;
+ (bool)_skipSelectionConfirmation:(id)arg1;
+ (bool)_viewImageBeforeSelectingEnabled:(id)arg1;
+ (bool)pu_legacy_shouldDownloadVideoComplement:(id)arg1 filterOptions:(id)arg2;

- (void).cxx_destruct;
- (id)_alertControllerWithResizingOptionsForAssets:(id)arg1;
- (void)_dismissDownloadProgressViewWithSuccess:(bool)arg1;
- (void)_handleProgressControllerCancellation;
- (id)_setupProgressController;
- (void)_updateProgressViewProgress:(id)arg1;
- (bool)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5;
- (void)assetExplorerReviewScreenViewController:(id)arg1 didPressFileSizeButtonWithSelectedUUIDs:(id)arg2;
- (bool)assetExplorerReviewScreenViewController:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;
- (id)assetIdentifierByLoadOperationID;
- (id)assetsForResizing;
- (id)beginShowingProgressForAsset:(id)arg1 inCollection:(id)arg2;
- (id)configuration;
- (void)containerController:(id)arg1 didTapAddButton:(id)arg2;
- (void)containerController:(id)arg1 didTapCancelButton:(id)arg2;
- (void)containerController:(id)arg1 didTapSelectedItemsButton:(id)arg2;
- (void)containerControllerDidAppear:(id)arg1;
- (id)coordinatorActionHandler;
- (id)downloadAssetsProgressMap;
- (id)downloadHelper;
- (id)downloadProgress;
- (void)downloadProgressDidFinishForAsset:(id)arg1 success:(bool)arg2;
- (id)downloadProgressViewProgress;
- (void)endShowingProgressWithIdentifier:(id)arg1;
- (id)filterOptions;
- (void)imageViewControllerDidConfirmSelection:(id)arg1;
- (void)imageViewControllerDidSelectFileResizing:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1 coordinatorActionHandler:(id)arg2;
- (id)initWithConfiguration:(id)arg1 filterOptions:(id)arg2 navigationControllerClass:(Class)arg3 selectedAssets:(id)arg4 coordinatorActionHandler:(id)arg5;
- (id)initWithPhotoPicker:(id)arg1 mediaTypes:(id)arg2;
- (id)loadingStatusManager;
- (id)multipleAssetAvailabilityGroup;
- (id)navigationController;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)photoPicker;
- (void)presentAlertController:(id)arg1;
- (id)progressController;
- (void)pu_legacy_cancelPicker;
- (void)pu_legacy_didDisplayPicker;
- (void)pu_legacy_selectAssetWithFileResizing:(id)arg1;
- (void)pu_legacy_selectMultipleAssets:(id)arg1;
- (void)pu_legacy_selectSingleAsset:(id)arg1;
- (void)pu_legacy_showProgressView;
- (id)resizeTaskDescriptorViewModel;
- (id)rootViewController;
- (id)selectedAssetToResize;
- (id)selectedAssets;
- (id)selectionCoordinator;
- (void)selectionCoordinator:(id)arg1 willUpdateSelectedObjectsForSnapshot:(id)arg2 withRemovedIndexes:(id)arg3 insertedIndexes:(id)arg4;
- (void)setDownloadAssetsProgressMap:(id)arg1;
- (void)setDownloadProgress:(id)arg1;
- (void)setDownloadProgressViewProgress:(id)arg1;
- (void)setFilterOptions:(id)arg1;
- (void)setMultipleAssetAvailabilityGroup:(id)arg1;
- (void)setPhotoPicker:(id)arg1;
- (void)setPhotoPickerMediaTypes:(id)arg1;
- (void)setProgressController:(id)arg1;
- (void)setResizeTaskDescriptorViewModel:(id)arg1;
- (void)setSelectedAssetToResize:(id)arg1;
- (void)setSelectedAssets:(id)arg1;
- (bool)toggleSelectionForAsset:(id)arg1;
- (void)updateProgressWithIdentifier:(id)arg1 withValue:(double)arg2;
- (bool)viewController:(id)arg1 didSelectAsset:(id)arg2;
- (void)viewController:(id)arg1 didSelectAssetCollection:(id)arg2;

@end