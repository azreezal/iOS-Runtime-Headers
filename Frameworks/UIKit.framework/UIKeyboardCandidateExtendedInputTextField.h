/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIKeyboardCandidateExtendedInputTextFieldDelegate>, NSString, NSTimer, UILabel, UIView;

@interface UIKeyboardCandidateExtendedInputTextField : UIView {
    BOOL _caretBlinking;
    NSTimer *_caretTimer;
    UIView *_caretView;
    <UIKeyboardCandidateExtendedInputTextFieldDelegate> *_delegate;
    UILabel *_label;
}

@property BOOL caretBlinking;
@property(retain) NSTimer * caretTimer;
@property(retain) UIView * caretView;
@property <UIKeyboardCandidateExtendedInputTextFieldDelegate> * delegate;
@property(retain) UILabel * label;
@property(copy) NSString * text;

+ (id)font;

- (BOOL)caretBlinking;
- (id)caretTimer;
- (void)caretTimerFired:(id)arg1;
- (id)caretView;
- (void)dealloc;
- (id)delegate;
- (void)hideCaret;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layout;
- (void)setCaretBlinking:(BOOL)arg1;
- (void)setCaretTimer:(id)arg1;
- (void)setCaretView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLabel:(id)arg1;
- (void)setText:(id)arg1;
- (void)showCaret;
- (id)text;
- (int)textEffectsVisibilityLevel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
