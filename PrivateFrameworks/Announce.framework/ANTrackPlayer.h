/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Announce.framework/Announce
 */

@interface ANTrackPlayer : NSObject <AVAudioPlayerDelegate> {
    NSURL * _audioFileAtStart;
    NSURL * _audioFileTransition;
    AVAudioSession * _audioSession;
    ANAudioSessionManager * _audioSessionManager;
    <ANTrackPlayerDelegate> * _delegate;
    double  _interruptionStart;
    unsigned long long  _options;
    unsigned long long  _playbackState;
    NSMutableArray * _players;
    double  _previousSkipGoesToPreviousTrackDelta;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _readyToPlay;
    double  _silenceBetweenEachTrack;
    double  _trimStartTone;
    double  _trimTransitionTone;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSURL *audioFileAtStart;
@property (nonatomic, retain) NSURL *audioFileTransition;
@property (nonatomic, readonly) AVAudioSession *audioSession;
@property (nonatomic, readonly) ANAudioSessionManager *audioSessionManager;
@property (readonly, copy) NSString *debugDescription;
@property <ANTrackPlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double interruptionStart;
@property (nonatomic, readonly) int numberActivePlayers;
@property (nonatomic, readonly) unsigned long long options;
@property unsigned long long playbackState;
@property (nonatomic, readonly) NSMutableArray *players;
@property double previousSkipGoesToPreviousTrackDelta;
@property NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool readyToPlay;
@property double silenceBetweenEachTrack;
@property (readonly) Class superclass;
@property double trimStartTone;
@property double trimTransitionTone;
@property (nonatomic, readonly) NSString *whatIsPlaying;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

+ (double)machTimeToSeconds:(unsigned long long)arg1;
+ (unsigned long long)secondsToMachTime:(double)arg1;

- (void).cxx_destruct;
- (bool)_add:(id)arg1 announcementID:(id)arg2 trackType:(long long)arg3;
- (bool)_addURL:(id)arg1 announcementID:(id)arg2 trackType:(long long)arg3;
- (void)_callDelegateWithBlock:(id /* block */)arg1;
- (void)_configureSharedAudioSession;
- (void)_deregisterForNotifications;
- (bool)_insertAudioBetween;
- (bool)_playSync;
- (void)_registerForNotifications;
- (void)_resumePlaybackAfterInterruptionAtTimeInterval:(double)arg1;
- (void)_stopSync;
- (double)_trackTrimTime:(long long)arg1;
- (bool)add:(id)arg1 announcementID:(id)arg2;
- (bool)addingNewPlayer:(id)arg1;
- (id)audioFileAtStart;
- (id)audioFileTransition;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (id)audioSession;
- (void)audioSessionInterruptionHandler:(id)arg1;
- (id)audioSessionManager;
- (void)audioSessionMediaServicesLostHandler:(id)arg1;
- (void)audioSessionMediaServicesResetHandler:(id)arg1;
- (id)delegate;
- (void)end;
- (void)handleInterruptionDelay:(double)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)initWithOptions:(unsigned long long)arg1 audioSession:(id)arg2;
- (double)interruptionStart;
- (void)next;
- (void)nextInternalSync;
- (int)numberActivePlayers;
- (unsigned long long)options;
- (bool)playInternalSync;
- (void)playWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)playbackState;
- (id)players;
- (id)prepareToPlay;
- (void)previous;
- (void)previousInternalSync;
- (double)previousSkipGoesToPreviousTrackDelta;
- (id)queue;
- (bool)readyToPlay;
- (void)setAudioFileAtStart:(id)arg1;
- (void)setAudioFileTransition:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterruptionStart:(double)arg1;
- (void)setPlaybackState:(unsigned long long)arg1;
- (void)setPreviousSkipGoesToPreviousTrackDelta:(double)arg1;
- (void)setQueue:(id)arg1;
- (void)setReadyToPlay:(bool)arg1;
- (void)setSilenceBetweenEachTrack:(double)arg1;
- (void)setTrimStartTone:(double)arg1;
- (void)setTrimTransitionTone:(double)arg1;
- (void)setWorkQueue:(id)arg1;
- (double)silenceBetweenEachTrack;
- (id)startNextPlaybackOnDidFinish:(id)arg1;
- (void)stop;
- (void)stopInternalSync;
- (double)trimStartTone;
- (double)trimTransitionTone;
- (id)whatIsPlaying;
- (id)workQueue;

@end
