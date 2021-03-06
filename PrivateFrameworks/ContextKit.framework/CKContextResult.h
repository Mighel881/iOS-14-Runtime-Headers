/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
 */

@interface CKContextResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _category;
    NSString * _debug;
    bool  _exactMatch;
    long long  _minPrefix;
    NSString * _query;
    NSOrderedSet * _relatedItems;
    NSSet * _tags;
    NSString * _title;
    NSString * _topicId;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *debug;
@property (getter=isExactMatch, nonatomic) bool exactMatch;
@property (nonatomic) long long minPrefix;
@property (nonatomic, copy) NSString *portraitId;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSOrderedSet *relatedItems;
@property (nonatomic, copy) NSSet *tags;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *topicId;
@property (nonatomic, copy) NSURL *url;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debug;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 query:(id)arg2 url:(id)arg3 category:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isExactMatch;
- (long long)minPrefix;
- (id)portraitId;
- (id)query;
- (id)relatedItems;
- (void)setCategory:(id)arg1;
- (void)setDebug:(id)arg1;
- (void)setExactMatch:(bool)arg1;
- (void)setMinPrefix:(long long)arg1;
- (void)setPortraitId:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setRelatedItems:(id)arg1;
- (void)setTags:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopicId:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)tags;
- (id)title;
- (id)topicId;
- (id)url;

@end
