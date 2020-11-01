/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDemoTilingControllerWidget : NSObject <PXAssetsSceneDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXWidget> {
    PXAssetsDataSourceManager * __dataSourceManager;
    PXPhotoKitUIMediaProvider * __mediaProvider;
    PXUIAssetsScene * __scene;
    PXBasicUIViewTileAnimator * __tileAnimator;
    NSMutableSet * __tilesInUse;
    PXTilingController * __tilingController;
    PXPhotosDetailsContext * _context;
    NSString * _localizedSubtitle;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (nonatomic, readonly) PXAssetsDataSourceManager *_dataSourceManager;
@property (nonatomic, readonly) PXPhotoKitUIMediaProvider *_mediaProvider;
@property (nonatomic, readonly) PXUIAssetsScene *_scene;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) NSMutableSet *_tilesInUse;
@property (nonatomic, readonly) PXTilingController *_tilingController;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double extraSpaceNeededAtContentBottom;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (nonatomic, readonly) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInEditMode;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (setter=_setLocalizedSubtitle:, nonatomic, retain) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) struct CGSize { double x1; double x2; } maxVisibleSizeInEditMode;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic, readonly) bool wantsFocus;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;
@property (nonatomic) <PXWidgetEditingDelegate> *widgetEditingDelegate;
@property (nonatomic) <PXWidgetUnlockDelegate> *widgetUnlockDelegate;

- (void).cxx_destruct;
- (id)_dataSourceManager;
- (id)_demoTilingLayoutForDataSource:(id)arg1;
- (void)_loadTilingController;
- (id)_mediaProvider;
- (id)_scene;
- (void)_setLocalizedSubtitle:(id)arg1;
- (id)_tileAnimator;
- (id)_tilesInUse;
- (id)_tilingController;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (id)contentTilingController;
- (id)context;
- (bool)hasContentForCurrentInput;
- (id)init;
- (id)localizedCaption;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)setContext:(id)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)userDidSelectSubtitle;
- (id)widgetDelegate;

@end