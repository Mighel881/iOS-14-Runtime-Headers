/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARLatticeMitigatorResult : NSObject <NSCopying> {
    float  _score;
    float  _threshold;
    NSString * _version;
}

@property (nonatomic, readonly) float score;
@property (nonatomic, readonly) float threshold;
@property (nonatomic, readonly, copy) NSString *version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithVersion:(id)arg1 score:(float)arg2 threshold:(float)arg3;
- (float)score;
- (float)threshold;
- (id)version;

@end
