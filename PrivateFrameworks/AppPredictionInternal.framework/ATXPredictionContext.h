/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXPredictionContext : NSObject <ATXProtoBufWrapper, BMStoreData, NSSecureCoding> {
    ATXPredictionAmbientLightContext * _ambientLightContext;
    ATXPredictionDeviceStateContext * _deviceStateContext;
    bool  _isOverridden;
    ATXPredictionLocationMotionContext * _locationMotionContext;
    ATXPredictionTimeContext * _timeContext;
    ATXPredictionUserContext * _userContext;
}

@property (nonatomic, retain) ATXPredictionAmbientLightContext *ambientLightContext;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ATXPredictionDeviceStateContext *deviceStateContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOverridden;
@property (nonatomic, retain) ATXPredictionLocationMotionContext *locationMotionContext;
@property (readonly) Class superclass;
@property (nonatomic, retain) ATXPredictionTimeContext *timeContext;
@property (nonatomic, retain) ATXPredictionUserContext *userContext;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ambientLightContext;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceStateContext;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceStateContext:(id)arg1 timeContext:(id)arg2 locationMotionContext:(id)arg3 ambientLightContext:(id)arg4 userContext:(id)arg5;
- (id)initWithDeviceStateContext:(id)arg1 timeContext:(id)arg2 locationMotionContext:(id)arg3 ambientLightContext:(id)arg4 userContext:(id)arg5 isOverridden:(bool)arg6;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPredictionContext:(id)arg1;
- (bool)isOverridden;
- (id)json;
- (id)jsonDict;
- (id)locationMotionContext;
- (id)proto;
- (id)serialize;
- (void)setAmbientLightContext:(id)arg1;
- (void)setDeviceStateContext:(id)arg1;
- (void)setLocationMotionContext:(id)arg1;
- (void)setTimeContext:(id)arg1;
- (void)setUserContext:(id)arg1;
- (id)timeContext;
- (void)updateWithInjectedContext:(id)arg1;
- (id)userContext;

@end
