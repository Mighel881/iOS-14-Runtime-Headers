/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSCombinedListViewController : CSCoverSheetViewControllerBase <CSAppearanceProviding, CSApplicationInformationObserving, CSDNDBedtimeControllerObserver, CSDNDBedtimeGreetingDelegate, CSDateViewScrolling, CSHomeGestureParticipating, CSNotificationAdjunctListViewControllerDelegate, CSNotificationDestination, CSProximitySensorProviderObserver, CSStatusBarBackgroundIntersecting, DNDStateUpdateListener, NCNotificationStructuredListContentObserver, NCNotificationStructuredListViewControllerDelegate, PTSettingsKeyObserver, SBFMotionGestureObserver, SBUICoronaAnimationControllerParticipant, _UIGestureStudyInteractionDelegate> {
    NCNotificationRequest * _activeRaiseToListenNotificationRequest;
    CSNotificationAdjunctListViewController * _adjunctListViewController;
    <CSApplicationInforming> * _applicationInformer;
    <SBFAuthenticationStatusProvider> * _authenticationStatusProvider;
    NSMutableSet * _backgroundAnimationDisabledReasons;
    <SBUIBiometricResource> * _biometricResource;
    double  _cachedAdjunctHeight;
    UIViewController * _captureOnlyMaterialViewController;
    SBFTouchPassThroughView * _clippingView;
    bool  _confirmedNotInPocket;
    bool  _coverSheetWasDismissed;
    CSComponent * _dateViewComponent;
    SBFTouchPassThroughView * _debugViewLeft;
    SBFTouchPassThroughView * _debugViewRight;
    <CSCombinedListViewControllerDelegate> * _delegate;
    <CSDeviceOrientationProviding> * _deviceOrientationProvider;
    <BSInvalidatable> * _deviceWakeProximitySensorAssertion;
    bool  _disableBackgroundAnimation;
    bool  _disableScrolling;
    bool  _dismissGestureDisabled;
    NSMutableSet * _dismissGestureDisabledReasons;
    <CSNotificationDispatcher> * _dispatcher;
    CSDNDBedtimeController * _dndBedtimeController;
    CSDNDBedtimeGreetingViewController * _dndBedtimeGreetingViewController;
    bool  _dndDrivingModeActive;
    DNDEventBehaviorResolutionService * _dndEventBehaviorResolutionService;
    bool  _dndNotificationDeliveryDelayActive;
    DNDStateService * _dndStateService;
    <BSInvalidatable> * _faceDetectWantedAssertion;
    bool  _faceInView;
    NSMutableSet * _footerCallToActionHiddenReasons;
    CSComponent * _footerCallToActionLabelComponent;
    bool  _footerCallToActionLabelHidden;
    double  _footerOffset;
    _UIGestureStudyInteraction * _gestureStudyInteraction;
    bool  _hasProximitySensor;
    bool  _hasUserInteraction;
    bool  _historyWasRevealed;
    CSComponent * _homeAffordanceComponent;
    <CSHomeAffordanceControlling> * _homeAffordanceController;
    bool  _homeButtonPressDetected;
    CSLayoutStrategy * _layoutStrategy;
    _UILegibilitySettings * _legibilitySettings;
    bool  _liftDetected;
    bool  _listBeingLaidOut;
    bool  _listDismissingContent;
    bool  _listPresentingContent;
    bool  _listSuppressLongLookDismissal;
    bool  _lockButtonPressDetected;
    CSLockScreenSettings * _lockScreenSettings;
    bool  _notificationListHidden;
    NSMutableSet * _notificationListHiddenReasons;
    <BSInvalidatable> * _notificationLongPressProximitySensorAssertion;
    <CSNotificationPresenting> * _notificationPresenter;
    <CSPageViewControllerProtocol> * _page;
    bool  _presentationDirtiedAppearance;
    CSComponent * _proudLockComponent;
    bool  _proximitySensorCoveredSinceWake;
    <CSProximitySensorProviding> * _proximitySensorProvider;
    CSComponent * _quickActionsComponent;
    NSMutableSet * _quickActionsHiddenReasons;
    bool  _screenOn;
    NSDate * _screenOnTime;
    bool  _shouldPadBottomSpacingWhileDragging;
    BSTimer * _significantUserInteractionTimer;
    CSComponent * _statusBarBackgroundComponent;
    CSComponent * _statusBarComponent;
    NCNotificationStructuredListViewController * _structuredListViewController;
    <CSUnlockRequesting> * _unlockRequester;
}

@property (nonatomic, retain) NCNotificationRequest *activeRaiseToListenNotificationRequest;
@property (nonatomic, retain) CSNotificationAdjunctListViewController *adjunctListViewController;
@property (nonatomic, readonly, copy) NSString *appearanceIdentifier;
@property (nonatomic) <CSApplicationInforming> *applicationInformer;
@property (nonatomic) <SBFAuthenticationStatusProvider> *authenticationStatusProvider;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly) double clippingOffset;
@property (nonatomic, readonly, copy) NSSet *components;
@property (nonatomic) <SBFActionProviding> *contentActionProvider;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) SBFTouchPassThroughView *debugViewLeft;
@property (nonatomic, retain) SBFTouchPassThroughView *debugViewRight;
@property (nonatomic) <CSCombinedListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CSDeviceOrientationProviding> *deviceOrientationProvider;
@property (nonatomic, readonly) bool disableBackgroundAnimation;
@property (getter=_disableScrolling, setter=_setDisableScrolling:, nonatomic) bool disableScrolling;
@property (nonatomic, readonly) bool dismissGestureDisabled;
@property (nonatomic) <CSNotificationDispatcher> *dispatcher;
@property (nonatomic, readonly) double distanceFromBarToContent;
@property (getter=isDndDrivingModeActive, nonatomic) bool dndDrivingModeActive;
@property (nonatomic, retain) DNDEventBehaviorResolutionService *dndEventBehaviorResolutionService;
@property (getter=isDndNotificationDeliveryDelayActive, nonatomic) bool dndNotificationDeliveryDelayActive;
@property (nonatomic, retain) DNDStateService *dndStateService;
@property (nonatomic, readonly) bool footerCallToActionLabelHidden;
@property (nonatomic, readonly) bool hasContent;
@property (getter=_hasUserInteraction, setter=_setHasUserInteraction:, nonatomic) bool hasUserInteraction;
@property (nonatomic, readonly) bool hasVisibleContentToReveal;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CSHomeAffordanceControlling> *homeAffordanceController;
@property (nonatomic, retain) CSLayoutStrategy *layoutStrategy;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) NSString *listViewControllerBackgroundGroupName;
@property (nonatomic, retain) CSLockScreenSettings *lockScreenSettings;
@property (nonatomic, readonly) bool notificationListHidden;
@property (nonatomic, readonly) UIScrollView *notificationListScrollView;
@property (nonatomic, readonly) UIViewController *notificationListViewController;
@property (nonatomic) <CSNotificationPresenting> *notificationPresenter;
@property (nonatomic) <CSPageViewControllerProtocol> *page;
@property (nonatomic, readonly) long long participantState;
@property (getter=hasPresentationDirtiedAppearance, nonatomic) bool presentationDirtiedAppearance;
@property (nonatomic) <CSProximitySensorProviding> *proximitySensorProvider;
@property (getter=isShowingMediaControls, nonatomic, readonly) bool showingMediaControls;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double topContentInset;
@property (nonatomic) <CSUnlockRequesting> *unlockRequester;

- (void).cxx_destruct;
- (void)_addStateCaptureHandlers;
- (struct CGSize { double x1; double x2; })_adjunctListViewSize;
- (struct CGSize { double x1; double x2; })_adjunctListViewSizeIncludingSpacing;
- (bool)_allowNotificationsRevealPolicy;
- (bool)_allowsDateViewOrProudLockScroll;
- (struct CGPoint { double x1; double x2; })_determineMaxContentOffsetForContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)_disableScrolling;
- (void)_dismissDNDBedtimeGreetingViewAnimated:(bool)arg1;
- (void)_evaluateShouldShowGreeting:(id)arg1 animated:(bool)arg2;
- (void)_handleBiometricEvent:(unsigned long long)arg1;
- (bool)_hasUserInteraction;
- (void)_homeButtonPressDetected;
- (id)_identifierForNotificationRequest:(id)arg1;
- (bool)_isClockSnoozeAlarmNotificationRequest:(id)arg1;
- (void)_layoutListView;
- (void)_liftToWakeGestureDetected;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_listViewDefaultContentInsets;
- (void)_lockButtonPressDetected;
- (double)_minInsetsToPushDateOffScreen;
- (double)_minListHeightForPadding;
- (void)_performSelfCorrectingListViewAction:(id /* block */)arg1;
- (void)_requestAuthenticationWithCompletion:(id /* block */)arg1;
- (double)_sanitizedContentOffset:(double)arg1 forContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)_screenTimeExpirationApplicationsDidChange:(id)arg1;
- (void)_setDisableBackgroundAnimation:(bool)arg1 forReason:(id)arg2;
- (void)_setDisableScrolling:(bool)arg1;
- (void)_setDismissGestureDisabled:(bool)arg1 forReason:(id)arg2;
- (void)_setFooterCallToActionLabelHidden:(bool)arg1 forReason:(id)arg2;
- (void)_setHasUserInteraction:(bool)arg1;
- (void)_setListHasContent:(bool)arg1;
- (void)_setNotificationListHidden:(bool)arg1 forReason:(id)arg2;
- (void)_setQuickActionsHidden:(bool)arg1 forReason:(id)arg2;
- (bool)_shouldDNDDelayDeliveryOfNotificationRequest:(id)arg1;
- (bool)_shouldFilterNotificationRequest:(id)arg1;
- (bool)_shouldPadBottomSpacing;
- (bool)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1;
- (void)_startScreenOnTimer;
- (double)_statusBarHeight;
- (void)_stopScreenOnTimer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_suggestedListViewFrame;
- (void)_testingCoalesceExpandedBundleForNotificationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_testingExpandCoalescedBundleForNotificationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_testingNotificationRequestWithIdentifier:(id)arg1 sectionIdentifier:(id)arg2;
- (id)_threadIdentifierForNotificationRequest:(id)arg1;
- (void)_toggleGestureStudyInteractionIfNecessary;
- (void)_updateCaptureOnlyMaterialView;
- (void)_updateDeviceWakeProximitySensorAssertion;
- (void)_updateFaceDetectAssertion;
- (void)_updateListViewContentInset;
- (void)_updateNotificationLongPressProximitySensorAssertion;
- (void)_updatePresentation;
- (id)_updateProximitySensorAssertion:(id)arg1 wantsAssertion:(bool)arg2 forReason:(id)arg3;
- (void)_updateRaiseGestureDetectionForNotificationRequest:(id)arg1;
- (id)activeRaiseToListenNotificationRequest;
- (id)adjunctListViewController;
- (void)adjunctListViewController:(id)arg1 didUpdateWithSize:(struct CGSize { double x1; double x2; })arg2;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (id)applicationInformer;
- (void)applicationInformer:(id)arg1 updatedApplications:(id)arg2;
- (id)authenticationStatusProvider;
- (double)clippingOffset;
- (id)contentActionProvider;
- (void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2;
- (void)dealloc;
- (id)debugViewLeft;
- (id)debugViewRight;
- (double)defaultRestingOffsetExcludingAdjunct;
- (id)delegate;
- (id)deviceOrientationProvider;
- (void)didReceiveRaiseGesture;
- (bool)disableBackgroundAnimation;
- (void)dismissDNDBedtimeGreetingViewController:(id)arg1 animated:(bool)arg2;
- (bool)dismissGestureDisabled;
- (bool)dismissNotificationInLongLookAnimated:(bool)arg1;
- (id)dispatcher;
- (double)distanceFromBarToContent;
- (void)dndBedtimeControllerActiveStateDidChange:(id)arg1;
- (void)dndBedtimeControllerShowGreetingStateDidChange:(id)arg1 animated:(bool)arg2;
- (id)dndEventBehaviorResolutionService;
- (id)dndStateService;
- (struct CGSize { double x1; double x2; })effectiveContentSizeForScrollView:(id)arg1;
- (bool)footerCallToActionLabelHidden;
- (void)forceNotificationHistoryRevealed:(bool)arg1 animated:(bool)arg2;
- (id)groupNameBaseForAdjunctListViewController:(id)arg1;
- (bool)handleEvent:(id)arg1;
- (bool)hasContent;
- (bool)hasPresentationDirtiedAppearance;
- (bool)hasVisibleContentToReveal;
- (id)hideHomeAffordanceAnimationSettingsForNotificationStructuredListViewController:(id)arg1;
- (id)homeAffordanceController;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ownsHomeGesture:(bool)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetMarginsToMimicForAdjunctListViewController:(id)arg1;
- (double)interItemSpacingToMimicForAdjunctListViewController:(id)arg1;
- (bool)interpretsViewAsContent:(id)arg1;
- (bool)isDndDrivingModeActive;
- (bool)isDndNotificationDeliveryDelayActive;
- (bool)isNotificationContentExtensionVisible:(id)arg1;
- (bool)isPresentingNotificationInLongLook;
- (bool)isShowingMediaControls;
- (void)layoutListView;
- (id)layoutStrategy;
- (id)legibilitySettingsForNotificationStructuredListViewController:(id)arg1;
- (id)listViewControllerBackgroundGroupName;
- (id)lockScreenSettings;
- (id)metadataForTriggeredInteraction:(id)arg1;
- (void)migrateIncomingNotificationsToNotificationCenter;
- (bool)notificationListHidden;
- (id)notificationListScrollView;
- (id)notificationListViewController;
- (id)notificationPresenter;
- (void)notificationStructuredListViewController:(id)arg1 didBeginUserInteractionWithNotificationViewController:(id)arg2;
- (void)notificationStructuredListViewController:(id)arg1 didEndUserInteractionWithNotificationViewController:(id)arg2;
- (bool)notificationStructuredListViewController:(id)arg1 isClockNotificationRequest:(id)arg2;
- (id)notificationStructuredListViewController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (void)notificationStructuredListViewController:(id)arg1 presentingLongLook:(bool)arg2;
- (void)notificationStructuredListViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(id /* block */)arg5;
- (void)notificationStructuredListViewController:(id)arg1 requestsAuthenticationAndPerformBlock:(id /* block */)arg2;
- (void)notificationStructuredListViewController:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2;
- (void)notificationStructuredListViewController:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)notificationStructuredListViewController:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)notificationStructuredListViewController:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(bool)arg4 withParameters:(id)arg5 completion:(id /* block */)arg6;
- (id)notificationStructuredListViewController:(id)arg1 requestsSectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationStructuredListViewController:(id)arg1 setAllowsCriticalAlerts:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)notificationStructuredListViewController:(id)arg1 setAllowsNotifications:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)notificationStructuredListViewController:(id)arg1 setDeliverQuietly:(bool)arg2 forSectionIdentifier:(id)arg3;
- (bool)notificationStructuredListViewController:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2;
- (bool)notificationStructuredListViewController:(id)arg1 shouldDelayDeliveryOfNotificationRequest:(id)arg2;
- (bool)notificationStructuredListViewController:(id)arg1 shouldFilterNotificationRequest:(id)arg2;
- (void)notificationStructuredListViewController:(id)arg1 shouldFinishLongLookTransitionForNotificationRequest:(id)arg2 trigger:(long long)arg3 withCompletionBlock:(id /* block */)arg4;
- (void)notificationStructuredListViewControllerDidScrollToRevealNotificationHistory:(id)arg1;
- (void)notificationStructuredListViewControllerDidSignificantUserInteraction:(id)arg1;
- (bool)notificationStructuredListViewControllerShouldAllowLongPressGesture:(id)arg1;
- (bool)notificationStructuredListViewControllerShouldAllowNotificationHistoryReveal:(id)arg1;
- (bool)notificationStructuredListViewControllerShouldHintForDefaultAction:(id)arg1;
- (id)notificationUsageTrackingStateForNotificationStructuredListViewController:(id)arg1;
- (void)notificationsLoadedForSectionIdentifier:(id)arg1;
- (id)page;
- (void)performCustomTransitionToVisible:(bool)arg1 withAnimationSettings:(id)arg2 completion:(id /* block */)arg3;
- (void)postNotificationRequest:(id)arg1;
- (long long)presentationPriority;
- (long long)presentationTransition;
- (long long)presentationType;
- (id)proximitySensorProvider;
- (void)proximitySensorProvider:(id)arg1 objectWithinProximityDidChange:(bool)arg2;
- (void)rebuildEverythingForReason:(id)arg1;
- (void)resetContentOffset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setActiveRaiseToListenNotificationRequest:(id)arg1;
- (void)setAdjunctListViewController:(id)arg1;
- (void)setApplicationInformer:(id)arg1;
- (void)setAuthenticationStatusProvider:(id)arg1;
- (void)setContentActionProvider:(id)arg1;
- (void)setDebugViewLeft:(id)arg1;
- (void)setDebugViewRight:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceOrientationProvider:(id)arg1;
- (void)setDispatcher:(id)arg1;
- (void)setDndDrivingModeActive:(bool)arg1;
- (void)setDndEventBehaviorResolutionService:(id)arg1;
- (void)setDndNotificationDeliveryDelayActive:(bool)arg1;
- (void)setDndStateService:(id)arg1;
- (void)setHomeAffordanceController:(id)arg1;
- (void)setLayoutStrategy:(id)arg1;
- (void)setLockScreenSettings:(id)arg1;
- (void)setNotificationPresenter:(id)arg1;
- (void)setPage:(id)arg1;
- (void)setPresentationDirtiedAppearance:(bool)arg1;
- (void)setProximitySensorProvider:(id)arg1;
- (void)setUnlockRequester:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationStructuredListViewController:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (struct CGSize { double x1; double x2; })sizeToMimicForAdjunctListViewController:(id)arg1;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)structuredListContentChanged:(bool)arg1;
- (double)topContentInset;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationStructuredListViewController:(id)arg1;
- (id)unlockRequester;
- (void)updateAppearanceForHidden:(bool)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateAppearanceForStatusBarBackgroundHidden:(bool)arg1;
- (void)updateForLegibilitySettings:(id)arg1;
- (void)updateNotificationRequest:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)withdrawNotificationRequest:(id)arg1;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
