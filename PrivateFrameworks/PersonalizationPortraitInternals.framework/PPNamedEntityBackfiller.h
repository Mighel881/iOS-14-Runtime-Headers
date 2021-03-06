/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPNamedEntityBackfiller : NSObject {
    PPNamedEntityStore * _namedEntityStore;
    PPTopicStore * _topicStore;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)backfillEntityMappingAndDonationWithShouldContinueBlock:(id /* block */)arg1;
- (id)initWithNamedEntityStore:(id)arg1 topicStore:(id)arg2;

@end
