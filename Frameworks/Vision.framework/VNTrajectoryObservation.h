/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNTrajectoryObservation : VNObservation {
    NSArray * _detectedPoints;
    void _equationCoefficients;
    NSArray * _projectedPoints;
    NSUUID * _requestUUID;
}

@property (nonatomic, copy) NSArray *detectedPoints;
@property (nonatomic) void equationCoefficients;
@property (nonatomic, copy) NSArray *projectedPoints;
@property (nonatomic, copy) NSUUID *requestUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detectedPoints;
- (void)encodeWithCoder:(id)arg1;
- (void)equationCoefficients;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(void *)arg1 requestUUID:(void *)arg2 trajectoryUUID:(void *)arg3 detectedPoints:(void *)arg4 projectedPoints:(void *)arg5 equationCoefficients:(void *)arg6 confidence:(void *)arg7; // needs 7 arg types, found 6: unsigned long long, id, id, id, id, float
- (bool)isEqual:(id)arg1;
- (id)projectedPoints;
- (id)requestUUID;
- (void)setDetectedPoints:(id)arg1;
- (void)setEquationCoefficients;
- (void)setProjectedPoints:(id)arg1;
- (void)setRequestUUID:(id)arg1;

@end
