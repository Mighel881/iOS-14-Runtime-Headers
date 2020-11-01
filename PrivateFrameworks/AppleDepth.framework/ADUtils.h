/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
 */

@interface ADUtils : NSObject

+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })addAnglesToRotation:(void *)arg1 angles:(void *)arg2; // needs 2 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }
+ (void)calcRotationAngle:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })calcRotationMatrix;
+ (long long)convertToLevelsConfidence:(struct __CVBuffer { }*)arg1 confidenceOutput:(struct __CVBuffer { }*)arg2 confidenceLowThreshold:(float)arg3 confidenceHighThreshold:(float)arg4 inverseThresholds:(bool)arg5 zeroEdgesThick:(int)arg6;
+ (long long)copyModifyNormalsPixelBuffer:(struct __CVBuffer { }*)arg1 output:(struct __CVBuffer { }*)arg2 normalsRotation:(long long)arg3;
+ (long long)filterInvalidsFromFloatImage:(struct __CVBuffer { }*)arg1 minValue:(float)arg2 maxValue:(float)arg3;
+ (long long)fuseCurrentDepth:(struct __CVBuffer { }*)arg1 previousDepth:(struct __CVBuffer { }*)arg2 intoOutputDepth:(struct __CVBuffer { }*)arg3 currentConfidence:(struct __CVBuffer { }*)arg4 previousConfidence:(struct __CVBuffer { }*)arg5 intoOutputConfidence:(struct __CVBuffer { }*)arg6 currentNormals:(struct __CVBuffer { }*)arg7 previousNormals:(struct __CVBuffer { }*)arg8 intoOutputNormals:(struct __CVBuffer { }*)arg9 usingAlpha:(struct __CVBuffer { }*)arg10 defaultAlpha:(float)arg11 depthUnits:(unsigned long long)arg12 confidenceUnits:(unsigned long long)arg13;
+ (long long)fuseCurrentDepthAndConfidenceMaps:(struct __CVBuffer { }*)arg1 previousDepth:(struct __CVBuffer { }*)arg2 currentConfidence:(struct __CVBuffer { }*)arg3 previousConfidence:(struct __CVBuffer { }*)arg4 outputDepth:(struct __CVBuffer { }*)arg5 outputConfidence:(struct __CVBuffer { }*)arg6 defaultAlpha:(float)arg7 depthMaxDiff:(float)arg8;
+ (long long)fuseCurrentMap:(struct __CVBuffer { }*)arg1 previousMap:(struct __CVBuffer { }*)arg2 intoOutputMap:(struct __CVBuffer { }*)arg3 usingAlpha:(struct __CVBuffer { }*)arg4 defaultAlpha:(float)arg5 diffThreshold:(float)arg6;
+ (unsigned long long)layoutForSize:(struct CGSize { double x1; double x2; })arg1 inputOrientation:(unsigned int)arg2 rotationPreference:(unsigned long long)arg3;
+ (long long)postProcessConfidence:(struct __CVBuffer { }*)arg1 confidenceOutput:(struct __CVBuffer { }*)arg2 rawConfidenceUnits:(unsigned long long)arg3 outConfidenceUnits:(unsigned long long)arg4 outDepthUnits:(unsigned long long)arg5 confidenceLowThreshold:(float)arg6 confidenceHighThreshold:(float)arg7;
+ (long long)postProcessDepth:(struct __CVBuffer { }*)arg1 depthOutput:(struct __CVBuffer { }*)arg2 depthUnitsType:(unsigned long long)arg3 inverse:(bool)arg4;
+ (long long)postProcessNormals:(struct __CVBuffer { }*)arg1 normalsOutput:(struct __CVBuffer { }*)arg2 normalsRotation:(long long)arg3;
+ (long long)postProcessWithDepth:(struct __CVBuffer { }*)arg1 confidence:(struct __CVBuffer { }*)arg2 normals:(struct __CVBuffer { }*)arg3 depthOutput:(struct __CVBuffer { }*)arg4 confidenceOutput:(struct __CVBuffer { }*)arg5 normalsOutput:(struct __CVBuffer { }*)arg6 normalsRotation:(long long)arg7 depthUnitsType:(unsigned long long)arg8 inverse:(bool)arg9 rawConfidenceUnits:(unsigned long long)arg10 outConfidenceUnits:(unsigned long long)arg11 confidenceLowThreshold:(float)arg12 confidenceHighThreshold:(float)arg13;
+ (long long)projectPointCloud:(id)arg1 croppedBy:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rotatedBy:(long long)arg3 scaledInto:(struct __CVBuffer { }*)arg4;
+ (long long)projectPointCloud:(id)arg1 filteredBy:(id)arg2 croppedBy:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 rotatedBy:(long long)arg4 scaledInto:(struct __CVBuffer { }*)arg5;
+ (long long)projectPointCloud:(id)arg1 filteredBy:(id)arg2 croppedBy:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 rotatedBy:(long long)arg4 scaledMergingWith:(struct __CVBuffer { }*)arg5;
+ (long long)scaleConvertRotateImage:(struct __CVBuffer { }*)arg1 rotateBy:(unsigned char)arg2 cropBy:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 scaleInto:(struct __CVBuffer { }*)arg4 intermediateScalingBuffer:(struct __CVBuffer {}**)arg5 intermediateRotatingBuffer:(struct __CVBuffer {}**)arg6;
+ (void)updatePixelBufferAllocationWithNewSize:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(unsigned int)arg2 pixelBuffer:(struct __CVBuffer {}**)arg3;
+ (long long)warpAndFuseWithCurrDepth:(struct __CVBuffer { }*)arg1 prevDepth:(struct __CVBuffer { }*)arg2 currNormals:(struct __CVBuffer { }*)arg3 prevNormals:(struct __CVBuffer { }*)arg4 opticalFlow:(struct __CVBuffer { }*)arg5 alphaMap:(struct __CVBuffer { }*)arg6 depthUnitsType:(unsigned long long)arg7 defaultAlpha:(float)arg8 depthOutput:(struct __CVBuffer { }*)arg9 normalsOutput:(struct __CVBuffer { }*)arg10;
+ (long long)warpMap:(struct __CVBuffer { }*)arg1 toOutput:(struct __CVBuffer { }*)arg2 usingOpticalFlow:(struct __CVBuffer { }*)arg3;
+ (long long)warpPreviousDepth:(struct __CVBuffer { }*)arg1 intoCurrentDepth:(struct __CVBuffer { }*)arg2 previousConfidence:(struct __CVBuffer { }*)arg3 intoCurrentConfidence:(struct __CVBuffer { }*)arg4 previousNormals:(struct __CVBuffer { }*)arg5 intoCurrentNormals:(struct __CVBuffer { }*)arg6 usingOpticalFlow:(struct __CVBuffer { }*)arg7;

@end