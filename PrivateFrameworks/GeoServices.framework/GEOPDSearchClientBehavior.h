/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchClientBehavior : PBCodable <NSCopying> {
    struct { 
        unsigned int has_shouldEnableRedoSearch : 1; 
    }  _flags;
    bool  _shouldEnableRedoSearch;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasShouldEnableRedoSearch;
@property (nonatomic) bool shouldEnableRedoSearch;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShouldEnableRedoSearch;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasShouldEnableRedoSearch:(bool)arg1;
- (void)setShouldEnableRedoSearch:(bool)arg1;
- (bool)shouldEnableRedoSearch;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
