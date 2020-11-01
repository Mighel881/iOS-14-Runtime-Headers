/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRRecognizerAsyncFeatureBatchProviderV1 : NSObject <CRRecognizerFeatureProviding> {
    CRRecognizerConfiguration * _configuration;
    NSObject<CRTextRecognizerModelInputProvider> * _inputProvider;
}

@property (retain) CRRecognizerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<CRTextRecognizerModelInputProvider> *inputProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_indexOfBestModelForAspectRatio:(float)arg1;
- (id)combinedLineFeature:(id)arg1 lineFeature:(id)arg2;
- (id)configuration;
- (void)enumerateInputsForImage:(id)arg1 textFeatures:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)initWithConfiguration:(id)arg1 inputProvider:(id)arg2 error:(id*)arg3;
- (id)inputProvider;
- (id)pruneAndSortRecognizedTextFeatures:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setInputProvider:(id)arg1;

@end