/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOFailedCompletionTicket : _GEOFailedTicket <GEOMapServiceCompletionTicket> {
    NSString * _searchQuery;
    NSString * searchQuery;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } dataRequestKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (getter=_searchQuery, nonatomic, readonly) NSString *searchQuery;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (id)_searchQuery;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2;
- (void)applyToSuggestionList:(id)arg1;
- (bool)autocompleteTopSectionIsQuerySuggestions;
- (id)clientRankingModel;
- (bool)hasShouldDisplayNoResults;
- (id)initWithError:(id)arg1 searchQuery:(id)arg2 traits:(id)arg3;
- (bool)isRapEnabled;
- (bool)matchesFragment:(id)arg1;
- (double)retainSearchTime;
- (bool)shouldDisplayNoResults;
- (bool)showAutocompleteClientSource;
- (id)sortPriorityMapping;
- (void)submitWithAutoCompletionHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end