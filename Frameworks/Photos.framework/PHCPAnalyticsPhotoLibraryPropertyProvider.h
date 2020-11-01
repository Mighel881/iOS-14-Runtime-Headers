/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCPAnalyticsPhotoLibraryPropertyProvider : NSObject <CPAnalyticsPhotoKitPropertyProvider> {
    CPLStatus * _cplStatus;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) CPLStatus *cplStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetchLibrarySummary;
- (id)_librarySizeRange:(long long)arg1;
- (id)cplStatus;
- (id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)photoLibrary;
- (void)registerSystemProperties:(id)arg1;

@end