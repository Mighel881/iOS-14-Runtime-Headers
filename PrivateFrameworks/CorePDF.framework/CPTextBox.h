/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTextBox : CPRegion {
    double  rotationAngle;
}

- (void)accept:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (bool)isBoxRegion;
- (bool)isRotated;
- (double)rotationAngle;
- (void)setRotationAngle:(double)arg1;

@end