/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXBlendingBiomeStreamLogger : NSObject {
    BPSPublisher * _blendingModelPublisher;
    <BMBookmark> * _bookmark;
    BPSPublisher * _clientModelPublisher;
    NSString * _currentABGroup;
    NSString * _path;
    <ATXPETEventTracker2Protocol> * _tracker;
    BPSPublisher * _uiPublisher;
    NSNumber * _version;
}

@property (nonatomic, readonly) NSString *abGroup;
@property (nonatomic, retain) BPSPublisher *blendingModelPublisher;
@property (nonatomic, retain) <BMBookmark> *bookmark;
@property (nonatomic, retain) BPSPublisher *clientModelPublisher;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) <ATXPETEventTracker2Protocol> *tracker;
@property (nonatomic, retain) BPSPublisher *uiPublisher;
@property (nonatomic, retain) NSNumber *version;

+ (id)_dataFromFileHandle:(id)arg1;
+ (bool)_fileExistsAtPath:(id)arg1;
+ (bool)_fileSizeWithinLimits:(id)arg1;
+ (id)biomeStreamLoggerWithPath:(id)arg1;
+ (id)biomeStreamLoggerWithPath:(id)arg1 tracker:(id)arg2;
+ (id)defaultBiomeStreamLogger;

- (void).cxx_destruct;
- (id)_anchorModelEngagementMetricFromAnchorPrediction:(id)arg1 proactiveSuggestion:(id)arg2 feedbackMetadata:(id)arg3 engagementType:(int)arg4 consumerSubType:(id)arg5 completedSession:(id)arg6;
- (id)_appClipEngagementMetricWithBundleId:(id)arg1 urlHash:(id)arg2 interactionType:(int)arg3 consumerSubType:(id)arg4;
- (id)_blendingModelPublisher;
- (id)_clientModelPublisher;
- (unsigned int)_ensureWidgetsInStackBetweenZeroAndTen:(unsigned long long)arg1;
- (id)_heroAppEngagementMetricWithBundleId:(id)arg1 interactionType:(int)arg2 consumerSubType:(id)arg3;
- (void)_logAppClipEngagementMetric:(id)arg1;
- (void)_logCacheAgeMetricEventWithCacheAge:(double)arg1 clientModelId:(id)arg2;
- (void)_logClientModelsIncludedInHomeScreenLayoutWithSuggestionLayout:(id)arg1 consumerSubType:(unsigned char)arg2;
- (void)_logHeroAppEngagementMetric:(id)arg1;
- (void)_logLayoutSelectedWithSuggestionLayout:(id)arg1 consumerSubType:(unsigned char)arg2;
- (void)_logUnaggregatedAnchorModelEngagementMetric:(id)arg1;
- (id)_loggerContextPublisherWithPublisher:(id)arg1;
- (id)_timeBasedMergePublisher:(id)arg1 withOtherPublishers:(id)arg2;
- (id)_uiPublisher;
- (id)abGroup;
- (id)blendingModelPublisher;
- (id)bookmark;
- (id)clientModelPublisher;
- (id)clientModelPublisherForClientModelCacheUpdateAges;
- (void)encodeWithCoder:(id)arg1;
- (void)handleBlendingModelCacheUpdateEvent:(id)arg1 loggerContext:(id)arg2;
- (void)handleClientModelCacheUpdateEvent:(id)arg1 loggerContext:(id)arg2;
- (void)handleUIEvent:(id)arg1 loggerContext:(id)arg2;
- (unsigned long long)hash;
- (id)initWithBookmark:(id)arg1 version:(id)arg2 path:(id)arg3 tracker:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXBlendingBiomeStreamLogger:(id)arg1;
- (void)logAnchorModelEngagementMetricsWithCompletedSession:(id)arg1;
- (void)logAppClipEngagementMetricsAndSessions:(id)arg1;
- (void)logBlendingLayerRefreshMetricWithBlendingModelCacheUpdateEvent:(id)arg1 loggerContext:(id)arg2;
- (void)logBlendingMetricsFromBiomeStream;
- (void)logClientModelsIncludedInHomeScreenLayoutsMetricWithBlendingModelCacheUpdateEvent:(id)arg1;
- (void)logHeroModelEngagementMetrics:(id)arg1;
- (void)logLayoutSelectedMetricWithBlendingModelCacheUpdateEvent:(id)arg1;
- (void)logScreenUnlockSessionsIfPossibleWithLoggerContext:(id)arg1;
- (void)logTopOfStackPredictionMetricWithBlendingModelCacheUpdateEvent:(id)arg1;
- (void)logWidgetRotationEngagementMetricsIfPossibleWithLoggerContext:(id)arg1;
- (id)path;
- (void)persistContext;
- (void)setBlendingModelPublisher:(id)arg1;
- (void)setBookmark:(id)arg1;
- (void)setClientModelPublisher:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setTracker:(id)arg1;
- (void)setUiPublisher:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)tracker;
- (void)tryLogSingleSuggestionSessionMetricsWithLoggerContext:(id)arg1;
- (id)uiPublisher;
- (void)updateCurrentABGroup:(id)arg1;
- (id)version;

@end
