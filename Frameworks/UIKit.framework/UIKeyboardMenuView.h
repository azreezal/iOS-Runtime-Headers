/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, UITableView, UIView;

@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    double _dismissDelay;
    double dismissDelay;
    int m_firstVisibleRow;
    int m_mode;
    } m_point;
    float m_pointerOffset;
    } m_referenceRect;
    int m_scrollDirection;
    double m_scrollStartTime;
    NSTimer *m_scrollTimer;
    BOOL m_scrollable;
    BOOL m_scrolling;
    UIView *m_selExtraView;
    UIView *m_shadowView;
    BOOL m_shouldFade;
    UITableView *m_table;
    int m_visibleRows;
}

@property double dismissDelay;
@property(readonly) int mode;

- (void)_delayedFade;
- (void)applicationWillSuspend:(id)arg1;
- (void)autoscrollTimerFired:(id)arg1;
- (void)dealloc;
- (int)defaultSelectedIndex;
- (void)didSelectItemAtIndex:(int)arg1;
- (double)dismissDelay;
- (void)endScrolling:(id)arg1;
- (void)fade;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)fadeWithDelay:(double)arg1;
- (id)font;
- (void)hide;
- (void)highlightRow:(int)arg1;
- (int)indexForIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isVisible;
- (int)mode;
- (int)numberOfItems;
- (struct CGSize { float x1; float x2; })preferredSize;
- (void)removeFromSuperview;
- (void)selectItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDismissDelay:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayForCell:(id)arg1;
- (void)setNeedsDisplayForTopBottomCells;
- (void)show;
- (void)showAsHUD;
- (void)showAsPopupFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)stopAnyAutoscrolling;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)titleForItemAtIndex:(int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
