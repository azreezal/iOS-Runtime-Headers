/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIView;

@interface PSTableCell : PreferencesTableCell {
    UIView *_bottomEtchLine;
    BOOL _etch;
    UIView *_topEtchLine;
}

+ (id)_cellForSpecifier:(id)arg1 defaultClass:(Class)arg2 type:(int)arg3;
+ (id)bottomEtchLineView;
+ (int)cellTypeFromString:(id)arg1;
+ (id)cellWithSpecifier:(id)arg1;
+ (id)groupHeaderCellWithSpecifier:(id)arg1;
+ (void)refreshCellContentsWithSpecifier:(id)arg1 andCell:(id)arg2;
+ (void)refreshSliderCellContentsWithSpecifier:(id)arg1 andCell:(id)arg2;
+ (void)refreshSwitchCellContentsWithSpecifier:(id)arg1 andCell:(id)arg2;
+ (void)refreshTextFieldCellContentsWithSpecifier:(id)arg1 andCell:(id)arg2;
+ (id)segmentCellWithSpecifier:(id)arg1;
+ (id)sliderCellWithSpecifier:(id)arg1;
+ (id)spinnerCellWithSpecifier:(id)arg1;
+ (id)switchCellWithSpecifier:(id)arg1;
+ (id)textFieldCellWithSpecifier:(id)arg1;
+ (id)textViewCellWithSpecifier:(id)arg1;
+ (id)topEtchLineView;

- (id)_automationID;
- (id)_contentString;
- (void)_updateEtchState:(BOOL)arg1;
- (BOOL)canReload;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)scriptingInfoWithChildren;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setIcon:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (id)titleTextLabel;

@end
