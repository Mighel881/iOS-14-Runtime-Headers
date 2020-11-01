/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiAwdlSidecar : PBCodable <NSCopying> {
    unsigned long long  _bgDuration;
    unsigned int  _bgEntryCount;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _channelSequences;
    unsigned int  _dfspState;
    unsigned long long  _fgDuration;
    struct { 
        unsigned int bgDuration : 1; 
        unsigned int fgDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int bgEntryCount : 1; 
        unsigned int dfspState : 1; 
        unsigned int infraDisconnectedCount : 1; 
        unsigned int peerRssi24G : 1; 
        unsigned int peerRssi5G : 1; 
        unsigned int isSDB : 1; 
    }  _has;
    unsigned int  _infraDisconnectedCount;
    bool  _isSDB;
    int  _peerRssi24G;
    int  _peerRssi5G;
    AWDSidecarBssSteering * _sidecarBssSteering;
    AWDSidecarPeerTraffic * _sidecarPeerTraffic;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long bgDuration;
@property (nonatomic) unsigned int bgEntryCount;
@property (nonatomic, readonly) unsigned int*channelSequences;
@property (nonatomic, readonly) unsigned long long channelSequencesCount;
@property (nonatomic) unsigned int dfspState;
@property (nonatomic) unsigned long long fgDuration;
@property (nonatomic) bool hasBgDuration;
@property (nonatomic) bool hasBgEntryCount;
@property (nonatomic) bool hasDfspState;
@property (nonatomic) bool hasFgDuration;
@property (nonatomic) bool hasInfraDisconnectedCount;
@property (nonatomic) bool hasIsSDB;
@property (nonatomic) bool hasPeerRssi24G;
@property (nonatomic) bool hasPeerRssi5G;
@property (nonatomic, readonly) bool hasSidecarBssSteering;
@property (nonatomic, readonly) bool hasSidecarPeerTraffic;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int infraDisconnectedCount;
@property (nonatomic) bool isSDB;
@property (nonatomic) int peerRssi24G;
@property (nonatomic) int peerRssi5G;
@property (nonatomic, retain) AWDSidecarBssSteering *sidecarBssSteering;
@property (nonatomic, retain) AWDSidecarPeerTraffic *sidecarPeerTraffic;
@property (nonatomic) unsigned long long timestamp;

- (void)addChannelSequence:(unsigned int)arg1;
- (unsigned long long)bgDuration;
- (unsigned int)bgEntryCount;
- (unsigned int)channelSequenceAtIndex:(unsigned long long)arg1;
- (unsigned int*)channelSequences;
- (unsigned long long)channelSequencesCount;
- (void)clearChannelSequences;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)dfspState;
- (id)dictionaryRepresentation;
- (unsigned long long)fgDuration;
- (bool)hasBgDuration;
- (bool)hasBgEntryCount;
- (bool)hasDfspState;
- (bool)hasFgDuration;
- (bool)hasInfraDisconnectedCount;
- (bool)hasIsSDB;
- (bool)hasPeerRssi24G;
- (bool)hasPeerRssi5G;
- (bool)hasSidecarBssSteering;
- (bool)hasSidecarPeerTraffic;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned int)infraDisconnectedCount;
- (bool)isEqual:(id)arg1;
- (bool)isSDB;
- (void)mergeFrom:(id)arg1;
- (int)peerRssi24G;
- (int)peerRssi5G;
- (bool)readFrom:(id)arg1;
- (void)setBgDuration:(unsigned long long)arg1;
- (void)setBgEntryCount:(unsigned int)arg1;
- (void)setChannelSequences:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setDfspState:(unsigned int)arg1;
- (void)setFgDuration:(unsigned long long)arg1;
- (void)setHasBgDuration:(bool)arg1;
- (void)setHasBgEntryCount:(bool)arg1;
- (void)setHasDfspState:(bool)arg1;
- (void)setHasFgDuration:(bool)arg1;
- (void)setHasInfraDisconnectedCount:(bool)arg1;
- (void)setHasIsSDB:(bool)arg1;
- (void)setHasPeerRssi24G:(bool)arg1;
- (void)setHasPeerRssi5G:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInfraDisconnectedCount:(unsigned int)arg1;
- (void)setIsSDB:(bool)arg1;
- (void)setPeerRssi24G:(int)arg1;
- (void)setPeerRssi5G:(int)arg1;
- (void)setSidecarBssSteering:(id)arg1;
- (void)setSidecarPeerTraffic:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)sidecarBssSteering;
- (id)sidecarPeerTraffic;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end