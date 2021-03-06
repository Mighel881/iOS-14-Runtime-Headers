/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

@interface WFTakePhotoActionUIKitUserInterface : WFActionUserInterface <UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFTakePhotoActionUserInterface> {
    id /* block */  _completionHandler;
    WFContentCollection * _outputCollection;
    NSMutableArray * _outputImages;
    unsigned long long  _remainingPhotos;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFContentCollection *outputCollection;
@property (nonatomic, retain) NSMutableArray *outputImages;
@property (nonatomic) unsigned long long remainingPhotos;
@property (readonly) Class superclass;

+ (long long)cameraDeviceFromString:(id)arg1;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)outputCollection;
- (id)outputImages;
- (unsigned long long)remainingPhotos;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setOutputCollection:(id)arg1;
- (void)setOutputImages:(id)arg1;
- (void)setRemainingPhotos:(unsigned long long)arg1;
- (void)showWithPhotoCount:(unsigned long long)arg1 device:(id)arg2 completionHandler:(id /* block */)arg3;

@end
