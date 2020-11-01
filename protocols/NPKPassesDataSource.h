/* Generated by RuntimeBrowser.
 */

@protocol NPKPassesDataSource <NSObject>

@required

- (void)enableRemoteUpdates;
- (void)movePassAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (PKPass *)passForUniqueID:(NSString *)arg1;
- (NSArray *)passes;
- (NSArray *)paymentPasses;
- (void)registerObserver:(id <NPKPassesDataSourceObserver>)arg1;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)removePass:(PKPass *)arg1;
- (void)setDefaultPaymentPass:(PKPaymentPass *)arg1;
- (bool)shouldAllowMovingItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)suppressRemoteUpdates;
- (void)unregisterObserver:(id <NPKPassesDataSourceObserver>)arg1;

@end