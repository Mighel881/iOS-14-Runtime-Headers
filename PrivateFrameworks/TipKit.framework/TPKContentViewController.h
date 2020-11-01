/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipKit.framework/TipKit
 */

@interface TPKContentViewController : UIViewController <UIPopoverPresentationControllerDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  __clientProvidedPreferredContentSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __clientProvidedSourceRect;
    TPKContentController * __contentController;
    UIBarItem * _barItem;
    UIViewController * _sourceViewController;
}

@property (nonatomic) struct CGSize { double x1; double x2; } _clientProvidedPreferredContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _clientProvidedSourceRect;
@property (nonatomic) TPKContentController *_contentController;
@property (nonatomic, retain) UIBarItem *barItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (nonatomic) UIViewController *sourceViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_clientProvidedPreferredContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clientProvidedSourceRect;
- (id)_contentController;
- (void)_contentSizeCategoryDidChange;
- (id)_passthroughViewsForView:(id)arg1;
- (id)_passthroughViewsForViewController:(id)arg1;
- (void)_tpkSetPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updatePopoverSize;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)barItem;
- (void)dismissPopoverAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initPopoverWithContentView:(id)arg1 sourceViewController:(id)arg2;
- (bool)isModalInPresentation;
- (id)popoverPresentationController;
- (void)prepareForPopoverPresentation:(id)arg1;
- (bool)presentationControllerShouldDismiss:(id)arg1;
- (void)setBarItem:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setSourceViewController:(id)arg1;
- (void)set_clientProvidedPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)set_clientProvidedSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_contentController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (id)sourceViewController;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end