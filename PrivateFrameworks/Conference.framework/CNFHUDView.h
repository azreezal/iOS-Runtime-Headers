/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class NSArray;

@interface CNFHUDView : UIView {
    NSArray *_buttons;
    id _delegate;
    int _style;
}

@property id delegate;
@property(readonly) int style;

- (id)_buttonForButtonTag:(int)arg1;
- (int)_buttonPositionForButton:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (struct CGSize { float x1; float x2; })_defaultButtonSizeForButton:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForStyle:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dim;
- (id)initWithStyle:(int)arg1 buttons:(id)arg2;
- (void)layoutSubviews;
- (void)setButton:(int)arg1 isSelected:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIconOrientation:(int)arg1;
- (void)setTitle:(id)arg1 image:(id)arg2 forButtonTag:(int)arg3;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;
- (void)undim;

@end
