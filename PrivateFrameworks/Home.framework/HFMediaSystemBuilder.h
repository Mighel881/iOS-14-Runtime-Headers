/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMediaSystemBuilder : HFItemBuilder <HFMediaAccountArbitratingBuilderProtocol, HFServiceLikeBuilder> {
    HFAppleMusicAccountArbitrator * _accountArbitrator;
    HMAccessory * _firstSetupSourceAccessory;
    bool  _hasSetRoom;
    HMMediaSystemBuilder * _homeKitMediaSystemBuilder;
    <HFIconDescriptor> * _iconDescriptor;
    bool  _isCreatingMediaSystem;
    bool  _isFavorite;
    HFNamingComponents * _namingComponent;
    HFRoomBuilder * _roomBuilder;
}

@property (nonatomic, readonly) NSSet *accessories;
@property (nonatomic, retain) HFAppleMusicAccountArbitrator *accountArbitrator;
@property (nonatomic, readonly) NSArray *availableIconDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMAccessory *firstSetupSourceAccessory;
@property (nonatomic) bool hasSetRoom;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMMediaSystemBuilder *homeKitMediaSystemBuilder;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic) bool isCreatingMediaSystem;
@property (nonatomic) bool isFavorite;
@property (nonatomic, readonly) HMMediaSystem *mediaSystem;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) HFNamingComponents *namingComponent;
@property (nonatomic, readonly) NSString *originalName;
@property (nonatomic, retain) HFRoomBuilder *room;
@property (nonatomic, retain) HFRoomBuilder *roomBuilder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFavoriting;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)_commitChangesToMediaSystemBuilder;
- (id)_defaultName;
- (id)_firstUnpopulatedRole;
- (id)_rooms;
- (id)_updateAssistantAccessControl;
- (id)_updateFavorite;
- (id)_updateRoom;
- (id)accessories;
- (id)accessoryForRole:(id)arg1;
- (id)accountArbitrator;
- (void)addAccessory:(id)arg1;
- (void)addAccessory:(id)arg1 role:(id)arg2;
- (id)commitItem;
- (id)description;
- (id)firstSetupSourceAccessory;
- (bool)hasSetRoom;
- (id)homeKitMediaSystemBuilder;
- (id)iconDescriptor;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (bool)isCreatingMediaSystem;
- (bool)isFavorite;
- (id)mediaSystem;
- (id)name;
- (id)namingComponent;
- (id)originalName;
- (void)removeAccessory:(id)arg1;
- (id)removeItemFromHome;
- (id)roleForAccessory:(id)arg1;
- (id)room;
- (id)roomBuilder;
- (void)setAccountArbitrator:(id)arg1;
- (void)setHasSetRoom:(bool)arg1;
- (void)setHomeKitMediaSystemBuilder:(id)arg1;
- (void)setIconDescriptor:(id)arg1;
- (void)setIsCreatingMediaSystem:(bool)arg1;
- (void)setIsFavorite:(bool)arg1;
- (void)setMediaSystem:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNamingComponent:(id)arg1;
- (void)setRoom:(id)arg1;
- (void)setRoomBuilder:(id)arg1;
- (bool)shouldAllowAddingAccessory:(id)arg1;
- (bool)supportsFavoriting;
- (bool)swapRoles;

@end