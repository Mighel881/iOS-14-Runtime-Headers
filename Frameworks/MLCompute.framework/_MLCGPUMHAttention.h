/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MLCompute.framework/MLCompute
 */

@interface _MLCGPUMHAttention : _MLCGPULayer

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (id)layerWithDevice:(id)arg1 desciptor:(id)arg2 weights:(id)arg3 bias:(id)arg4 attnBias:(id)arg5 inferenceOnly:(bool)arg6;
+ (bool)setMHAOptimizerDataForDevice:(unsigned long long)arg1 deviceOps:(id)arg2 dataForWeights:(id)arg3 dataForBias:(id)arg4 momentumArray:(id)arg5 velocityArray:(id)arg6 centerWeightArray:(id)arg7 headIndex:(unsigned long long)arg8 weightIndex:(unsigned long long)arg9 targetIndex:(unsigned long long)arg10 attnBias:(bool)arg11;
+ (bool)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 dataForWeights:(id)arg3 dataForBias:(id)arg4;

- (id)initWithDevice:(id)arg1 desciptor:(id)arg2 weights:(id)arg3 bias:(id)arg4 attnBias:(id)arg5 inferenceOnly:(bool)arg6;

@end
