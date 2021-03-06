/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLVirtualResource : NSObject <PLValidatesResourceModel, PLWriteableResource> {
    <PLAssetID> * _assetID;
    <PLCodecIdentity> * _codecID;
    <PLResourceDataStore> * _dataStore;
    <PLResourceDataStoreKey> * _dataStoreKey;
    long long  _dataStoreSubtype;
    short  _localAvailabilityTarget;
    unsigned int  _orientation;
    int  _qualitySortValue;
    unsigned int  _recipeID;
    short  _remoteAvailability;
    short  _remoteAvailabilityTarget;
    unsigned int  _resourceType;
    float  _scale;
    NSDate * _trashedDate;
    short  _trashedState;
    <PLUniformTypeIdentifierIdentity> * _uniformTypeIdentifierID;
    long long  _unorientedHeight;
    long long  _unorientedWidth;
    unsigned int  _version;
}

@property (nonatomic, readonly, copy) <PLAssetID> *assetID;
@property (nonatomic, retain) <PLCodecIdentity> *codecID;
@property (nonatomic, readonly) unsigned long long cplType;
@property (nonatomic, readonly) long long dataLength;
@property (nonatomic, retain) <PLResourceDataStore> *dataStore;
@property (nonatomic, retain) <PLResourceDataStoreKey> *dataStoreKey;
@property (nonatomic) long long dataStoreSubtype;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedDataLength;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) short localAvailability;
@property (nonatomic, readonly) short localAvailabilityTarget;
@property (nonatomic) unsigned int orientation;
@property (nonatomic, readonly) long long orientedHeight;
@property (nonatomic, readonly) long long orientedWidth;
@property (nonatomic) int qualitySortValue;
@property (nonatomic) unsigned int recipeID;
@property (nonatomic) short remoteAvailability;
@property (nonatomic, readonly) short remoteAvailabilityTarget;
@property (nonatomic) unsigned int resourceType;
@property (nonatomic) float scale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *trashedDate;
@property (nonatomic, readonly) short trashedState;
@property (nonatomic, readonly) PLVirtualResourceUniformTypeIdentifierProxy *uniformTypeIdentifier;
@property (nonatomic, retain) <PLUniformTypeIdentifierIdentity> *uniformTypeIdentifierID;
@property (nonatomic) long long unorientedHeight;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (id)assetID;
- (id)codecID;
- (unsigned long long)cplType;
- (long long)dataLength;
- (id)dataStore;
- (id)dataStoreKey;
- (long long)dataStoreSubtype;
- (id)debugDescription;
- (long long)estimatedDataLength;
- (id)fileURL;
- (id)initWithAsset:(id)arg1 resourceType:(unsigned int)arg2 version:(unsigned int)arg3 recipeID:(unsigned int)arg4;
- (id)initWithRecipe:(id)arg1 forAsset:(id)arg2;
- (bool)isDefaultOrientation;
- (bool)isDerivative;
- (bool)isPlayableVideo;
- (short)localAvailability;
- (short)localAvailabilityTarget;
- (unsigned int)orientation;
- (long long)orientedHeight;
- (long long)orientedWidth;
- (id)photosCTLJSONDict;
- (int)qualitySortValue;
- (unsigned int)recipeID;
- (short)remoteAvailability;
- (short)remoteAvailabilityTarget;
- (unsigned int)resourceType;
- (float)scale;
- (float)scaleGivenAssetHasAdjustments:(bool)arg1 currentWidth:(long long)arg2 currentHeight:(long long)arg3;
- (void)setCodecID:(id)arg1;
- (void)setDataStore:(id)arg1;
- (void)setDataStoreKey:(id)arg1;
- (void)setDataStoreSubtype:(long long)arg1;
- (void)setOrientation:(unsigned int)arg1;
- (void)setQualitySortValue:(int)arg1;
- (void)setRecipeID:(unsigned int)arg1;
- (void)setRemoteAvailability:(short)arg1;
- (void)setResourceType:(unsigned int)arg1;
- (void)setScale:(float)arg1;
- (void)setUniformTypeIdentifierID:(id)arg1;
- (void)setUnorientedHeight:(long long)arg1;
- (void)setUnorientedWidth:(long long)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)singleLineDescription;
- (id)trashedDate;
- (short)trashedState;
- (id)uniformTypeIdentifier;
- (id)uniformTypeIdentifierID;
- (long long)unorientedHeight;
- (long long)unorientedWidth;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (unsigned int)version;

@end
