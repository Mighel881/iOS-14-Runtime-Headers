/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAppleMediaAccessory : HMDMediaAccessory <HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, HMDAccessoryUserManagement, HMDDeviceControllerDelegate, HMFLogging> {
    HMDDevice * _device;
    HMDDeviceController * _deviceController;
    id /* block */  _deviceMediaRouteIdentifierFactory;
    bool  _deviceReachable;
    bool  _fixedPairingIdentityInCloud;
    HMFPairingIdentity * _lastCreatedPairingIdentity;
    HMFWiFiNetworkInfo * _lastStagedWifiNetworkInfo;
    <HMDAppleMediaAccessoryModelDataSource> * _modelDataSource;
    NSNotificationCenter * _notificationCenter;
    HMFPairingIdentity * _pairingIdentity;
    HMDRemoteLoginHandler * _remoteLoginHandler;
    id /* block */  _settingsConnectionFactory;
    HMDAccessorySettingsController * _settingsController;
    HMFSoftwareVersion * _softwareVersion;
    NSArray * _supportedMultiUserLanguageCodes;
    unsigned long long  _supportedStereoPairVersions;
    HMDAccessorySymptomHandler * _symptomsHandler;
    HMDTargetControlManager * _targetControlManager;
    HMFWiFiManager * _wifiManager;
    HMFWiFiNetworkInfo * _wifiNetworkInfo;
}

@property (readonly) HMDBackingStore *backingStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (readonly, copy) id /* block */ deviceMediaRouteIdentifierFactory;
@property (getter=isDeviceReachable, nonatomic) bool deviceReachable;
@property (nonatomic) bool fixedPairingIdentityInCloud;
@property (readonly) unsigned long long hash;
@property double homepodSettingsCreationTimestamp;
@property double homepodSetupLatency;
@property (nonatomic, retain) HMFPairingIdentity *lastCreatedPairingIdentity;
@property (retain) HMFWiFiNetworkInfo *lastStagedWifiNetworkInfo;
@property (readonly) <HMDAppleMediaAccessoryModelDataSource> *modelDataSource;
@property (retain) NSNotificationCenter *notificationCenter;
@property (readonly, copy) HMFPairingIdentity *pairingIdentity;
@property (readonly) HMDRemoteLoginHandler *remoteLoginHandler;
@property (copy) id /* block */ settingsConnectionFactory;
@property (retain) HMDAccessorySettingsController *settingsController;
@property (retain) HMFActivity *setupActivity;
@property double setupStartTimestamp;
@property (readonly) HMFSoftwareVersion *softwareVersion;
@property (readonly) Class superclass;
@property (retain) NSArray *supportedMultiUserLanguageCodes;
@property unsigned long long supportedStereoPairVersions;
@property (readonly) bool supportsUserManagement;
@property (readonly) HMDAccessorySymptomHandler *symptomsHandler;
@property (nonatomic, retain) HMDTargetControlManager *targetControlManager;
@property (retain) HMFWiFiManager *wifiManager;
@property (readonly) HMFWiFiNetworkInfo *wifiNetworkInfo;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (bool)shouldAcceptMessage:(id)arg1 home:(id)arg2 privilege:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_allowSoftwareUpdateChangeFromSource:(unsigned long long)arg1;
- (void)_applySoftwareUpdateModel:(id)arg1 completion:(id /* block */)arg2;
- (id)_createMediaProfile;
- (void)_fetchAvailableUpdate:(id)arg1;
- (void)_fetchMultiUserLanguages;
- (void)_fixCloudKeyIfNeeded;
- (void)_handleUpdatedName:(id)arg1;
- (void)_registerForMessages;
- (void)_relayRequestMessage:(id)arg1 responseHandler:(id /* block */)arg2;
- (bool)_shouldFilterAccessoryProfile:(id)arg1;
- (void)_startUpdate:(id)arg1;
- (void)_updateSoftwareVersion:(id)arg1;
- (void)_updateSupportedStereoPairVersions:(unsigned long long)arg1;
- (void)accessorySettingsController:(id)arg1 saveWithReason:(id)arg2;
- (void)accessorySettingsController:(id)arg1 saveWithReason:(id)arg2 model:(id)arg3;
- (void)addAdvertisement:(id)arg1;
- (void)addUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)assistantAccessControlModelWithRemovedAccessoriesForAccessorySettingsController:(id)arg1;
- (id)assistantObject;
- (void)autoConfigureTargetControllers;
- (id)backingStore;
- (id)backingStoreObjects:(long long)arg1;
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(bool)arg4;
- (void)createPairingIdentity;
- (void)dealloc;
- (id)description;
- (id)device;
- (void)deviceController:(id)arg1 didUpdateDevice:(id)arg2;
- (id /* block */)deviceMediaRouteIdentifierFactory;
- (id)deviceMonitor;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (bool)fixedPairingIdentityInCloud;
- (void)handleCurrentDeviceUpdated:(id)arg1;
- (void)handleCurrentNetworkChangedNotification:(id)arg1;
- (void)handleDeleteSiriHistoryRequest:(id)arg1;
- (void)handleDeviceIsNotReachable:(id)arg1;
- (void)handleDeviceIsPublishingChangedNotification:(id)arg1;
- (void)handleDeviceIsReachable:(id)arg1;
- (double)homepodSettingsCreationTimestamp;
- (double)homepodSetupLatency;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceController:(id)arg1 deviceIdentifierFactory:(id /* block */)arg2;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (bool)isCurrentAccessory;
- (bool)isDeviceReachable;
- (bool)isMultiUserEnabledForAccessorySettingsController:(id)arg1;
- (bool)isRemotelyReachable;
- (id)lastCreatedPairingIdentity;
- (id)lastStagedWifiNetworkInfo;
- (id)logIdentifier;
- (id)messageReceiverChildren;
- (id)messageSendPolicy;
- (id)modelDataSource;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)modelsToMakeSettingsForController:(id)arg1 parentUUID:(id)arg2;
- (id)modelsToMigrateSettingsForController:(id)arg1;
- (id)notificationCenter;
- (void)notifyClientsOfUpdatedAccessoryControllableValue:(bool)arg1;
- (id)pairingIdentity;
- (void)pairingsWithCompletionHandler:(id /* block */)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (long long)reachableTransports;
- (void)registerForPublishingNotifications;
- (id)remoteLoginHandler;
- (id)remoteMessageDestination;
- (id)remoteMessageDestinationForAccessorySettingsController:(id)arg1 target:(id)arg2;
- (void)removeAdvertisement:(id)arg1;
- (void)removeUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)requiresHomeAppForManagement;
- (void)runTransactionWithModel:(id)arg1 completion:(id /* block */)arg2;
- (void)runTransactionWithModels:(id)arg1 completion:(id /* block */)arg2;
- (id)runtimeState;
- (void)setDeviceReachable:(bool)arg1;
- (void)setFixedPairingIdentityInCloud:(bool)arg1;
- (void)setHomepodSettingsCreationTimestamp:(double)arg1;
- (void)setHomepodSetupLatency:(double)arg1;
- (void)setLastCreatedPairingIdentity:(id)arg1;
- (void)setLastStagedWifiNetworkInfo:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setPairingIdentity:(id)arg1;
- (void)setRemotelyReachable:(bool)arg1;
- (void)setSettingsConnectionFactory:(id /* block */)arg1;
- (void)setSettingsController:(id)arg1;
- (void)setSetupActivity:(id)arg1;
- (void)setSetupStartTimestamp:(double)arg1;
- (void)setSoftwareVersion:(id)arg1;
- (void)setSupportedMultiUserLanguageCodes:(id)arg1;
- (void)setSupportedStereoPairVersions:(unsigned long long)arg1;
- (void)setTargetControlManager:(id)arg1;
- (void)setWifiManager:(id)arg1;
- (void)setWifiNetworkInfo:(id)arg1;
- (id /* block */)settingsConnectionFactory;
- (id)settingsController;
- (id)setupActivity;
- (double)setupStartTimestamp;
- (bool)shouldUpdateWithDevice:(id)arg1;
- (id)softwareVersion;
- (void)startMonitoringReachability;
- (id)supportedMultiUserLanguageCodes;
- (id)supportedMultiUserLanguageCodesForAccessorySettingsController:(id)arg1;
- (unsigned long long)supportedStereoPairVersions;
- (bool)supportsAnnounce;
- (bool)supportsCompanionInitiatedRestart;
- (bool)supportsDoorbellChime;
- (bool)supportsMediaContentProfile;
- (bool)supportsMultiUser;
- (bool)supportsMusicAlarm;
- (bool)supportsPersonalRequests;
- (bool)supportsSettings;
- (bool)supportsSoftwareUpdate;
- (bool)supportsTargetControl;
- (bool)supportsThirdPartyMusic;
- (bool)supportsUserManagement;
- (id)symptomsHandler;
- (id)targetControlManager;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (void)updateRechabilityFromDevicePublishingState;
- (void)updateWiFiNetworkInfo;
- (void)updateWithDevice:(id)arg1;
- (id)wifiManager;
- (id)wifiNetworkInfo;

@end