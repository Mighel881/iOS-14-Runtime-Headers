/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
 */

@interface ADMonocularPipeline : NSObject {
    ADEspressoMonocularInferenceDescriptor * _inferenceDesc;
    bool  _isDenseDepthInverse;
    ADNetworkProvider * _networkProvider;
    ADMonocularPipelineParameters * _pipelineParameters;
    long long  _prioritization;
    ADImageDescriptor * _processedDepthDesc;
}

@property (nonatomic, copy) ADMonocularPipelineParameters *pipelineParameters;

- (void).cxx_destruct;
- (id)inferenceDescriptor;
- (id)initWithInputPrioritization:(long long)arg1;
- (id)initWithInputPrioritization:(long long)arg1 andParameters:(id)arg2;
- (id)pipelineParameters;
- (long long)postProcessWithDepth:(struct __CVBuffer { }*)arg1 depthOutput:(struct __CVBuffer { }*)arg2;
- (id)processedDepthOutputDescriptor;
- (void)setPipelineParameters:(id)arg1;

@end