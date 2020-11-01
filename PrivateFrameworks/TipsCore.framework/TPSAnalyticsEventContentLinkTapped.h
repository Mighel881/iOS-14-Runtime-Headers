/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
 */

@interface TPSAnalyticsEventContentLinkTapped : TPSAnalyticsEvent {
    NSString * _contentID;
}

@property (nonatomic, readonly) NSString *contentID;

+ (id)eventWithContentID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithContentID:(id)arg1;
- (id)contentID;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;

@end