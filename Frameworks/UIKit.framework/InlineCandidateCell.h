/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIFont;

@interface InlineCandidateCell : UIView {
    struct CGSize { 
        float width; 
        float height; 
    SEL _action;
    NSString *_candidate;
    BOOL _dontDrawRightEdge;
    UIFont *_font;
    BOOL _highlighted;
    unsigned int _index;
    BOOL _lastItem;
    } _stringImageSize;
    id _target;
}

- (void)dealloc;
- (void)dontDrawRightEdge:(BOOL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)index;
- (id)initWithCandidate:(id)arg1 andIndex:(unsigned int)arg2 withFontSize:(float)arg3 target:(id)arg4 action:(SEL)arg5;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLastItem:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })stringImageSize;

@end
