/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCBuiltinRecordingsFolder : NSObject <RCFolder> {
    long long  _folderType;
}

@property (nonatomic, readonly) RCSavedRecordingsController *contentsController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long folderType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long playableCount;
@property (nonatomic, readonly) long long rank;
@property (nonatomic, readonly) NSSet *recordings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <RCFolderIdentifier> *uniqueID;
@property (nonatomic, readonly) NSString *uuid;

- (bool)containsRecording:(id)arg1;
- (id)contentsController;
- (id)description;
- (long long)folderType;
- (id)initWithType:(long long)arg1;
- (id)name;
- (unsigned long long)playableCount;
- (long long)rank;
- (id)recordings;
- (id)uniqueID;
- (id)uuid;

@end