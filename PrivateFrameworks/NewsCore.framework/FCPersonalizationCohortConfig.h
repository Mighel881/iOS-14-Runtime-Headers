/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPersonalizationCohortConfig : NSObject <NSCopying, NSSecureCoding> {
    double  _dilutionFactor;
    double  _favoritedBoost;
    double  _globalWeight;
    double  _paddingFactor;
    double  _postBaselineCurvature;
    double  _preBaselineCurvature;
    double  _userBaseline;
}

@property (nonatomic) double dilutionFactor;
@property (nonatomic) double favoritedBoost;
@property (nonatomic) double globalWeight;
@property (nonatomic) double paddingFactor;
@property (nonatomic) double postBaselineCurvature;
@property (nonatomic) double preBaselineCurvature;
@property (nonatomic) double userBaseline;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dilutionFactor;
- (void)encodeWithCoder:(id)arg1;
- (double)favoritedBoost;
- (double)globalWeight;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithFavoritedBoost:(double)arg1 globalWeight:(double)arg2 userBaseline:(double)arg3 preBaselineCurvature:(double)arg4 postBaselineCurvature:(double)arg5 dilutionFactor:(double)arg6 paddingFactor:(double)arg7;
- (double)paddingFactor;
- (double)postBaselineCurvature;
- (double)preBaselineCurvature;
- (void)setDilutionFactor:(double)arg1;
- (void)setFavoritedBoost:(double)arg1;
- (void)setGlobalWeight:(double)arg1;
- (void)setPaddingFactor:(double)arg1;
- (void)setPostBaselineCurvature:(double)arg1;
- (void)setPreBaselineCurvature:(double)arg1;
- (void)setUserBaseline:(double)arg1;
- (double)userBaseline;

@end
