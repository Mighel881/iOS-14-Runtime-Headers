/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiDPSEpilogue : PBCodable <NSCopying> {
    int  _action;
    int  _afterRecommendedAction;
    NSMutableArray * _associationChanges;
    int  _beforeAction;
    AWDWADiagnosisActionAssociationDifferences * _changes;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int action : 1; 
        unsigned int afterRecommendedAction : 1; 
        unsigned int beforeAction : 1; 
    }  _has;
    AWDWAQuickDpsStats * _qDpsStats;
    unsigned long long  _timestamp;
}

@property (nonatomic) int action;
@property (nonatomic) int afterRecommendedAction;
@property (nonatomic, retain) NSMutableArray *associationChanges;
@property (nonatomic) int beforeAction;
@property (nonatomic, retain) AWDWADiagnosisActionAssociationDifferences *changes;
@property (nonatomic) bool hasAction;
@property (nonatomic) bool hasAfterRecommendedAction;
@property (nonatomic) bool hasBeforeAction;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) bool hasQDpsStats;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) AWDWAQuickDpsStats *qDpsStats;
@property (nonatomic) unsigned long long timestamp;

+ (Class)associationChangesType;

- (int)StringAsAction:(id)arg1;
- (int)StringAsAfterRecommendedAction:(id)arg1;
- (int)StringAsBeforeAction:(id)arg1;
- (int)action;
- (id)actionAsString:(int)arg1;
- (void)addAssociationChanges:(id)arg1;
- (int)afterRecommendedAction;
- (id)afterRecommendedActionAsString:(int)arg1;
- (id)associationChanges;
- (id)associationChangesAtIndex:(unsigned long long)arg1;
- (unsigned long long)associationChangesCount;
- (int)beforeAction;
- (id)beforeActionAsString:(int)arg1;
- (id)changes;
- (void)clearAssociationChanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (bool)hasAfterRecommendedAction;
- (bool)hasBeforeAction;
- (bool)hasChanges;
- (bool)hasQDpsStats;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)qDpsStats;
- (bool)readFrom:(id)arg1;
- (void)setAction:(int)arg1;
- (void)setAfterRecommendedAction:(int)arg1;
- (void)setAssociationChanges:(id)arg1;
- (void)setBeforeAction:(int)arg1;
- (void)setChanges:(id)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHasAfterRecommendedAction:(bool)arg1;
- (void)setHasBeforeAction:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setQDpsStats:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end