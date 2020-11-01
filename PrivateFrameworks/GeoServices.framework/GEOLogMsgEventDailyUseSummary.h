/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventDailyUseSummary : PBCodable <NSCopying> {
    NSMutableArray * _useEvents;
}

@property (nonatomic, retain) NSMutableArray *useEvents;

+ (bool)isValid:(id)arg1;
+ (Class)useEventsType;

- (void).cxx_destruct;
- (void)addUseEvents:(id)arg1;
- (void)clearUseEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setUseEvents:(id)arg1;
- (id)useEvents;
- (id)useEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)useEventsCount;
- (void)writeTo:(id)arg1;

@end