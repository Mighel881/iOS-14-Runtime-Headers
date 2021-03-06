/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FASharedSubscriptionSpecifierProvider : NSObject {
    ACAccount * _appleAccount;
    NSDictionary * _cachedResourceDictionary;
    <FASharedSubscriptionSpecifierProviderDelegeate> * _delegate;
    bool  _isLoadingSpecifiers;
    NSOperationQueue * _networkActivityQueue;
    PSListController * _presenter;
    FASharedServicesResponse * _sharedSubscriptionResponse;
    unsigned long long  _specifierState;
    NSArray * _specifiers;
    PSSpecifier * _spinnerCell;
    bool  _updateSubsriptionSpecifiers;
}

@property (nonatomic) <FASharedSubscriptionSpecifierProviderDelegeate> *delegate;
@property (nonatomic, copy) NSArray *specifiers;

- (void).cxx_destruct;
- (void)_delayedLoadIfNeeded;
- (void)_handleSubscriptionListResponse:(id)arg1;
- (id)_iconURLStringForService:(id)arg1;
- (bool)_launchWithResourceDictionary:(id)arg1;
- (void)_loadSubscriptionServices;
- (void)_serviceSpecifierWasTapped:(id)arg1;
- (id)_serviceSpecifiersFromArray:(id)arg1;
- (id)_sharedSubscriptionGroupSpecifier;
- (id)_specifierNamed:(id)arg1;
- (id)_valueForServiceSpecifier:(id)arg1;
- (id)delegate;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithAppleAccount:(id)arg1 presenter:(id)arg2;
- (void)reloadSpecifiers;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;

@end
