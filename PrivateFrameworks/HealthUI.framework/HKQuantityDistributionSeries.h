/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKQuantityDistributionSeries : HKGraphSeries {
    bool  _excludeDistribution;
    HKStrokeStyle * _inactiveStrokeStyle;
    HKAxisLabelStyle * _minMaxLabelStyle;
    HKStrokeStyle * _minMaxPointStyle;
    HKAxisLabelStyle * _minMaxValueStyle;
    HKStrokeStyle * _selectedStrokeStyle;
    HKStrokeStyle * _unselectedStrokeStyle;
    long long  _zeroCountForGap;
}

@property (nonatomic) bool excludeDistribution;
@property (nonatomic, copy) HKStrokeStyle *inactiveStrokeStyle;
@property (nonatomic, copy) HKAxisLabelStyle *minMaxLabelStyle;
@property (nonatomic, copy) HKStrokeStyle *minMaxPointStyle;
@property (nonatomic, copy) HKAxisLabelStyle *minMaxValueStyle;
@property (nonatomic, copy) HKStrokeStyle *selectedStrokeStyle;
@property (nonatomic, copy) HKStrokeStyle *unselectedStrokeStyle;
@property (nonatomic) long long zeroCountForGap;

- (void).cxx_destruct;
- (void)_drawMinMaxLabelsForMin:(struct CGPoint { double x1; double x2; })arg1 max:(struct CGPoint { double x1; double x2; })arg2 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct CGContext { }*)arg5;
- (id)_quickDate:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_textRectForSize:(struct CGSize { double x1; double x2; })arg1 location:(struct CGPoint { double x1; double x2; })arg2 screenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 yOffset:(double)arg4;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { long long x1; long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (bool)excludeDistribution;
- (id)inactiveStrokeStyle;
- (id)init;
- (id)marginsForYAxis:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)minMaxLabelStyle;
- (id)minMaxPointStyle;
- (id)minMaxValueStyle;
- (id)selectedStrokeStyle;
- (void)setExcludeDistribution:(bool)arg1;
- (void)setInactiveStrokeStyle:(id)arg1;
- (void)setMinMaxLabelStyle:(id)arg1;
- (void)setMinMaxPointStyle:(id)arg1;
- (void)setMinMaxValueStyle:(id)arg1;
- (void)setSelectedStrokeStyle:(id)arg1;
- (void)setUnselectedStrokeStyle:(id)arg1;
- (void)setZeroCountForGap:(long long)arg1;
- (bool)supportsMultiTouchSelection;
- (id)unselectedStrokeStyle;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (long long)zeroCountForGap;

@end