/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRAWFilterImpl : CIFilter {
    NSDictionary * _baseImageProperties;
    bool  _calledDealloc;
    NSNumber * _defaultOrientation;
    NSArray * _filters;
    CIImage * _inputImage;
    NSArray * _inputImageAndProperties;
    struct CGImageSource { } * _inputImageSource;
    bool  _isRawSource;
    struct CGSize { 
        double width; 
        double height; 
    }  _nativeSize;
    NSDictionary * _rawDictionary;
    NSDictionary * _rawReconstructionDefaultsDictionary;
    NSArray * _supportedDecoderVersions;
    NSArray * _supportedSushiModes;
    NSObject * _typeIdentifierHint;
    NSNumber * inputBaselineExposure;
    NSNumber * inputBias;
    NSNumber * inputBoost;
    NSNumber * inputBoostShadowAmount;
    NSNumber * inputColorNoiseReductionAmount;
    NSString * inputDecoderVersion;
    NSNumber * inputDisableGamutMap;
    NSNumber * inputDraftMode;
    NSNumber * inputEV;
    NSNumber * inputEnableEDRMode;
    NSNumber * inputEnableNoiseTracking;
    NSNumber * inputEnableSharpening;
    NSNumber * inputEnableVendorLensCorrection;
    NSNumber * inputHueMagBM;
    NSNumber * inputHueMagCB;
    NSNumber * inputHueMagGC;
    NSNumber * inputHueMagMR;
    NSNumber * inputHueMagRY;
    NSNumber * inputHueMagYG;
    NSNumber * inputIgnoreOrientation;
    NSNumber * inputImageOrientation;
    CIFilter * inputLinearSpaceFilter;
    NSNumber * inputLuminanceNoiseReductionAmount;
    NSNumber * inputMoireAmount;
    NSNumber * inputNeutralChromaticityX;
    NSNumber * inputNeutralChromaticityY;
    CIVector * inputNeutralLocation;
    NSNumber * inputNeutralTemperature;
    NSNumber * inputNeutralTint;
    NSNumber * inputNoiseReductionAmount;
    NSNumber * inputNoiseReductionContrastAmount;
    NSNumber * inputNoiseReductionDetailAmount;
    NSNumber * inputNoiseReductionSharpnessAmount;
    NSString * inputRequestedSushiMode;
    NSNumber * inputReturnDemosaiced;
    NSNumber * inputScaleFactor;
}

@property (readonly, retain) NSArray *filters;
@property (readonly) struct CGSize { double x1; double x2; } nativeSize;
@property (readonly, retain) NSDictionary *rawDictionary;
@property (readonly) int rawMajorVersion;
@property (readonly, retain) NSDictionary *rawReconstructionDefaultsDictionary;
@property (readonly) int subsampling;
@property (readonly, retain) NSNumber *sushiMode;

+ (id)applyMatrix:(const double*)arg1 toCIImage:(id)arg2;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)convertNeutralTemperature:(id)arg1 tint:(id)arg2 toX:(id*)arg3 y:(id*)arg4;
+ (void)convertNeutralX:(id)arg1 y:(id)arg2 toTemperature:(id*)arg3 tint:(id*)arg4;
+ (id)customAttributes;
+ (id)filterWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 properties:(id)arg2 options:(id)arg3;
+ (id)filterWithImageData:(id)arg1 options:(id)arg2;
+ (id)filterWithImageURL:(id)arg1 options:(id)arg2;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)optionKeys;
+ (id)supportedRawCameraModels;

- (id)RAWFiltersValueForKeyPath:(id)arg1;
- (id)activeKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultBoostShadowAmount;
- (id)defaultDecoderVersion;
- (id)defaultImageOrientation;
- (id)defaultInputBaselineExposureAmount;
- (id)defaultInputBiasAmount;
- (id)defaultInputColorNoiseReductionAmount;
- (id)defaultInputEnableEDRMode;
- (id)defaultInputEnableVendorLensCorrection;
- (id)defaultInputHueMagBMAmount;
- (id)defaultInputHueMagCBAmount;
- (id)defaultInputHueMagGCAmount;
- (id)defaultInputHueMagMRAmount;
- (id)defaultInputHueMagRYAmount;
- (id)defaultInputHueMagYGAmount;
- (id)defaultInputLuminanceNoiseReductionAmount;
- (id)defaultInputMoireAmount;
- (id)defaultInputNoiseReductionContrastAmount;
- (id)defaultInputNoiseReductionDetailAmount;
- (id)defaultInputNoiseReductionSharpnessAmount;
- (id)defaultInputReturnDemosaiced;
- (id)defaultNeutralChromaticityX;
- (id)defaultNeutralChromaticityY;
- (id)defaultNeutralTemperature;
- (id)defaultNeutralTint;
- (id)filters;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })getOrientationTransform:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })getScaleTransform:(id)arg1;
- (void)getWhitePointVectorsR:(id*)arg1 g:(id*)arg2 b:(id*)arg3;
- (id)init;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 properties:(id)arg2 options:(id)arg3;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1 options:(id)arg2;
- (id)inputBaselineExposure;
- (id)inputBias;
- (id)inputDisableGamutMap;
- (id)inputHueMagBM;
- (id)inputHueMagCB;
- (id)inputHueMagGC;
- (id)inputHueMagMR;
- (id)inputHueMagRY;
- (id)inputHueMagYG;
- (id)inputImage;
- (id)inputLinearSpaceFilter;
- (id)inputNeutralChromaticityX;
- (id)inputNeutralChromaticityY;
- (id)inputNeutralLocation;
- (id)inputNeutralTemperature;
- (id)inputNeutralTint;
- (void)invalidateFilters;
- (void)invalidateInputImage;
- (struct CGSize { double x1; double x2; })nativeSize;
- (id)outputImage;
- (id)outputKeys;
- (id)outputNativeSize;
- (id)rawDictionary;
- (int)rawMajorVersion;
- (id)rawOptions;
- (id)rawOptionsWithSubsampling:(bool)arg1;
- (id)rawReconstructionDefaultsDictionary;
- (void)setDefaults;
- (void)setInputBaselineExposure:(id)arg1;
- (void)setInputBias:(id)arg1;
- (void)setInputBoost:(id)arg1;
- (void)setInputBoostShadowAmount:(id)arg1;
- (void)setInputColorNoiseReductionAmount:(id)arg1;
- (void)setInputDecoderVersion:(id)arg1;
- (void)setInputDisableGamutMap:(id)arg1;
- (void)setInputDraftMode:(id)arg1;
- (void)setInputEV:(id)arg1;
- (void)setInputEnableEDRMode:(id)arg1;
- (void)setInputEnableNoiseTracking:(id)arg1;
- (void)setInputEnableSharpening:(id)arg1;
- (void)setInputEnableVendorLensCorrection:(id)arg1;
- (void)setInputHueMagBM:(id)arg1;
- (void)setInputHueMagCB:(id)arg1;
- (void)setInputHueMagGC:(id)arg1;
- (void)setInputHueMagMR:(id)arg1;
- (void)setInputHueMagRY:(id)arg1;
- (void)setInputHueMagYG:(id)arg1;
- (void)setInputIgnoreOrientation:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputImageOrientation:(id)arg1;
- (void)setInputLinearSpaceFilter:(id)arg1;
- (void)setInputLuminanceNoiseReductionAmount:(id)arg1;
- (void)setInputMoireAmount:(id)arg1;
- (void)setInputNeutralChromaticityX:(id)arg1;
- (void)setInputNeutralChromaticityY:(id)arg1;
- (void)setInputNeutralLocation:(id)arg1;
- (void)setInputNeutralTemperature:(id)arg1;
- (void)setInputNeutralTint:(id)arg1;
- (void)setInputNoiseReductionAmount:(id)arg1;
- (void)setInputNoiseReductionContrastAmount:(id)arg1;
- (void)setInputNoiseReductionDetailAmount:(id)arg1;
- (void)setInputNoiseReductionSharpnessAmount:(id)arg1;
- (void)setInputRequestedSushiMode:(id)arg1;
- (void)setInputReturnDemosaiced:(id)arg1;
- (void)setInputScaleFactor:(id)arg1;
- (void)setTempTintAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (int)subsampling;
- (id)supportedDecoderVersions;
- (id)supportedSushiModes;
- (id)sushiMode;
- (id)transformedImageIgnoringOrientation:(bool)arg1;
- (void)updateChomaticityXAndY;
- (void)updateTemperatureAndTint;
- (id)whitePoint;
- (id)whitePointArray;

@end