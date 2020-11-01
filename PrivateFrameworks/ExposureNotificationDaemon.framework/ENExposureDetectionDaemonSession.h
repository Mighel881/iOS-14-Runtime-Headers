/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
 */

@interface ENExposureDetectionDaemonSession : NSObject {
    ENAdvertisementDatabaseQuerySession * _advertisementDatabaseQuerySession;
    ENXPCClient * _client;
    ENExposureConfiguration * _clientExposureConfiguration;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    ENExposureCalculationSession * _exposureCalculationSession;
    ENExposureDatabase * _exposureDatabase;
    bool  _finished;
    ENExposureDetectionHistorySession * _historySession;
    bool  _prepared;
    ENExposureClassification * _previousExposureClassification;
    ENRegionConfiguration * _regionConfiguration;
    ENRegionServerConfiguration * _regionServerConfiguration;
    ENRegionServerExposureConfiguration * _serverExposureConfiguration;
    NSDate * _sessionDate;
    ENExposureConfiguration * _sessionExposureConfiguration;
    bool  _shouldCopyStatistics;
    bool  _skipFileSigningVerification;
    ENExposureDetectionDaemonSessionStatistics * _statistics;
    unsigned long long  _tekMatchBatchSize;
    bool  _useCache;
}

@property (nonatomic, retain) ENAdvertisementDatabaseQuerySession *advertisementDatabaseQuerySession;
@property (nonatomic, retain) ENXPCClient *client;
@property (nonatomic, retain) ENExposureConfiguration *clientExposureConfiguration;
@property (nonatomic, readonly) ENExposureCalculationSession *exposureCalculationSession;
@property (nonatomic, retain) ENExposureDatabase *exposureDatabase;
@property (nonatomic, readonly) ENExposureDetectionHistorySession *historySession;
@property (nonatomic, retain) ENExposureClassification *previousExposureClassification;
@property (nonatomic, copy) ENRegionConfiguration *regionConfiguration;
@property (nonatomic, copy) ENRegionServerConfiguration *regionServerConfiguration;
@property (nonatomic, copy) ENRegionServerExposureConfiguration *serverExposureConfiguration;
@property (nonatomic, copy) NSDate *sessionDate;
@property (nonatomic, readonly, copy) ENExposureConfiguration *sessionExposureConfiguration;
@property (nonatomic) bool skipFileSigningVerification;
@property (nonatomic, readonly, copy) ENExposureDetectionDaemonSessionStatistics *statistics;
@property (nonatomic) unsigned long long tekMatchBatchSize;

- (void).cxx_destruct;
- (void)_addFileToHistory:(id)arg1 endpoint:(id)arg2 keyCount:(unsigned long long)arg3 matchCount:(unsigned long long)arg4;
- (bool)_checkFinishedAndReturnError:(id*)arg1;
- (bool)_checkPreparedAndReturnError:(id*)arg1;
- (id)_prepareExposureCalculationSessionWithError:(id*)arg1;
- (bool)_shouldMatchPersistenKey:(id)arg1;
- (void)_updateStatisticsWithHandler:(id /* block */)arg1;
- (bool)_verifySignature:(id)arg1 forFile:(id)arg2 publicKey:(id)arg3 error:(id*)arg4;
- (bool)addMatchesFromKeyFile:(id)arg1 signature:(id)arg2 publicKey:(id)arg3 endpoint:(id)arg4 error:(id*)arg5;
- (id)advertisementDatabaseQuerySession;
- (bool)classifyExposureWithResult:(id)arg1 error:(id*)arg2;
- (id)client;
- (id)clientExposureConfiguration;
- (id)description;
- (id)exposureCalculationSession;
- (id)exposureDatabase;
- (id)finishAndReturnError:(id*)arg1;
- (id)getAnalysisSessionAndReturnError:(id*)arg1;
- (id)getSummaryAndReturnError:(id*)arg1;
- (id)historySession;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (bool)prepareAndReturnError:(id*)arg1;
- (bool)prepareConfiguration:(id)arg1 bundleIdentifier:(id)arg2 nowDate:(id)arg3 expiryInterval:(double)arg4 error:(id*)arg5;
- (id)previousExposureClassification;
- (id)regionConfiguration;
- (id)regionServerConfiguration;
- (id)serverExposureConfiguration;
- (id)sessionDate;
- (id)sessionExposureConfiguration;
- (void)setAdvertisementDatabaseQuerySession:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setClientExposureConfiguration:(id)arg1;
- (void)setExposureDatabase:(id)arg1;
- (void)setPreviousExposureClassification:(id)arg1;
- (void)setRegionConfiguration:(id)arg1;
- (void)setRegionServerConfiguration:(id)arg1;
- (void)setServerExposureConfiguration:(id)arg1;
- (void)setSessionDate:(id)arg1;
- (void)setSkipFileSigningVerification:(bool)arg1;
- (void)setTekMatchBatchSize:(unsigned long long)arg1;
- (bool)skipFileSigningVerification;
- (id)statistics;
- (unsigned long long)tekMatchBatchSize;

@end