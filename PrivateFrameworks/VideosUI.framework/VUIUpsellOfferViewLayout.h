/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIUpsellOfferViewLayout : TVViewLayout {
    VUITextLayout * _descriptionTextLayout;
    TVImageLayout * _imageLayout;
    VUITextLayout * _titleTextLayout;
}

@property (nonatomic, readonly) VUITextLayout *descriptionTextLayout;
@property (nonatomic, readonly) TVImageLayout *imageLayout;
@property (nonatomic, readonly) VUITextLayout *titleTextLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;

- (void).cxx_destruct;
- (void)_configureLayout;
- (id)descriptionTextLayout;
- (double)descriptionTopMargin;
- (id)imageLayout;
- (id)init;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (id)titleTextLayout;
- (double)titleTopMarginPad;
- (double)titleTopMarginPhone;

@end
