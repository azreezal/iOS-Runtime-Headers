/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class ASApplicationPageCellConfiguration, NSString, SUItemLink, SUTableCell;

@interface ASApplicationPageCell : UIControl {
    SUTableCell *_cell;
    ASApplicationPageCellConfiguration *_configuration;
    SUItemLink *_itemLink;
}

@property(copy) SUItemLink * itemLink;
@property(copy) NSString * label;
@property float labelColumnWidth;
@property(readonly) float labelWidth;
@property(copy) NSString * value;

+ (id)backgroundColorForIndex:(unsigned int)arg1;

- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)itemLink;
- (id)label;
- (float)labelColumnWidth;
- (float)labelWidth;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setItemLink:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelColumnWidth:(float)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (void)sizeToFit;
- (id)value;

@end
