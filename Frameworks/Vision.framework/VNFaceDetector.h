/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceDetector : VNDetector <VNDetectorKeyProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (void)fullyPopulateConfigurationOptions:(id)arg1;
+ (void)printDebugInfo:(id)arg1 facesDataRaw:(struct vector<vision::mod::DetectedObject, std::__1::allocator<vision::mod::DetectedObject> > { struct DetectedObject {} *x1; struct DetectedObject {} *x2; struct __compressed_pair<vision::mod::DetectedObject *, std::__1::allocator<vision::mod::DetectedObject> > { struct DetectedObject {} *x_3_1_1; } x3; }*)arg2 faceDetectorBGRAImage:(struct __CVBuffer { }*)arg3 tempImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg4;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (bool)shouldDumpDebugIntermediates;

- (void)purgeIntermediates;

@end