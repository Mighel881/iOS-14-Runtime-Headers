/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBlackcombFaceView : NTKAnalogFaceView <CLKMonochromeFilterProvider> {
    UIView * _backgroundContainerView;
    NTKBlackcombBackgroundView * _backgroundView;
    NTKFullscreenSubdialComplicationFactory * _complicationFactory;
    NTKBlackcombDialColorPalette * _dialColorPalette;
    UIImageView * _editingNotchBackgroundView;
    unsigned long long  _faceColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyComplicationTransitionFraction:(double)arg1 fromBlackcombDialColor:(unsigned long long)arg2 toBlackcombDialColor:(unsigned long long)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromBlackcombDialColor:(unsigned long long)arg2 toBlackcombDialColor:(unsigned long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (bool)_backgroundViewShouldUseLongSideTicks;
- (void)_cleanupAfterEditing;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureTimeView:(id)arg1;
- (id)_customEditOptionContainerViewForSlot:(id)arg1;
- (long long)_editMode;
- (void)_forceUpdateColors;
- (bool)_isComplicationSlotInsideDial:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_legacyUnscaledKeylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)_pickerMaskForSlot:(id)arg1;
- (id)_platterTextColorForEditMode:(long long)arg1 color:(unsigned long long)arg2;
- (void)_prepareForEditing;
- (void)_prepareForSnapshotting;
- (void)_prepareForStatusChange:(bool)arg1;
- (void)_removeBackgroundView;
- (id)_renderBackgroundViewSwatchImageForBlackcombDialColor:(unsigned long long)arg1;
- (void)_reorderSwitcherSnapshotView;
- (id)_secondHandColorFor:(unsigned long long)arg1;
- (void)_setupBackgroundView;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (bool)_timeViewBehindContentForEditMode:(long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateHandsColors;
- (void)_updateTickLengths;
- (double)_verticalPaddingForStatusBar;
- (bool)_wantsConstantSpeedZoom;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;
- (void)setBlackcombDialColor:(unsigned long long)arg1;
- (void)setFaceColor:(unsigned long long)arg1;

@end
