/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

@interface HKMCDaySummary : NSObject <HKMCAdjacentFlowDay, NSCopying, NSSecureCoding> {
    HKQuantity * _basalBodyTemperature;
    long long  _cervicalMucusQuality;
    long long  _dayIndex;
    bool  _intermenstrualBleeding;
    long long  _menstrualFlow;
    long long  _menstrualFlowModificationDayIndex;
    long long  _ovulationTestResult;
    NSDictionary * _sampleCountByType;
    long long  _sexualActivity;
    NSNumber * _startOfCycleFromCycleTracking;
    unsigned long long  _symptoms;
}

@property (nonatomic, copy) HKQuantity *basalBodyTemperature;
@property (nonatomic) long long cervicalMucusQuality;
@property (nonatomic, readonly) long long cervicalMucusQualitySampleCount;
@property (nonatomic, readonly) long long dayIndex;
@property (nonatomic) bool intermenstrualBleeding;
@property (nonatomic, readonly) bool isDataLogged;
@property (nonatomic, readonly) bool isSupplementaryDataLogged;
@property (nonatomic, readonly, copy) NSSet *loggedSupplementaryDisplayTypes;
@property (nonatomic) long long menstrualFlow;
@property (nonatomic) long long menstrualFlowModificationDayIndex;
@property (nonatomic, readonly) long long menstrualFlowSampleCount;
@property (nonatomic) long long ovulationTestResult;
@property (nonatomic, readonly) long long ovulationTestResultSampleCount;
@property (nonatomic, retain) NSDictionary *sampleCountByType;
@property (nonatomic) long long sexualActivity;
@property (nonatomic, readonly) long long sexualActivitySampleCount;
@property (nonatomic, copy) NSNumber *startOfCycleFromCycleTracking;
@property (nonatomic) unsigned long long symptoms;

+ (id)daySummaryWithDayIndex:(long long)arg1 menstrualFlow:(long long)arg2 intermenstrualBleeding:(bool)arg3 symptoms:(unsigned long long)arg4 sexualActivity:(long long)arg5 ovulationTestResult:(long long)arg6 cervicalMucusQuality:(long long)arg7 basalBodyTemperature:(id)arg8;
+ (id)daySummaryWithDayIndex:(long long)arg1 menstrualFlow:(long long)arg2 intermenstrualBleeding:(bool)arg3 symptoms:(unsigned long long)arg4 sexualActivity:(long long)arg5 ovulationTestResult:(long long)arg6 cervicalMucusQuality:(long long)arg7 basalBodyTemperature:(id)arg8 sampleCountByType:(id)arg9;
+ (id)emptyDaySummaryWithDayIndex:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isBasalBodyTemperatureLogged;
- (bool)_isCervicalMucusQualityLogged;
- (bool)_isIntermenstrualBleedingLogged;
- (bool)_isMenstrualFlowLogged;
- (bool)_isOvulationTestResultLogged;
- (bool)_isSexualActivityLogged;
- (bool)_isSymptomsLogged;
- (id)basalBodyTemperature;
- (long long)cervicalMucusQuality;
- (long long)cervicalMucusQualitySampleCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dayIndex;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasConfirmedNoFlow;
- (bool)hasFlow;
- (id)initWithCoder:(id)arg1;
- (bool)intermenstrualBleeding;
- (bool)isDataLogged;
- (bool)isEqual:(id)arg1;
- (bool)isFetched;
- (bool)isSupplementaryDataLogged;
- (bool)isUserEnteredDataEqual:(id)arg1;
- (id)loggedSupplementaryDisplayTypes;
- (long long)menstrualFlow;
- (long long)menstrualFlowModificationDayIndex;
- (long long)menstrualFlowSampleCount;
- (long long)ovulationTestResult;
- (long long)ovulationTestResultSampleCount;
- (id)redactedDescription;
- (id)sampleCountByType;
- (void)setBasalBodyTemperature:(id)arg1;
- (void)setCervicalMucusQuality:(long long)arg1;
- (void)setIntermenstrualBleeding:(bool)arg1;
- (void)setMenstrualFlow:(long long)arg1;
- (void)setMenstrualFlowModificationDayIndex:(long long)arg1;
- (void)setOvulationTestResult:(long long)arg1;
- (void)setSampleCountByType:(id)arg1;
- (void)setSexualActivity:(long long)arg1;
- (void)setStartOfCycleFromCycleTracking:(id)arg1;
- (void)setSymptoms:(unsigned long long)arg1;
- (long long)sexualActivity;
- (long long)sexualActivitySampleCount;
- (id)startOfCycleFromCycleTracking;
- (unsigned long long)symptoms;

@end
