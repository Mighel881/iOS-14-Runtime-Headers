/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFObservableArrayResult : WFObservableResult {
    WFWorkflowQuery * _query;
    WFCoreDataResultState * _resultState;
    NSArray * _values;
}

@property (nonatomic, readonly) WFWorkflowQuery *query;
@property (nonatomic, copy) WFCoreDataResultState *resultState;
@property (nonatomic, readonly) NSArray *values;

+ (void)getResultWithQuery:(id)arg1 valueType:(Class)arg2 glyphSize:(struct CGSize { double x1; double x2; })arg3 completionHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)handleChangeNotification:(id)arg1;
- (id)initWithValueType:(Class)arg1 glyphSize:(struct CGSize { double x1; double x2; })arg2 initialValues:(id)arg3 query:(id)arg4 resultState:(id)arg5;
- (id)query;
- (id)resultState;
- (void)setResultState:(id)arg1;
- (id)values;

@end
