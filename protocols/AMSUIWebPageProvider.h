/* Generated by RuntimeBrowser.
 */

@protocol AMSUIWebPageProvider <AMSUIWebModelInterface>

@required

- (UIViewController<AMSUIWebPagePresenter> *)createViewController;
- (bool)disableReappearPlaceholder;
- (AMSUIWebNavigationBarModel *)navigationBar;

@end