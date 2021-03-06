/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryVisitsInRedirectChainPredicate : NSObject <WBSHistoryVisitPredicate> {
    long long  _direction;
    WBSSetInt64 * _ignoredItemIdentifiers;
    WBSSetInt64 * _visitIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long direction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSSetInt64 *ignoredItemIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WBSSetInt64 *visitIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateServiceVisit:(id)arg1;
- (bool)evaluateVisit:(id)arg1;
- (id)ignoredItemIdentifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistoryVisits:(id)arg1 ignoredItems:(id)arg2 direction:(long long)arg3;
- (id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id*)arg4;
- (id)visitIdentifiers;

@end
