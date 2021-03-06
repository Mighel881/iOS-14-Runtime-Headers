/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioManager : NSObject <VCAudioIOControllerControl, VCAudioSessionDelegate> {
    NSMutableArray * _allClients;
    VCAudioSessionMediaProperties * _currentAudioSessionMediaProperties;
    VCAudioUnitProperties * _currentAudioUnitProperties;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct tagHANDLE { int x1; } * _hAUIO;
    AVAudioDevice * _inputDevice;
    VCAudioRelay * _interruptThread;
    VCAudioRelayIO * _interruptThreadClient;
    int  _interruptThreadState;
    bool  _isGKVoiceChat;
    bool  _isInDaemon;
    bool  _isInputMeteringEnabled;
    bool  _isMicrophoneMuted;
    bool  _isOutputMeteringEnabled;
    bool  _isSpeakerPhoneEnabled;
    bool  _isSuspended;
    AVAudioDevice * _outputDevice;
    struct _VCAudioIOControllerIOState { 
        bool timestampInitialized; 
        double lastHostTime; 
        unsigned int lastInputTimestamp; 
        unsigned int lastInputSampleCount; 
        double lastBlockSize; 
        unsigned long long lastTimestamp; 
        struct _VCSingleLinkedList { 
            struct _VCSingleLinkedListEntry {} *head; 
            bool initialized; 
            int (*compare)(); 
            unsigned long long countEntries; 
        } clientIOList; 
        struct opaqueCMSimpleQueue {} *eventQueue; 
        struct opaqueVCAudioLimiter {} *audioLimiter; 
        struct opaqueVCAudioBufferList {} *secondarySampleBuffer; 
    }  _sinkData;
    struct _VCAudioIOControllerIOState { 
        bool timestampInitialized; 
        double lastHostTime; 
        unsigned int lastInputTimestamp; 
        unsigned int lastInputSampleCount; 
        double lastBlockSize; 
        unsigned long long lastTimestamp; 
        struct _VCSingleLinkedList { 
            struct _VCSingleLinkedListEntry {} *head; 
            bool initialized; 
            int (*compare)(); 
            unsigned long long countEntries; 
        } clientIOList; 
        struct opaqueCMSimpleQueue {} *eventQueue; 
        struct opaqueVCAudioLimiter {} *audioLimiter; 
        struct opaqueVCAudioBufferList {} *secondarySampleBuffer; 
    }  _sourceData;
    NSMutableArray * _startingIOClients;
    unsigned int  _state;
    NSDictionary * _vpOperatingModeToAudioSessionMediaFormatMapping;
}

@property (nonatomic, retain) VCAudioSessionMediaProperties *currentAudioSessionMediaProperties;
@property (nonatomic, retain) VCAudioUnitProperties *currentAudioUnitProperties;
@property (nonatomic, retain) AVAudioDevice *currentInputDevice;
@property (nonatomic, retain) AVAudioDevice *currentOutputDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isGKVoiceChat;
@property (nonatomic) bool isInDaemon;
@property (getter=isMicrophoneMuted, nonatomic) bool microphoneMuted;
@property (nonatomic, readonly) struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); unsigned long long x_7_1_4; } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; }*sinkIO;
@property (nonatomic, readonly) struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); unsigned long long x_7_1_4; } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; }*sourceIO;
@property (getter=isSpeakerPhoneEnabled, nonatomic) bool speakerPhoneEnabled;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *vpOperatingModeToAudioSessionMediaFormatMapping;

+ (id)sharedInstance;

- (void)_cleanupDeadClients;
- (void)activateStartingClient:(id)arg1 applyControllerFormat:(bool)arg2;
- (bool)addClient:(id)arg1;
- (void)applyControllerFormatToClients:(id)arg1;
- (void)cleanupInterruptThread;
- (void)completeStartForAllStartingClients;
- (void)computeHardwarePreferences;
- (id)currentAudioSessionMediaProperties;
- (id)currentAudioUnitProperties;
- (id)currentInputDevice;
- (id)currentOutputDevice;
- (void)dealloc;
- (void)didSessionEnd;
- (void)didSessionPause;
- (void)didSessionResume;
- (void)didSessionStop;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)arg1;
- (void)enterStateStarted;
- (void)flushEventQueue:(struct opaqueCMSimpleQueue { }*)arg1;
- (bool)getAudioSessionMediaProperties:(id)arg1 forVPOperatingMode:(unsigned int)arg2;
- (void)getPreferredFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 blockSize:(double*)arg2 vpOperatingMode:(unsigned int*)arg3 forOperatingMode:(int)arg4 deviceRole:(int)arg5 suggestedFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg6;
- (id)init;
- (bool)isGKVoiceChat;
- (bool)isInDaemon;
- (bool)isMicrophoneMuted;
- (bool)isSpeakerPhoneEnabled;
- (id)newAudioSessionMediaPropertiesWithClient:(id)arg1;
- (id)newAudioUnitPropertiesWithClient:(id)arg1;
- (void)refreshInputMetering;
- (void)refreshOutputMetering;
- (void)refreshRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;
- (void)registerClientIO:(struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; }*)arg1 controllerIO:(struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); unsigned long long x_7_1_4; } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; }*)arg2;
- (void)removeAllClientsForIO:(struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); unsigned long long x_7_1_4; } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; }*)arg1;
- (bool)removeClient:(id)arg1;
- (void)resetAUIOWithProperties:(id)arg1;
- (void)resetAudioSessionWithProperties:(id)arg1 interruptSuccessful:(bool*)arg2;
- (void)resetAudioTimestamps;
- (void)setCurrentAudioSessionMediaProperties:(id)arg1;
- (void)setCurrentAudioUnitProperties:(id)arg1;
- (void)setCurrentInputDevice:(id)arg1;
- (void)setCurrentOutputDevice:(id)arg1;
- (void)setInputMetering;
- (void)setIsGKVoiceChat:(bool)arg1;
- (void)setIsInDaemon:(bool)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (void)setOutputMetering;
- (void)setSpeakerPhoneEnabled:(bool)arg1;
- (void)setVpOperatingModeToAudioSessionMediaFormatMapping:(id)arg1;
- (void)setupIODevicesForAUIO:(struct tagHANDLE { int x1; }*)arg1;
- (bool)setupInterruptThread;
- (bool)shouldResetAudioSessionWithProperties:(id)arg1;
- (bool)shouldResetAudioUnitWithProperties:(id)arg1;
- (struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); unsigned long long x_7_1_4; } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; }*)sinkIO;
- (struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); unsigned long long x_7_1_4; } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; }*)sourceIO;
- (bool)startAUIOWithProperties:(id)arg1;
- (bool)startAudioSessionWithProperties:(id)arg1;
- (void)startClient:(id)arg1;
- (void)startInterruptThread;
- (bool)stateIdleWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int*)arg4;
- (bool)stateInterruptedShouldGoToRunning:(id)arg1;
- (bool)stateInterruptedShouldGoToStarted:(id)arg1;
- (bool)stateInterruptedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int*)arg4;
- (bool)stateRunningShouldTransitionToInterrupted:(id)arg1;
- (bool)stateRunningShouldTransitionToStarted:(id)arg1;
- (void)stateRunningToSessionStarted;
- (bool)stateRunningWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int*)arg4;
- (bool)stateSessionStartedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int*)arg4;
- (void)stateTransitionInterruptedToRunning;
- (void)stateTransitionInterruptedToStarted;
- (void)stateTransitionRunningToInterrupted;
- (void)stopAUIO;
- (void)stopAudioSession;
- (void)stopClient:(id)arg1;
- (void)stopInterruptThread;
- (void)unregisterClientIO:(struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; }*)arg1 controllerIO:(struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); unsigned long long x_7_1_4; } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; }*)arg2;
- (void)updateClient:(id)arg1;
- (bool)updateStateWithAudioIOClient:(id)arg1;
- (id)vpOperatingModeToAudioSessionMediaFormatMapping;
- (unsigned int)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2;
- (void)waitIdleForClient:(id)arg1;

@end
