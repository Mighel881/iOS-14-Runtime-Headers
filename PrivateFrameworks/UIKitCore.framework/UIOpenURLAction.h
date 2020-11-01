/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIOpenURLAction : BSAction

@property (nonatomic, readonly, copy) NSURL *url;
@property (nonatomic, readonly) BSProcessHandle *workspaceOriginatingProcess;

- (long long)UIActionType;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 workspaceOriginatingProcess:(id)arg2;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)url;
- (id)workspaceOriginatingProcess;

@end