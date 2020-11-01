/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
 */

@interface APPCMediaMetricsHelper : NSObject <APPCMediaMetricsHelping, APPCMetricRegister> {
    void contextIdentifier;
    void notificationOwner;
    void primitiveCreator;
    void promotedContentIdentifier;
    void videoDuration;
    void videoQuality;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  videoURL;
    void visiblePercentage;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithContextIdentifier:(id)arg1 promotedContentIdentifier:(id)arg2 primitiveCreator:(id)arg3 notificationOwner:(id)arg4;
- (void)mediaChosenWithVideoWidth:(float)arg1 videoHeight:(float)arg2;
- (void)mediaContractedAtPosition:(double)arg1 fullScreen:(bool)arg2;
- (void)mediaExpandedAtPosition:(double)arg1 fullScreen:(bool)arg2;
- (void)mediaFinished;
- (void)mediaLoaded;
- (void)mediaPausedAtPosition:(double)arg1;
- (void)mediaPlayedAtPosition:(double)arg1;
- (void)mediaProgress:(long long)arg1;
- (void)mediaShowControlsAtPosition:(double)arg1;
- (void)mediaSkippedAtPosition:(double)arg1;
- (void)mediaStarted;
- (void)mediaVolumeChangedAtPosition:(double)arg1 volume:(float)arg2;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)arg1;
- (void)removeHandler;
- (void)updateVisiblePercentage:(long long)arg1;

@end