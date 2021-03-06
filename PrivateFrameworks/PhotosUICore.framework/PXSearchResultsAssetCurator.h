/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSearchResultsAssetCurator : NSObject

+ (id)_fetchAssetsForAssetUUIDs:(id)arg1;
+ (id)_fetchResultForCuratedAssets:(id)arg1;
+ (id)_sampledAssetUUIDsFromAssetResults:(id)arg1 curatedAssetLimit:(unsigned long long)arg2 priorityAssetUUID:(id)arg3 maxNumberToSample:(unsigned long long)arg4 rangeToSample:(unsigned long long)arg5;
+ (id)_sortedCuratedAssetsFromSampledAssets:(id)arg1 priorityAssetUUID:(id)arg2 curatedAssetLimit:(unsigned long long)arg3;
+ (void)performCurationForAssetResults:(id)arg1 searchQuery:(id)arg2 completion:(id /* block */)arg3;

@end
