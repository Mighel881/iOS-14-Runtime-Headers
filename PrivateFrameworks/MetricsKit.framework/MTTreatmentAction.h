/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

@interface MTTreatmentAction : NSObject {
    bool  _blacklisted;
    NSArray * _blacklistedFields;
    NSString * _field;
    id  _value;
    NSArray * _whitelistedFields;
}

@property (nonatomic) bool blacklisted;
@property (nonatomic, retain) NSArray *blacklistedFields;
@property (nonatomic, retain) NSString *field;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) NSArray *whitelistedFields;

+ (id)treatmentActionWithField:(id)arg1 configData:(id)arg2;

- (void).cxx_destruct;
- (bool)blacklisted;
- (id)blacklistedFields;
- (id)field;
- (id)initWithField:(id)arg1 configDictionary:(id)arg2;
- (id)performAction:(id)arg1 context:(id)arg2;
- (void)setBlacklisted:(bool)arg1;
- (void)setBlacklistedFields:(id)arg1;
- (void)setField:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setWhitelistedFields:(id)arg1;
- (id)value;
- (id)whitelistedFields;

@end