/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSHolidayCalendarEventRule : NSObject {
    unsigned long long  _category;
    bool  _checkWeekends;
    <CLSHolidayCalendarEventDateRuleDelegate> * _dateRuleDelegate;
    NSArray * _dateRules;
    NSString * _localizedName;
    NSString * _name;
    CLSHolidayCalendarEventRuleRequiredTraits * _requiredTraits;
    NSString * _uuid;
}

@property (nonatomic, readonly) bool allowSceneClassificationBasedEvaluation;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) bool checkWeekends;
@property (nonatomic) <CLSHolidayCalendarEventDateRuleDelegate> *dateRuleDelegate;
@property (nonatomic, readonly) NSArray *dateRules;
@property (nonatomic, readonly) bool isCelebration;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CLSHolidayCalendarEventRuleRequiredTraits *requiredTraits;
@property (nonatomic, readonly) NSString *uuid;

+ (id)localizedNameForName:(id)arg1;

- (void).cxx_destruct;
- (id)_dateRuleForYear:(long long)arg1;
- (id)_datesFromWeekendWithStartDate:(id)arg1 withDuration:(double)arg2;
- (bool)_isMatchingOnlyLocalDate:(id)arg1;
- (bool)allowSceneClassificationBasedEvaluation;
- (unsigned long long)category;
- (bool)checkWeekends;
- (id)dateRuleDelegate;
- (id)dateRules;
- (bool)evaluateOnlyTraits:(id)arg1;
- (bool)evaluateWithLocalDate:(id)arg1 traits:(id)arg2;
- (unsigned long long)hash;
- (id)initWithEventDescription:(id)arg1;
- (bool)isCelebration;
- (bool)isEqual:(id)arg1;
- (id)localDatesByEvaluatingRuleForYear:(long long)arg1;
- (id)localizedName;
- (id)name;
- (id)requiredTraits;
- (void)setDateRuleDelegate:(id)arg1;
- (id)uuid;

@end