/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVenueInfo : PBCodable <NSCopying> {
    int  _featureType;
    NSMutableArray * _filterElements;
    struct { 
        unsigned int has_featureType : 1; 
        unsigned int has_goInsideLevel : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_filterElements : 1; 
        unsigned int read_itemList : 1; 
        unsigned int read_locatedInside : 1; 
        unsigned int read_venueFeatureIds : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _goInsideLevel;
    GEOPDVenueItemList * _itemList;
    GEOPDLocatedInsideInfo * _locatedInside;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _venueFeatureIds;
}

@property (nonatomic) int featureType;
@property (nonatomic, retain) NSMutableArray *filterElements;
@property (nonatomic) int goInsideLevel;
@property (nonatomic) bool hasFeatureType;
@property (nonatomic) bool hasGoInsideLevel;
@property (nonatomic, readonly) bool hasItemList;
@property (nonatomic, readonly) bool hasLocatedInside;
@property (nonatomic, retain) GEOPDVenueItemList *itemList;
@property (nonatomic, retain) GEOPDLocatedInsideInfo *locatedInside;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *venueFeatureIds;

+ (Class)filterElementType;
+ (bool)isValid:(id)arg1;
+ (Class)venueFeatureIdType;
+ (id)venueInfoForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsFeatureType:(id)arg1;
- (void)addFilterElement:(id)arg1;
- (void)addVenueFeatureId:(id)arg1;
- (void)clearFilterElements;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearVenueFeatureIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)featureType;
- (id)featureTypeAsString:(int)arg1;
- (id)filterElementAtIndex:(unsigned long long)arg1;
- (id)filterElements;
- (unsigned long long)filterElementsCount;
- (int)goInsideLevel;
- (bool)hasFeatureType;
- (bool)hasGoInsideLevel;
- (bool)hasItemList;
- (bool)hasLocatedInside;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemList;
- (id)jsonRepresentation;
- (id)locatedInside;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeatureType:(int)arg1;
- (void)setFilterElements:(id)arg1;
- (void)setGoInsideLevel:(int)arg1;
- (void)setHasFeatureType:(bool)arg1;
- (void)setHasGoInsideLevel:(bool)arg1;
- (void)setItemList:(id)arg1;
- (void)setLocatedInside:(id)arg1;
- (void)setVenueFeatureIds:(id)arg1;
- (id)unknownFields;
- (id)venueFeatureIdAtIndex:(unsigned long long)arg1;
- (id)venueFeatureIds;
- (unsigned long long)venueFeatureIdsCount;
- (void)writeTo:(id)arg1;

@end
