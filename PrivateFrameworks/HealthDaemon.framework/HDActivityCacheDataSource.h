/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityCacheDataSource : NSObject <HDActivityCacheStatisticsBuilderSourceOrderDelegate, HDDataObserver> {
    NSSet * _allObservedTypes;
    HKCategoryType * _deepBreathingSessionType;
    struct unordered_map<long long, bool, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { 
        struct __hash_table<std::__1::__hash_value_type<long long, bool>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, bool>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, bool>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, bool> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, bool>, std::__1::hash<long long>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, bool>, std::__1::equal_to<long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _isConnectedGymDeviceCache;
    struct unordered_map<long long, bool, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { 
        struct __hash_table<std::__1::__hash_value_type<long long, bool>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, bool>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, bool>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, bool> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, bool>, std::__1::hash<long long>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, bool>, std::__1::equal_to<long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _isConnectedGymSourceCache;
    struct unordered_map<long long, bool, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { 
        struct __hash_table<std::__1::__hash_value_type<long long, bool>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, bool>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, bool>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, bool> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, bool>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, bool>, std::__1::hash<long long>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, bool>, std::__1::equal_to<long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _isWatchSourceCache;
    long long  _nonQuantitySampleAnchor;
    NSString * _nonQuantitySamplesQueryString;
    NSSet * _observedQuantityTypes;
    long long  _previousDayCacheIndex;
    NSDateInterval * _previousDayDateInterval;
    HDActivityCacheHeartRateStatisticsBuilder * _previousDayHeartRateStatisticsBuilder;
    HDActivityCacheStatisticsBuilder * _previousDayStatisticsBuilder;
    NSString * _previousDayStatisticsBuilderTag;
    bool  _previousWatchActivationLogEntryIsSet;
    struct vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > { 
        struct HDActivityCacheStatisticsBuilderSample {} *__begin_; 
        struct HDActivityCacheStatisticsBuilderSample {} *__end_; 
        struct __compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > { 
            struct HDActivityCacheStatisticsBuilderSample {} *__value_; 
        } __end_cap_; 
    }  _previousWatchActivationLogEntryVector;
    HDProfile * _profile;
    long long  _quantitySampleAnchor;
    NSString * _quantitySamplesQueryString;
    NSObject<OS_dispatch_queue> * _queue;
    _HKDelayedOperation * _rebuildOperation;
    HKCategoryType * _standHoursType;
    long long  _targetDayCacheIndex;
    NSDateInterval * _targetDayDateInterval;
    HDActivityCacheHeartRateStatisticsBuilder * _targetDayHeartRateStatisticsBuilder;
    HDActivityCacheStatisticsBuilder * _targetDayStatisticsBuilder;
    NSString * _targetDayStatisticsBuilderTag;
    _HKDelayedOperation * _updateOperation;
    HKCategoryType * _watchActivationType;
    HKWorkoutType * _workoutType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *observedQuantityTypes;
@property (nonatomic) long long previousDayCacheIndex;
@property (nonatomic, retain) NSDateInterval *previousDayDateInterval;
@property (nonatomic, readonly) HDActivityCacheHeartRateStatisticsBuilder *previousDayHeartRateStatisticsBuilder;
@property (nonatomic, readonly) HDActivityCacheStatisticsBuilder *previousDayStatisticsBuilder;
@property (nonatomic, retain) NSString *previousDayStatisticsBuilderTag;
@property (readonly) Class superclass;
@property (nonatomic) long long targetDayCacheIndex;
@property (nonatomic, retain) NSDateInterval *targetDayDateInterval;
@property (nonatomic, readonly) HDActivityCacheHeartRateStatisticsBuilder *targetDayHeartRateStatisticsBuilder;
@property (nonatomic, readonly) HDActivityCacheStatisticsBuilder *targetDayStatisticsBuilder;
@property (nonatomic, retain) NSString *targetDayStatisticsBuilderTag;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_dateIntervalsAreSet;
- (void)_deregisterForSamplesAdded;
- (long long)_isConnectedGymDeviceForDeviceIdentifier:(long long)arg1 error:(id*)arg2;
- (long long)_isConnectedGymSourceForSourceIdentifier:(long long)arg1 error:(id*)arg2;
- (long long)_isWatchSourceForSourceIdentifier:(long long)arg1 error:(id*)arg2;
- (bool)_nonQuantitySampleRequiresWatchSource:(long long)arg1;
- (id)_nonQuantitySamplesQueryStringWithSampleTypes:(id)arg1;
- (id)_overallDateInterval;
- (id)_parameterStringWithCount:(long long)arg1;
- (bool)_primeNonQuantitySamplesWithError:(id*)arg1 count:(long long*)arg2;
- (bool)_primePreviousActivationLogEntryWithError:(id*)arg1;
- (bool)_primeQuantitySamplesWithError:(id*)arg1 count:(long long*)arg2;
- (bool)_quantitySampleIsValidWithTypeCode:(long long)arg1 workoutSourceIdentifier:(long long)arg2 isWatchSource:(bool)arg3;
- (id)_quantitySamplesQueryStringWithQuantityTypes:(id)arg1;
- (bool)_quantityTypeRequiresWatchSource:(long long)arg1;
- (bool)_readyToPrimeActivationLogEntries;
- (bool)_readyToPrimeStatisticsBuilders;
- (void)_registerForSamplesAdded;
- (void)_resetEverything;
- (void)_resetPreviousWatchActivationLogEntries;
- (void)_resetStatisticsBuilders;
- (void)_samplesAddedToWorkoutNotification:(id)arg1;
- (bool)_typeIsValidFromCompanionWithoutWorkout:(long long)arg1;
- (bool)_updateStatisticsBuildersWithError:(id*)arg1;
- (id)activityCacheStatisticsBuilder:(id)arg1 sourceOrderForObjectType:(id)arg2;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 observedQuantityTypes:(id)arg2 updateOperation:(id)arg3 rebuildOperation:(id)arg4 queue:(id)arg5;
- (void)invalidate;
- (id)observedQuantityTypes;
- (void)pauseUpdates;
- (long long)previousDayCacheIndex;
- (id)previousDayDateInterval;
- (id)previousDayHeartRateStatisticsBuilder;
- (id)previousDayStatisticsBuilder;
- (id)previousDayStatisticsBuilderTag;
- (void)reportTargetDayHeartRateAnalytics;
- (void)resumeUpdates;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setPreviousDayCacheIndex:(long long)arg1;
- (void)setPreviousDayDateInterval:(id)arg1;
- (void)setPreviousDayStatisticsBuilderTag:(id)arg1;
- (void)setTargetDayCacheIndex:(long long)arg1;
- (void)setTargetDayDateInterval:(id)arg1;
- (void)setTargetDayStatisticsBuilderTag:(id)arg1;
- (long long)targetDayCacheIndex;
- (id)targetDayDateInterval;
- (id)targetDayHeartRateStatisticsBuilder;
- (id)targetDayStatisticsBuilder;
- (id)targetDayStatisticsBuilderTag;
- (bool)updateWithError:(id*)arg1;

@end