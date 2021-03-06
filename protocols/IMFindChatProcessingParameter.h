/* Generated by RuntimeBrowser.
 */

@protocol IMFindChatProcessingParameter <IMPipelineParameter>

@required

- (NSString *)currentGroupName;
- (NSString *)fromDisplayID;
- (NSString *)fromIdentifier;
- (NSString *)groupID;
- (NSNumber *)groupParticipantVersion;
- (NSNumber *)groupProtocolVersion;
- (NSArray *)participantIdentifiers;
- (void)setChat:(IMDChat *)arg1;
- (NSString *)toIdentifier;

@end
