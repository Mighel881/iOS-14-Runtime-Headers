/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPReplicaRecordFromCloudKit : NSObject <MSPReplicaRecordFromCloud> {
    NSData * _contents;
    MSPVectorTimestamp * _contentsTimestamp;
    CKRecord * _record;
    NSUUID * _recordIdentifier;
}

@property (nonatomic, readonly, copy) NSData *contents;
@property (nonatomic, readonly, copy) MSPVectorTimestamp *contentsTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKRecord *record;
@property (getter=recordIdentifier, nonatomic, readonly) NSUUID *recordIdentifier;
@property (readonly) Class superclass;
@property (getter=isTombstoneRepresentedByCloudRecord, nonatomic, readonly) bool tombstoneRepresentedByCloudRecord;

+ (id)recordFromInsertEdit:(id)arg1;
+ (id)recordType;
+ (id)tombstoneWithRecordIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)applyUpdateEdit:(id)arg1;
- (id)contents;
- (id)contentsTimestamp;
- (id)description;
- (id)initWithCKRecord:(id)arg1;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 identifier:(id)arg3;
- (id)initWithReplicaRecord:(id)arg1 recordID:(id)arg2;
- (bool)isTombstoneRepresentedByCloudRecord;
- (id)record;
- (id)recordIdentifier;
- (id)recordRepresentation;
- (id)recordRepresentationWithType:(id)arg1 recordZoneID:(id)arg2;
- (id)recordZoneName;
- (void)setRecord:(id)arg1;
- (id)tombstoneRecordRepresentation;

@end
