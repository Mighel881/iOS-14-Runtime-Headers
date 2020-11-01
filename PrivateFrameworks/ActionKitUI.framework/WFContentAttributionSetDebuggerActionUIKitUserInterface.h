/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

@interface WFContentAttributionSetDebuggerActionUIKitUserInterface : WFActionUserInterface <WFContentAttributionSetDebuggerActionUserInterface> {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)done;
- (void)finish;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)showWithInput:(id)arg1 completionHandler:(id /* block */)arg2;

@end