/* Generated by RuntimeBrowser
   Image: /usr/lib/libcolorpicker.dylib
 */

@interface HBColorPickerTableCell : PSTableCell <HBColorPickerDelegate> {
    HBColorWell * _colorWell;
    HBColorPickerViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_colorValue;
- (void)_colorWellValueChanged:(id)arg1;
- (id)_hbcp_default;
- (id)_hbcp_defaults;
- (id)_hbcp_key;
- (bool)_hbcp_supportsAlpha;
- (void)_present;
- (void)_setColorValue:(id)arg1;
- (void)_updateValue;
- (void)colorPicker:(id)arg1 didSelectColor:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)tintColorDidChange;

@end
