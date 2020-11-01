/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPlaybackSession : NSObject {
    NSString * _identifier;
    NSData * _playbackSessionData;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSData *playbackSessionData;
@property (nonatomic, readonly) _MRPlaybackSessionProtobuf *protobuf;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2 playbackSessionData:(id)arg3;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)playbackSessionData;
- (id)protobuf;
- (void)setIdentifier:(id)arg1;
- (void)setPlaybackSessionData:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end