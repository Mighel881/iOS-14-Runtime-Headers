/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlMediaPlayerViewController : HUQuickControlViewController <MRPlatterViewControllerDelegate> {
    long long  _mediaAccessoryItemType;
    MRPlatterViewController * _mediaControlViewController;
    NSArray * _mediaControlViewControllerConstraints;
    NSString * _mediaRoutingIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mediaAccessoryItemType;
@property (nonatomic, retain) MRPlatterViewController *mediaControlViewController;
@property (nonatomic, retain) NSArray *mediaControlViewControllerConstraints;
@property (nonatomic, retain) NSString *mediaRoutingIdentifier;
@property (readonly) Class superclass;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (void)_addMediaControlView;
- (bool)_canShowWhileLocked;
- (void)_updateConstraints;
- (void)_updateMediaControlAppearanceForTraitCollection:(id)arg1;
- (bool)hasSingleControlView;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (long long)mediaAccessoryItemType;
- (id)mediaControlViewController;
- (id)mediaControlViewControllerConstraints;
- (id)mediaRoutingIdentifier;
- (void)platterViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2;
- (void)platterViewController:(id)arg1 didUpdateEndpointWithReason:(id)arg2;
- (void)setMediaControlViewController:(id)arg1;
- (void)setMediaControlViewControllerConstraints:(id)arg1;
- (void)setMediaRoutingIdentifier:(id)arg1;
- (void)setPreferredFrameLayoutGuide:(id)arg1;
- (id)title;
- (void)viewDidLoad;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
