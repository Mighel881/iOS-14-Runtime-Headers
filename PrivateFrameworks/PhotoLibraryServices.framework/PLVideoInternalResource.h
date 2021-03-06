/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLVideoInternalResource : NSObject <PLVideoResource> {
    PLInternalResource * _backingResource;
}

@property (nonatomic, readonly) PLInternalResource *backingResource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)deviceSupportsHDR;

- (void).cxx_destruct;
- (id)backingResource;
- (id)fileURLIfLocal;
- (bool)hasAssociatedMediaMetadata;
- (id)initWithBackingResource:(id)arg1;
- (bool)isDownloadable;
- (bool)isEqual:(id)arg1;
- (bool)isHDRDerivative;
- (bool)isHDROrSDRDependingOnMasterVideo;
- (bool)isLocallyAvailable;
- (bool)isLocallyGeneratable;
- (bool)isMediumHighQuality;
- (bool)isOriginalVideo;
- (bool)isOriginalVideoComplement;
- (bool)isPlayable;
- (bool)isSDRFallback;
- (bool)isStreamable;
- (bool)matchesOrExceedsQualityLevel:(unsigned int)arg1;
- (id)uniformTypeIdentifier;
- (unsigned int)version;

@end
