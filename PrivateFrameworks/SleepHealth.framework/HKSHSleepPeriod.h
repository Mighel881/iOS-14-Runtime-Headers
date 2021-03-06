/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
 */

@interface HKSHSleepPeriod : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSArray * _segments;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly, copy) NSArray *segments;

+ (id)sleepPeriodWithDateInterval:(id)arg1 segments:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (double)durationForCategory:(long long)arg1 overlappingDateInterval:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)segments;

@end
