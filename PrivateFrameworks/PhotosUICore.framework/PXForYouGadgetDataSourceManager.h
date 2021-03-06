/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouGadgetDataSourceManager : PXGadgetDataSourceManager <PXCMMCloudGadgetViewControllerDelegate, PXSettingsKeyObserver> {
    PXCloudWelcomeGadgetProvider * _CMMCloudWelcomeGadgetProvider;
    PXCMMInvitationsHorizontalGadgetProvider * _CMMInvitationsHorizontalGadgetProvider;
    PXCMMSuggestionsHorizontalGadgetProvider * _CMMSuggestionsHorizontalGadgetProvider;
    PXForYouEditSuggestionsGadgetProvider * _editSuggestionsGadgetProvider;
    PXHorizontalCollectionGadgetProvider * _editSuggestionsHorizontalGadgetProvider;
    PXForYouFooterGadgetProvider * _footerGadgetProvider;
    NSArray * _gadgetProviders;
    PXSharedAlbumActivityHorizontalGadgetProvider * _icpsActivityHorizontalGadgetProvider;
    PXHorizontalCollectionGadgetProvider * _inboxHorizontalGadgetProvider;
    bool  _isLaunchedToTest;
    PXForYouMemoryGadgetProvider * _memoryGadgetProvider;
    PXPeopleQuestionsGadgetProvider * _peopleQuestionsGadgetProvider;
    PXHorizontalCollectionGadgetProvider * _peopleQuestionsHorizontalGadgetProvider;
    PXForYouGadgetPriorityManager * _priorityManager;
    PXHorizontalCollectionGadgetProvider * _recentInterestSuggestionsHorizontalGadgetProvider;
    PXForYouRecentInterestSuggestionsGadgetProvider * _recentInterestsSuggestionsGadgetProvider;
    PXSampleSuggestionProvider * _sampleSuggestionGadgetsProvider;
}

@property (nonatomic, retain) PXCloudWelcomeGadgetProvider *CMMCloudWelcomeGadgetProvider;
@property (nonatomic, retain) PXCMMInvitationsHorizontalGadgetProvider *CMMInvitationsHorizontalGadgetProvider;
@property (nonatomic, retain) PXCMMSuggestionsHorizontalGadgetProvider *CMMSuggestionsHorizontalGadgetProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXForYouEditSuggestionsGadgetProvider *editSuggestionsGadgetProvider;
@property (nonatomic, retain) PXHorizontalCollectionGadgetProvider *editSuggestionsHorizontalGadgetProvider;
@property (nonatomic, retain) PXForYouFooterGadgetProvider *footerGadgetProvider;
@property (nonatomic, readonly) <PXGadgetTransition> *gadgetTransition;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXSharedAlbumActivityHorizontalGadgetProvider *icpsActivityHorizontalGadgetProvider;
@property (nonatomic, retain) PXHorizontalCollectionGadgetProvider *inboxHorizontalGadgetProvider;
@property (nonatomic, readonly) bool isLaunchedToTest;
@property (nonatomic, retain) PXForYouMemoryGadgetProvider *memoryGadgetProvider;
@property (nonatomic) <PXGadgetDelegate> *nextGadgetResponder;
@property (nonatomic, retain) PXPeopleQuestionsGadgetProvider *peopleQuestionsGadgetProvider;
@property (nonatomic, retain) PXHorizontalCollectionGadgetProvider *peopleQuestionsHorizontalGadgetProvider;
@property (nonatomic, readonly) PXForYouGadgetPriorityManager *priorityManager;
@property (nonatomic, retain) PXHorizontalCollectionGadgetProvider *recentInterestSuggestionsHorizontalGadgetProvider;
@property (nonatomic, retain) PXForYouRecentInterestSuggestionsGadgetProvider *recentInterestsSuggestionsGadgetProvider;
@property (nonatomic, readonly) PXGadgetNavigationHelper *rootNavigationHelper;
@property (nonatomic, retain) PXSampleSuggestionProvider *sampleSuggestionGadgetsProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CMMCloudWelcomeGadgetProvider;
- (id)CMMInvitationsHorizontalGadgetProvider;
- (id)CMMSuggestionsHorizontalGadgetProvider;
- (long long)_adjustComparasionForInbox:(long long)arg1 gadgetType1:(unsigned long long)arg2 gadgeType2:(unsigned long long)arg3;
- (unsigned long long)_adjustGadgetTypeForRanking:(unsigned long long)arg1;
- (void)_calendarDayChanged;
- (void)_calendarDayChangedForced:(bool)arg1;
- (bool)_canShowSurveyQuestionsGadget;
- (long long)_compareRank1:(long long)arg1 rank2:(long long)arg2;
- (void)_forceCalendarDayChanged;
- (bool)_gadgetProviderIsInbox:(id)arg1;
- (bool)_resetSortingRanksIfNecessary;
- (void)_updatePrioritiesForCalendarChange;
- (void)didLoadDataForPriorities;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)arg1;
- (id)editSuggestionsGadgetProvider;
- (id)editSuggestionsHorizontalGadgetProvider;
- (id)footerGadgetProvider;
- (id /* block */)gadgetProviderSortComparator;
- (id)gadgetProviders;
- (id /* block */)gadgetSortComparator;
- (id)hiddenGadgetProviders;
- (id)icpsActivityHorizontalGadgetProvider;
- (id)inboxHorizontalGadgetProvider;
- (id)initWithPriorityManager:(id)arg1 isLaunchedToTest:(bool)arg2;
- (bool)isLaunchedToTest;
- (id)memoryGadgetProvider;
- (id)peopleQuestionsGadgetProvider;
- (id)peopleQuestionsHorizontalGadgetProvider;
- (void)presentationRequestForWelcomeCloudViewController:(id)arg1;
- (id)priorityManager;
- (id)recentInterestSuggestionsHorizontalGadgetProvider;
- (id)recentInterestsSuggestionsGadgetProvider;
- (void)removeCachedProviders;
- (id)sampleSuggestionGadgetsProvider;
- (void)setCMMCloudWelcomeGadgetProvider:(id)arg1;
- (void)setCMMInvitationsHorizontalGadgetProvider:(id)arg1;
- (void)setCMMSuggestionsHorizontalGadgetProvider:(id)arg1;
- (void)setEditSuggestionsGadgetProvider:(id)arg1;
- (void)setEditSuggestionsHorizontalGadgetProvider:(id)arg1;
- (void)setFooterGadgetProvider:(id)arg1;
- (void)setIcpsActivityHorizontalGadgetProvider:(id)arg1;
- (void)setInboxHorizontalGadgetProvider:(id)arg1;
- (void)setMemoryGadgetProvider:(id)arg1;
- (void)setPeopleQuestionsGadgetProvider:(id)arg1;
- (void)setPeopleQuestionsHorizontalGadgetProvider:(id)arg1;
- (void)setRecentInterestSuggestionsHorizontalGadgetProvider:(id)arg1;
- (void)setRecentInterestsSuggestionsGadgetProvider:(id)arg1;
- (void)setSampleSuggestionGadgetsProvider:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
