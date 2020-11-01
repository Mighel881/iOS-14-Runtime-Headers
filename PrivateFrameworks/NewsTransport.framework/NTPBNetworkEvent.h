/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBNetworkEvent : PBCodable <NSCopying> {
    int  _cacheState;
    unsigned long long  _connectDuration;
    unsigned long long  _dnsDuration;
    long long  _errorCode;
    struct { 
        unsigned int connectDuration : 1; 
        unsigned int dnsDuration : 1; 
        unsigned int errorCode : 1; 
        unsigned int httpStatusCode : 1; 
        unsigned int requestDuration : 1; 
        unsigned int responseDuration : 1; 
        unsigned int responseSize : 1; 
        unsigned int sessionID : 1; 
        unsigned int startTime : 1; 
        unsigned int cacheState : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned long long  _httpStatusCode;
    unsigned long long  _requestDuration;
    NSString * _requestUUID;
    NSString * _respondingPOP;
    unsigned long long  _responseDuration;
    unsigned long long  _responseSize;
    unsigned long long  _sessionID;
    unsigned long long  _startTime;
    int  _type;
    NSString * _url;
}

@property (nonatomic) int cacheState;
@property (nonatomic) unsigned long long connectDuration;
@property (nonatomic) unsigned long long dnsDuration;
@property (nonatomic, readonly) unsigned long long endTime;
@property (nonatomic) long long errorCode;
@property (nonatomic) bool hasCacheState;
@property (nonatomic) bool hasConnectDuration;
@property (nonatomic) bool hasDnsDuration;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasHttpStatusCode;
@property (nonatomic) bool hasRequestDuration;
@property (nonatomic, readonly) bool hasRequestUUID;
@property (nonatomic, readonly) bool hasRespondingPOP;
@property (nonatomic) bool hasResponseDuration;
@property (nonatomic) bool hasResponseSize;
@property (nonatomic) bool hasSessionID;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic) unsigned long long httpStatusCode;
@property (nonatomic, readonly) int pbNetworkEventCacheState;
@property (nonatomic, readonly) int pbNetworkEventType;
@property (nonatomic) unsigned long long requestDuration;
@property (nonatomic, retain) NSString *requestUUID;
@property (nonatomic, retain) NSString *respondingPOP;
@property (nonatomic) unsigned long long responseDuration;
@property (nonatomic) unsigned long long responseSize;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) unsigned long long startTime;
@property (getter=isSuccess, nonatomic, readonly) bool success;
@property (nonatomic, readonly) unsigned long long totalDuration;
@property (nonatomic) int type;
@property (nonatomic, retain) NSString *url;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (int)cacheState;
- (unsigned long long)connectDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)dnsDuration;
- (long long)errorCode;
- (bool)hasCacheState;
- (bool)hasConnectDuration;
- (bool)hasDnsDuration;
- (bool)hasErrorCode;
- (bool)hasHttpStatusCode;
- (bool)hasRequestDuration;
- (bool)hasRequestUUID;
- (bool)hasRespondingPOP;
- (bool)hasResponseDuration;
- (bool)hasResponseSize;
- (bool)hasSessionID;
- (bool)hasStartTime;
- (bool)hasType;
- (bool)hasUrl;
- (unsigned long long)hash;
- (unsigned long long)httpStatusCode;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)requestDuration;
- (id)requestUUID;
- (id)respondingPOP;
- (unsigned long long)responseDuration;
- (unsigned long long)responseSize;
- (unsigned long long)sessionID;
- (void)setCacheState:(int)arg1;
- (void)setConnectDuration:(unsigned long long)arg1;
- (void)setDnsDuration:(unsigned long long)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setHasCacheState:(bool)arg1;
- (void)setHasConnectDuration:(bool)arg1;
- (void)setHasDnsDuration:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasHttpStatusCode:(bool)arg1;
- (void)setHasRequestDuration:(bool)arg1;
- (void)setHasResponseDuration:(bool)arg1;
- (void)setHasResponseSize:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHttpStatusCode:(unsigned long long)arg1;
- (void)setRequestDuration:(unsigned long long)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setRespondingPOP:(id)arg1;
- (void)setResponseDuration:(unsigned long long)arg1;
- (void)setResponseSize:(unsigned long long)arg1;
- (void)setSessionID:(unsigned long long)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (void)setUrl:(id)arg1;
- (unsigned long long)startTime;
- (int)type;
- (id)url;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (unsigned long long)endTime;
- (bool)isSuccess;
- (int)pbNetworkEventCacheState;
- (int)pbNetworkEventType;
- (unsigned long long)totalDuration;

@end