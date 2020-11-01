/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKTextInputTargetState : NSObject <NSCopying, PKTextInputDebugStateReporting> {
    NSString * _activePreviewText;
    NSNumber * _elementRecognitionIdentifier;
    PKTextInputHandwritingShot * _handwritingShot;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _inProgressGestureInitialSelectedRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _inProgressGestureRangeToDelete;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _inProgressGestureSelectionRange;
    double  _inProgressGestureStartTimestamp;
    NSUUID * _inProgressGestureStrokeUUID;
    long long  _lastCommittedCharacterLevelPosition;
    CHTextInputQueryItem * _lastQueryItem;
    double  _lastUpdateTimestamp;
    long long  _sessionCommitLength;
    NSString * _uncommittedPendingText;
    NSNumber * _writingSessionIdentifier;
}

@property (nonatomic, copy) NSString *activePreviewText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *elementRecognitionIdentifier;
@property (nonatomic, retain) PKTextInputHandwritingShot *handwritingShot;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } inProgressGestureInitialSelectedRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } inProgressGestureRangeToDelete;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } inProgressGestureSelectionRange;
@property (nonatomic) double inProgressGestureStartTimestamp;
@property (nonatomic, retain) NSUUID *inProgressGestureStrokeUUID;
@property (nonatomic) long long lastCommittedCharacterLevelPosition;
@property (nonatomic, retain) CHTextInputQueryItem *lastQueryItem;
@property (nonatomic) double lastUpdateTimestamp;
@property (nonatomic) long long sessionCommitLength;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uncommittedPendingText;
@property (nonatomic, copy) NSNumber *writingSessionIdentifier;

- (void).cxx_destruct;
- (id)activePreviewText;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)elementRecognitionIdentifier;
- (id)handwritingShot;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })inProgressGestureInitialSelectedRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })inProgressGestureRangeToDelete;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })inProgressGestureSelectionRange;
- (double)inProgressGestureStartTimestamp;
- (id)inProgressGestureStrokeUUID;
- (id)init;
- (long long)lastCommittedCharacterLevelPosition;
- (id)lastQueryItem;
- (double)lastUpdateTimestamp;
- (void)reportDebugStateDescription:(id /* block */)arg1;
- (long long)sessionCommitLength;
- (void)setActivePreviewText:(id)arg1;
- (void)setElementRecognitionIdentifier:(id)arg1;
- (void)setHandwritingShot:(id)arg1;
- (void)setInProgressGestureInitialSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setInProgressGestureRangeToDelete:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setInProgressGestureSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setInProgressGestureStartTimestamp:(double)arg1;
- (void)setInProgressGestureStrokeUUID:(id)arg1;
- (void)setLastCommittedCharacterLevelPosition:(long long)arg1;
- (void)setLastQueryItem:(id)arg1;
- (void)setLastUpdateTimestamp:(double)arg1;
- (void)setSessionCommitLength:(long long)arg1;
- (void)setUncommittedPendingText:(id)arg1;
- (void)setWritingSessionIdentifier:(id)arg1;
- (id)uncommittedPendingText;
- (id)writingSessionIdentifier;

@end