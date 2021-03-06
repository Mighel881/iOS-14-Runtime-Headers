/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAudioConfigurationOperation : FCOperation {
    <FCContentContext> * _context;
    id /* block */  _fetchCompletionHandler;
    NSString * _resultConfigString;
}

@property (nonatomic, readonly) <FCContentContext> *context;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property (nonatomic, retain) NSString *resultConfigString;

- (void).cxx_destruct;
- (id)_promiseConfiguration;
- (id)_promiseConfiguration:(id)arg1;
- (id)context;
- (id /* block */)fetchCompletionHandler;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultConfigString;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setResultConfigString:(id)arg1;
- (bool)validateOperation;

@end
