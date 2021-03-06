/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
 */

@interface HAENVolumeControl : NSObject {
    bool  _EUVolumeLimitFlagOn;
    bool  _SKVolumeLimitFlagOn;
    bool  _haenFeatureEnabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _mxVolumeLimitOn;
    int  _pid;
    bool  _wiredHeadphoneConnected;
}

+ (id)sharedInstance;

- (bool)_RLSAllowsMXVolumeLimit;
- (void)_fetchCategory:(const struct __CFString { }*)arg1 routeInfo:(struct { struct __CFString {} *x1; struct __CFString {} *x2; struct __CFString {} *x3; }*)arg2;
- (void)_setMXVolumeLimit:(bool)arg1;
- (void)_updateFlags;
- (void)_updateMXVolumeLimit;
- (float)computeLimitedVolume:(float)arg1 event:(id)arg2 action:(unsigned int*)arg3;
- (float)getCurrentVolumeForCategory:(const struct __CFString { }*)arg1 route:(struct { struct __CFString {} *x1; struct __CFString {} *x2; struct __CFString {} *x3; }*)arg2;
- (id)init;
- (unsigned int)limitVolume:(id)arg1;
- (void)limitVolumeTo:(float)arg1 category:(const struct __CFString { }*)arg2 route:(struct { struct __CFString {} *x1; struct __CFString {} *x2; struct __CFString {} *x3; }*)arg3 actionResult:(unsigned int*)arg4;
- (void)updateMXVolumeLimitStatus;
- (void)wiredHeadphoneConnected:(bool)arg1;

@end
