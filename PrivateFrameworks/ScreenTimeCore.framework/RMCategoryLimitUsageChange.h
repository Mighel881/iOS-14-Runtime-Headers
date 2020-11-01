/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface RMCategoryLimitUsageChange : PBCodable <NSCopying> {
    long long  _changeInUsage;
    unsigned long long  _daysSinceCreationDate;
    struct { 
        unsigned int changeInUsage : 1; 
        unsigned int daysSinceCreationDate : 1; 
        unsigned int noCreationDate : 1; 
    }  _has;
    NSString * _limitType;
    NSString * _limitedCategory;
    bool  _noCreationDate;
}

@property (nonatomic) long long changeInUsage;
@property (nonatomic) unsigned long long daysSinceCreationDate;
@property (nonatomic) bool hasChangeInUsage;
@property (nonatomic) bool hasDaysSinceCreationDate;
@property (nonatomic, readonly) bool hasLimitType;
@property (nonatomic, readonly) bool hasLimitedCategory;
@property (nonatomic) bool hasNoCreationDate;
@property (nonatomic, retain) NSString *limitType;
@property (nonatomic, retain) NSString *limitedCategory;
@property (nonatomic) bool noCreationDate;

- (void).cxx_destruct;
- (long long)changeInUsage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)daysSinceCreationDate;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChangeInUsage;
- (bool)hasDaysSinceCreationDate;
- (bool)hasLimitType;
- (bool)hasLimitedCategory;
- (bool)hasNoCreationDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)limitType;
- (id)limitedCategory;
- (void)mergeFrom:(id)arg1;
- (bool)noCreationDate;
- (bool)readFrom:(id)arg1;
- (void)setChangeInUsage:(long long)arg1;
- (void)setDaysSinceCreationDate:(unsigned long long)arg1;
- (void)setHasChangeInUsage:(bool)arg1;
- (void)setHasDaysSinceCreationDate:(bool)arg1;
- (void)setHasNoCreationDate:(bool)arg1;
- (void)setLimitType:(id)arg1;
- (void)setLimitedCategory:(id)arg1;
- (void)setNoCreationDate:(bool)arg1;
- (void)writeTo:(id)arg1;

@end