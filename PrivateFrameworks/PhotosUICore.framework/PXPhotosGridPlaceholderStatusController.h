/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosGridPlaceholderStatusController : NSObject {
    PXCPLUIStatusProvider * _cplUIStatusProvider;
    NSString * _fallbackMessage;
    NSString * _fallbackTitle;
    bool  _presentCPLStatus;
    PXCPLStatusController * _statusController;
    PXStatusView * _statusView;
}

@property (nonatomic, readonly) PXStatusView *statusView;

- (void).cxx_destruct;
- (id)_createCPLUIStatusProvider;
- (void)_refreshCPLUIStatusProvider;
- (void)_systemPhotoLibraryDidChange;
- (id)init;
- (id)initForPresentingCPLStatus:(bool)arg1 fallbackTitle:(id)arg2 fallbackMessage:(id)arg3;
- (void)setCplUIStatusProvider:(id)arg1;
- (id)statusView;

@end
