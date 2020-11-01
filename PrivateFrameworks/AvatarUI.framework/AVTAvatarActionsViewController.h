/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarActionsViewController : UIViewController <AVTAvatarActionsControllerDelegate, AVTFaceTrackingManagerDelegate, AVTToolBarDelegate, AVTUIControllerPresentationDelegate, UINavigationControllerDelegate> {
    AVTAvatarInlineActionsController * _actionsController;
    bool  _allowFacetracking;
    AVTImageTransitioningContainerView * _avatarContainer;
    AVTViewSession * _avtViewSession;
    UIStackView * _buttonsView;
    <AVTAvatarActionsViewControllerLayout> * _currentLayout;
    <AVTAvatarActionsViewControllerDelegate> * _delegate;
    AVTAvatarEditorViewController * _editorViewController;
    AVTUIEnvironment * _environment;
    bool  _isAnimating;
    id /* block */  _postSessionDidBecomeActiveHandler;
    AVTViewSessionProvider * _sessionProvider;
    UITapGestureRecognizer * _tapGestureRecognizer;
    AVTToolBar * _toolbar;
    UIImageView * _transitionImageView;
}

@property (nonatomic, retain) AVTAvatarInlineActionsController *actionsController;
@property (nonatomic) bool allowFacetracking;
@property (nonatomic, retain) AVTImageTransitioningContainerView *avatarContainer;
@property (nonatomic, retain) AVTViewSession *avtViewSession;
@property (nonatomic, retain) UIStackView *buttonsView;
@property (nonatomic, retain) <AVTAvatarActionsViewControllerLayout> *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTAvatarActionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) AVTAvatarEditorViewController *editorViewController;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAnimating;
@property (nonatomic, copy) id /* block */ postSessionDidBecomeActiveHandler;
@property (nonatomic, readonly) AVTViewSessionProvider *sessionProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, retain) AVTToolBar *toolbar;
@property (nonatomic, retain) UIImageView *transitionImageView;

- (void).cxx_destruct;
- (id)actionsController;
- (void)actionsController:(id)arg1 didAddRecord:(id)arg2;
- (void)actionsController:(id)arg1 didCancelEditingRecord:(id)arg2;
- (void)actionsController:(id)arg1 didDeleteRecord:(id)arg2 withRecordUpdate:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)actionsController:(id)arg1 didDuplicateToRecord:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)actionsController:(id)arg1 didEditRecord:(id)arg2;
- (void)actionsController:(id)arg1 presentAlertController:(id)arg2;
- (void)actionsControllerDidFinish:(id)arg1;
- (void)actionsControllerDidUpdateActions:(id)arg1;
- (id)actionsModel:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalSafeAreaInsets;
- (bool)allowFacetracking;
- (void)applyLayout:(id)arg1;
- (id)avatarContainer;
- (id)avtViewSession;
- (void)beginAVTViewSessionWithDidBeginBlock:(id /* block */)arg1;
- (void)beginUsingAVTViewFromSession:(id)arg1;
- (id)buttonsView;
- (void)configureAVTViewSession:(id)arg1 withAvatarRecord:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)configureNavigationItems;
- (void)configureUserInfoLabel;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)controllerPresentationWillObstructView:(id)arg1;
- (void)createTransitionImageViewIfNeeded;
- (id)currentLayout;
- (id)delegate;
- (double)deleteMoveInDelay;
- (double)deleteMoveInDuration;
- (void)didTapAvatarView:(id)arg1;
- (void)didTapDone:(id)arg1;
- (void)dismissEditorViewController:(id)arg1 forActionsController:(id)arg2 wasCreate:(bool)arg3 didEdit:(bool)arg4 animated:(bool)arg5 completion:(id /* block */)arg6;
- (double)duplicateScaleDelay;
- (double)duplicateScaleDuration;
- (id)editorViewController;
- (id)environment;
- (id)initWithAVTViewSessionProvider:(id)arg1 actionsController:(id)arg2 environment:(id)arg3;
- (long long)interfaceOrientationForFaceTrackingManager:(id)arg1;
- (bool)isAnimating;
- (void)layoutViewForActionsController;
- (void)loadView;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)performEdit;
- (void)performTransitionAfterDeleteToRecord:(id)arg1 fromLeft:(bool)arg2 previousRecordImage:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)performTransitionAfterDuplicateToRecord:(id)arg1 previousRecordImage:(id)arg2 completionBlock:(id /* block */)arg3;
- (id /* block */)postSessionDidBecomeActiveHandler;
- (void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)presentEditorViewController:(id)arg1 forActionsController:(id)arg2 isCreate:(bool)arg3;
- (void)rebuildLayout;
- (id)sessionProvider;
- (void)setActionsController:(id)arg1;
- (void)setAllowFacetracking:(bool)arg1;
- (void)setAvatarContainer:(id)arg1;
- (void)setAvtViewSession:(id)arg1;
- (void)setButtonsView:(id)arg1;
- (void)setCurrentLayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditorViewController:(id)arg1;
- (void)setIsAnimating:(bool)arg1;
- (void)setPostSessionDidBecomeActiveHandler:(id /* block */)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setToolbar:(id)arg1;
- (void)setTransitionImageView:(id)arg1;
- (id)tapGestureRecognizer;
- (id)toolbar;
- (void)toolbar:(id)arg1 didSelectButton:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)transitionImageView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end