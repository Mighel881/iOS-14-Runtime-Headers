/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXImportSectionHeaderLayoutProvider : NSObject <PXGSingleViewLayoutDelegate, PXPhotosSectionHeaderLayoutProvider, _PXImportSectionHeaderLayoutInteractionDelegate> {
    PLDateRangeFormatter * _dateRangeFormatter;
    UIImage * _gradientImage;
    PXImportHistorySectionHeaderView * _referenceHeaderView;
    PXPhotosViewModel * _viewModel;
    <PXPhotosSectionHeaderLayoutViewProvider> * _viewProvider;
}

@property (nonatomic, readonly) PLDateRangeFormatter *dateRangeFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIImage *gradientImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXImportHistorySectionHeaderView *referenceHeaderView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;
@property (nonatomic, readonly) <PXPhotosSectionHeaderLayoutViewProvider> *viewProvider;

- (void).cxx_destruct;
- (id)configurationForSingleViewLayout:(id)arg1;
- (id)createSectionHeaderLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg3 spec:(id)arg4 outShouldFloat:(bool*)arg5;
- (id)dateRangeFormatter;
- (id)gradientImage;
- (id)init;
- (id)initWithViewModel:(id)arg1 viewProvider:(id)arg2;
- (id)referenceHeaderView;
- (void)sectionHeader:(id)arg1 didToggleSelectedState:(bool)arg2;
- (void)sectionedLayout:(id)arg1 headerLayout:(id)arg2 didChangeDataSource:(id)arg3 sectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg4 hasSectionChanges:(bool)arg5;
- (struct CGSize { double x1; double x2; })singleViewLayout:(id)arg1 desiredSizeForReferenceSize:(struct CGSize { double x1; double x2; })arg2;
- (id)viewModel;
- (id)viewProvider;

@end