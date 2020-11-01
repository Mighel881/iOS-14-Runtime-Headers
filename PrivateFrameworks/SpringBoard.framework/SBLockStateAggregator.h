/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBLockStateAggregator : NSObject {
    unsigned long long  _lockState;
}

+ (id)sharedInstance;

- (id)_descriptionForLockState:(unsigned long long)arg1;
- (void)_updateLockState;
- (void)dealloc;
- (id)description;
- (bool)hasAnyLockState;
- (id)init;
- (unsigned long long)lockState;

@end