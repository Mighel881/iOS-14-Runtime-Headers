/* Generated by RuntimeBrowser.
 */

@protocol BNPresentable <BNPresentableObserving>

@required

- (NSString *)requestIdentifier;
- (NSString *)requesterIdentifier;
- (UIViewController *)viewController;

@optional

- (void)draggingDidBeginWithGestureProxy:(id <BNPanGestureProxy>)arg1;
- (bool)isDraggingDismissalEnabled;
- (bool)isDraggingInteractionEnabled;
- (bool)isTouchOutsideDismissalEnabled;
- (NSString *)presentableDescription;
- (long long)presentableType;

@end
