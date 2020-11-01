/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
 */

@interface TPSAnalyticsEventContentIneligible : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _contentID;
    NSString * _context;
    unsigned long long  _displayType;
    long long  _reason;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) unsigned long long displayType;
@property (nonatomic, readonly) long long reason;

+ (id)eventWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 reason:(long long)arg5 date:(id)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 reason:(long long)arg5 date:(id)arg6;
- (id)bundleID;
- (id)contentID;
- (id)context;
- (unsigned long long)displayType;
- (id)duetEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (long long)reason;

@end