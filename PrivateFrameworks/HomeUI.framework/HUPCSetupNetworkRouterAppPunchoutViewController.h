/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPCSetupNetworkRouterAppPunchoutViewController : PRXCardContentViewController <HFSetupPairingPopupAppPunchout> {
    HULinkedApplicationItem * _linkedApplicationItem;
    <HFSetupPairingPopupDelegate> * _popupDelegate;
    PRXAction * _punchOutAction;
    HFAppPunchoutRequest * _punchoutRequest;
    HMSetupAccessoryDescription * _setupAccessoryDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HULinkedApplicationItem *linkedApplicationItem;
@property (nonatomic, readonly) <HFSetupPairingPopupDelegate> *popupDelegate;
@property (nonatomic, readonly) unsigned long long popupType;
@property (nonatomic, readonly) PRXAction *punchOutAction;
@property (nonatomic, retain) HFAppPunchoutRequest *punchoutRequest;
@property (nonatomic, readonly) HMSetupAccessoryDescription *setupAccessoryDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPressed:(id)arg1;
- (id)_lookUpSoftwareAndUpdateUI;
- (id)initWithPopupDelegate:(id)arg1 setupAccessoryDescription:(id)arg2;
- (id)linkedApplicationItem;
- (id)popupDelegate;
- (unsigned long long)popupType;
- (id)punchOutAction;
- (id)punchoutRequest;
- (void)setLinkedApplicationItem:(id)arg1;
- (void)setPunchoutRequest:(id)arg1;
- (id)setupAccessoryDescription;
- (void)viewDidLoad;

@end
