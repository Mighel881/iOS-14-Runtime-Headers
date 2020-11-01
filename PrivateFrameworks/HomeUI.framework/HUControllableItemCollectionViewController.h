/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUControllableItemCollectionViewController : HUItemCollectionViewController <HUQuickControlPresentationCoordinatorDelegate, HUQuickControlPresentationHost, UICollectionViewDragDelegate, UICollectionViewDropDelegate, UIGestureRecognizerDelegate> {
    NSMutableDictionary * _actionSetExecutionFuturesKeyedByIdentifier;
    UIViewController<HUQuickControlPresentationHost> * _ancestorQuickControlHostAtPresentationTime;
    unsigned long long  _contentColorStyle;
    UIGestureRecognizer * _contextualTapGestureRecognizer;
    <HULockAuthorizationDelegate> * _lockAuthorizationDelegate;
    HUQuickControlPresentationCoordinator * _quickControlPresentationCoordinator;
    <HUQuickControlPresentationDelegate> * _quickControlPresentationDelegate;
    UILongPressGestureRecognizer * _reorderGestureRecognizer;
    HFItem<NSCopying> * _selectedContextualMenuItem;
    bool  _useCustomDragAndDrop;
    bool  _viewAppeared;
}

@property (nonatomic, retain) NSMutableDictionary *actionSetExecutionFuturesKeyedByIdentifier;
@property (nonatomic) UIViewController<HUQuickControlPresentationHost> *ancestorQuickControlHostAtPresentationTime;
@property (nonatomic, readonly) UICollectionViewLayout<HUControllableCollectionViewLayout> *collectionViewLayout;
@property (nonatomic, readonly) unsigned long long contentColorStyle;
@property (nonatomic, retain) UIGestureRecognizer *contextualTapGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFItemManager *itemManager;
@property (nonatomic) <HULockAuthorizationDelegate> *lockAuthorizationDelegate;
@property (nonatomic, retain) HUQuickControlPresentationCoordinator *quickControlPresentationCoordinator;
@property (nonatomic) <HUQuickControlPresentationDelegate> *quickControlPresentationDelegate;
@property (nonatomic, retain) UILongPressGestureRecognizer *reorderGestureRecognizer;
@property (nonatomic, retain) HFItem<NSCopying> *selectedContextualMenuItem;
@property (readonly) Class superclass;
@property (nonatomic) bool useCustomDragAndDrop;
@property (nonatomic) bool viewAppeared;

- (void).cxx_destruct;
- (id)_ancestorQuickControlPresentationHost;
- (id)_childItemsForItem:(id)arg1;
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;
- (void)_handleContextualGesture:(id)arg1;
- (void)_handleReorderGesture:(id)arg1;
- (bool)_hasTapActionForItem:(id)arg1;
- (bool)_isMultiServiceAccessory:(id)arg1;
- (id)_itemForServiceControlPresentationAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_itemSetDidChange;
- (void)_logUserMetricsAfterTapOfItem:(id)arg1;
- (id)_performTapActionForItem:(id)arg1;
- (void)_reorderGestureDidBegin:(id)arg1;
- (void)_reorderGestureDidChange:(id)arg1;
- (void)_reorderGestureDidEnd:(id)arg1 finished:(bool)arg2;
- (void)_showQuickControlsForSelectedMenuItem;
- (void)_showSettingsForSelectedMenuItem;
- (void)_updateEditingStateForCell:(id)arg1;
- (void)_updateReorderingGestureRecognizer;
- (id)_visibleCellForItem:(id)arg1;
- (id)actionSetExecutionFuturesKeyedByIdentifier;
- (bool)alwaysAllowReordering;
- (id)ancestorQuickControlHostAtPresentationTime;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canReorderItemAtIndexPath:(id)arg1;
- (void)childViewController:(id)arg1 didEndQuickControlsPresentation:(id)arg2;
- (void)childViewController:(id)arg1 willBeginQuickControlsPresentation:(id)arg2;
- (bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (unsigned long long)contentColorStyle;
- (id)contextualTapGestureRecognizer;
- (id)customContextualMenuItemsForItem:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)lockAuthorizationDelegate;
- (id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentationCoordinator:(id)arg1 applyOverrideAttributes:(id)arg2 toItem:(id)arg3;
- (void)presentationCoordinator:(id)arg1 clearOverrideAttributesForItem:(id)arg2;
- (id)presentationCoordinator:(id)arg1 contextForPresentationAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)presentationCoordinator:(id)arg1 didEndPresentationWithContext:(id)arg2;
- (void)presentationCoordinator:(id)arg1 didRecognizeTapForItem:(id)arg2;
- (bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (void)presentationCoordinator:(id)arg1 willBeginPresentationWithContext:(id)arg2;
- (void)presentationCoordinator:(id)arg1 willEndPresentationWithContext:(id)arg2;
- (id)quickControlPresentationContextForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)quickControlPresentationContextForUUID:(id)arg1 type:(unsigned long long)arg2;
- (id)quickControlPresentationCoordinator;
- (id)quickControlPresentationDelegate;
- (id)reorderGestureRecognizer;
- (id)reorderableHomeKitItemListForSection:(long long)arg1;
- (bool)requiresUnlockToPerformActionForItem:(id)arg1;
- (id)selectedContextualMenuItem;
- (void)setActionSetExecutionFuturesKeyedByIdentifier:(id)arg1;
- (void)setAncestorQuickControlHostAtPresentationTime:(id)arg1;
- (void)setContentColorStyle:(unsigned long long)arg1;
- (void)setContextualTapGestureRecognizer:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setExecutionFuture:(id)arg1 forActionSet:(id)arg2;
- (void)setLockAuthorizationDelegate:(id)arg1;
- (void)setQuickControlPresentationCoordinator:(id)arg1;
- (void)setQuickControlPresentationDelegate:(id)arg1;
- (void)setReorderGestureRecognizer:(id)arg1;
- (void)setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2;
- (void)setSelectedContextualMenuItem:(id)arg1;
- (void)setUseCustomDragAndDrop:(bool)arg1;
- (void)setViewAppeared:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitCollectionForPresentationCoordinator:(id)arg1;
- (bool)useCustomDragAndDrop;
- (bool)viewAppeared;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end