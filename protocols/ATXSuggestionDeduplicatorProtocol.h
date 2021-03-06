/* Generated by RuntimeBrowser.
 */

@protocol ATXSuggestionDeduplicatorProtocol <NSObject>

@required

- (ATXHomeScreenWidgetIdentifiable *)duplicateWidgetForWidgetSuggestion:(ATXProactiveSuggestion *)arg1 otherWidgets:(NSArray *)arg2;
- (NSArray *)pinnedWidgetIdentifiablesWithExtensionId:(NSString *)arg1 homeScreenPageConfig:(ATXHomeScreenPage *)arg2 excludingStackConfigId:(NSString *)arg3 shouldStopAfterFindingFirstOne:(bool)arg4;
- (bool)suggestionIsDuplicate:(ATXProactiveSuggestion *)arg1 appsOnHomeScreenPageAtIndex:(unsigned long long)arg2;
- (bool)suggestionIsDuplicate:(ATXProactiveSuggestion *)arg1 existingSuggestions:(NSArray *)arg2;
- (bool)suggestionIsDuplicate:(ATXProactiveSuggestion *)arg1 homeScreenPageConfig:(ATXHomeScreenPage *)arg2;
- (bool)suggestionIsDuplicate:(ATXProactiveSuggestion *)arg1 otherApps:(NSSet *)arg2;
- (bool)suggestionIsDuplicateAppOrWidget:(ATXProactiveSuggestion *)arg1 homeScreenPageConfig:(ATXHomeScreenPage *)arg2 excludingStackConfigId:(NSString *)arg3;
- (bool)suggestionIsDuplicateOfDeweyUI:(ATXProactiveSuggestion *)arg1;
- (bool)widgetExtensionIdIsDuplicate:(NSString *)arg1 homeScreenPageConfig:(ATXHomeScreenPage *)arg2 excludingStackConfigId:(NSString *)arg3;
- (bool)widgetExtensionIdIsPinned:(NSString *)arg1 homeScreenPageConfig:(ATXHomeScreenPage *)arg2 excludingStackConfigId:(NSString *)arg3;
- (bool)widgetSuggestionIsDuplicate:(ATXProactiveSuggestion *)arg1 homeScreenPageConfig:(ATXHomeScreenPage *)arg2 excludingStackConfigId:(NSString *)arg3;
- (bool)widgetSuggestionIsPinned:(ATXProactiveSuggestion *)arg1 homeScreenPage:(ATXHomeScreenPage *)arg2 excludingStackConfigId:(NSString *)arg3;

@end
