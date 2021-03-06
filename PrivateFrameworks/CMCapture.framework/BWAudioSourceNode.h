/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWAudioSourceNode : BWSourceNode <BWAudioSourceRecordingReadinessDelegate, BWZoomCompletionDelegate> {
    struct opaqueCMSession { } * _CMSession;
    struct __CFString { } * _CMSessionAudioMode;
    struct opaqueCMSimpleQueue { } * _activeBuffersQueue;
    struct opaqueCMFormatDescription { } * _auOutputFormatDescription;
    long long  _auRenderCount;
    unsigned int  _auSubType;
    int  _audioLevelUnits;
    struct OpaqueAudioComponentInstance { } * _audioUnit;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    int  _clientPID;
    struct OpaqueCMClock { } * _clock;
    NSObject<OS_dispatch_queue> * _cmSessionOrientationLockQueue;
    bool  _configuresSession;
    struct TimestampedAudioBufferList { 
        struct __CFAllocator {} *allocator; 
        long long auRenderCount; 
        unsigned int dataBytesCapacity; 
        unsigned int numFrames; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } pts; 
        struct AudioBufferList {} *abl; 
        unsigned int numPrependedSilenceFrames; 
    }  _currentSilenceBuffer;
    bool  _didBeginInterruption;
    bool  _doEndInterruption;
    bool  _flipStereoAudioCaptureChannels;
    NSObject<OS_dispatch_queue> * _generateSamplesDispatchQueue;
    struct opaqueCMSimpleQueue { } * _inactiveBuffersQueue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _ioprocTimeStampDeltaLimit;
    bool  _isAppAudioSession;
    bool  _isMultiCamSession;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _latencyOffset;
    bool  _levelMeteringEnabled;
    bool  _livePhotoCaptureEnabled;
    long long  _maxZoomFrequencyNanos;
    unsigned long long  _nextExpectedHostTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _nextExpectedSampleTime;
    float  _nextZoomFactor;
    long long  _nextZoomTime;
    BWNodeOutput * _outputsByMicSourcePosition;
    NSObject<OS_dispatch_queue> * _preparedToRecordHandlerCallbackQueue;
    unsigned int  _prevNumFrames;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _prevPTS;
    unsigned int  _pullDuration;
    struct opaqueCMSimpleQueue { } * _renderProcErrorQueue;
    long long  _silenceFramesGeneratedSinceLastAURenderProc;
    NSObject<OS_dispatch_source> * _silenceTimer;
    NSDictionary * _sourceRequirements;
    bool  _stereoAudioCaptureEnabled;
    float  _stereoAudioCapturePairedCameraBaseFieldOfView;
    float  _stereoAudioCapturePairedCameraZoomFactor;
    bool  _streamInterrupted;
    bool  _streamStarted;
    bool  _useDecoupledIO;
    bool  _videoRecordingEnabled;
    NSObject<OS_dispatch_queue> * _zoomHandlerQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _zoomLock;
    NSObject<OS_dispatch_source> * _zoomTimer;
}

@property (nonatomic, readonly) NSArray *audioLevels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didBeginInterruption;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interrupted;
@property (readonly) Class superclass;

+ (id)audioSourceNodeWithAttributes:(id)arg1 sessionPreset:(id)arg2 clock:(struct OpaqueCMClock { }*)arg3 doConfigureAudio:(bool)arg4 CMSession:(struct opaqueCMSession { }*)arg5 doEndInterruption:(bool)arg6 clientAuditToken:(struct { unsigned int x1[8]; })arg7 clientVersionOfLinkedSDK:(unsigned int)arg8 audioCaptureConnectionConfigurations:(id)arg9 isMultiCamSession:(bool)arg10;
+ (void)initialize;

- (unsigned int)_audioCombinedLatency;
- (bool)_cmSessionBooleanPropertyIsTrue:(struct __CFString { }*)arg1;
- (int)_configureCMSessionWithDefaultHardwareSampleRate:(double)arg1 didCallDoNotNotifyOtherSessionsOnNextInactive:(bool*)arg2;
- (struct opaqueCMSampleBuffer { }*)_createSampleBufferForTimestampedAudioBufferList:(struct TimestampedAudioBufferList { struct __CFAllocator {} *x1; long long x2; unsigned int x3; unsigned int x4; struct { long long x_5_1_1; int x_5_1_2; unsigned int x_5_1_3; long long x_5_1_4; } x5; struct AudioBufferList {} *x6; unsigned int x7; }*)arg1 audioBufferIndex:(int)arg2;
- (int)_deactivateCMSessionIfNecessary:(bool*)arg1;
- (double)_desiredSampleRate:(bool*)arg1;
- (int)_generatePullBuffers;
- (void)_generateSamples;
- (void)_generateSilenceIfNeeded;
- (int)_getAudioDevicePullFrames:(unsigned int*)arg1;
- (id)_initWithAttributes:(id)arg1 sessionPreset:(id)arg2 clock:(struct OpaqueCMClock { }*)arg3 doConfigureAudio:(bool)arg4 CMSession:(struct opaqueCMSession { }*)arg5 doEndInterruption:(bool)arg6 clientAuditToken:(struct { unsigned int x1[8]; })arg7 clientVersionOfLinkedSDK:(unsigned int)arg8 audioCaptureConnectionConfigurations:(id)arg9 isMultiCamSession:(bool)arg10;
- (int)_selectMicForAudioRoute:(id)arg1;
- (int)_setCMSessionAudioModeAndSelectMic:(bool*)arg1;
- (int)_setCMSessionPropertyWithKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)_setVADCameraParametersWithDirection:(int)arg1 zoomFactor:(float)arg2 forTime:(long long)arg3;
- (int)_setupAudioUnit;
- (void)_setupPrepareToRecordStateWithFlags:(unsigned int)arg1;
- (void)_updateAudioClockDeviceUID:(struct __CFString { }*)arg1;
- (void)_updateCMSessionAudioMode;
- (int)_updatePullFormatDescription;
- (void)_updateStereoAudioCapturePairedCameraZoomFactorAndStartTimer:(bool)arg1;
- (int)_virtualAudioDeviceCameraMics;
- (id)audioLevels;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (bool)didBeginInterruption;
- (bool)flipStereoAudioCaptureChannels;
- (bool)hasNonLiveConfigurationChanges;
- (bool)interrupted;
- (bool)levelMeteringEnabled;
- (bool)livePhotoCaptureEnabled;
- (void)makeCurrentConfigurationLive;
- (void)makeOutputsLiveIfNeeded;
- (id)nodeSubType;
- (id)outputForMicSourcePosition:(int)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)prepareToStartRecordingWithOrientation:(int)arg1 recordingSettingsID:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setFlipStereoAudioCaptureChannels:(bool)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setLevelMeteringEnabled:(bool)arg1;
- (void)setLivePhotoCaptureEnabled:(bool)arg1;
- (void)setStereoAudioCaptureEnabled:(bool)arg1;
- (void)setStereoAudioCapturePairedCameraBaseFieldOfView:(float)arg1;
- (void)setStereoAudioCapturePairedCameraZoomFactor:(float)arg1;
- (void)setVideoRecordingEnabled:(bool)arg1;
- (bool)start:(id*)arg1;
- (bool)stereoAudioCaptureEnabled;
- (float)stereoAudioCapturePairedCameraBaseFieldOfView;
- (float)stereoAudioCapturePairedCameraZoomFactor;
- (bool)stop:(id*)arg1;
- (void)unprepareForRecording;
- (bool)videoRecordingEnabled;
- (void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 zoomFactorWithoutFudge:(float)arg3 rampComplete:(bool)arg4 rampCommandID:(int)arg5;

@end
