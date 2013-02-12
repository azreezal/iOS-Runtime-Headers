/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, UISelectionGrabber, UITextSelectionView, UITouch, UIView<UITextSelectingContainer>;

@interface UITextRangeView : UIView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
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
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    UITouch *m_activeTouch;
    BOOL m_animateUpdate;
    BOOL m_baseIsStart;
    } m_basePoint;
    BOOL m_commandsWereShowing;
    UIView<UITextSelectingContainer> *m_container;
    } m_endEdge;
    UISelectionGrabber *m_endGrabber;
    } m_extentPoint;
    double m_firstMovedTime;
    BOOL m_inGesture;
    } m_initialBasePoint;
    float m_initialDistance;
    } m_initialExtentPoint;
    BOOL m_inputViewIsChanging;
    BOOL m_magnifying;
    int m_mode;
    NSMutableArray *m_rectViews;
    NSArray *m_rects;
    BOOL m_rotating;
    BOOL m_scaling;
    BOOL m_scrolling;
    UITextSelectionView *m_selectionView;
    } m_startEdge;
    UISelectionGrabber *m_startGrabber;
    } m_touchOffset;
}

@property(retain) UITouch * activeTouch;
@property BOOL animateUpdate;
@property(readonly) BOOL autoscrolled;
@property BOOL baseIsStart;
@property struct CGPoint { float x1; float x2; } basePoint;
@property BOOL commandsWereShowing;
@property(readonly) UIView<UITextSelectingContainer> * container;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } endEdge;
@property(retain) UISelectionGrabber * endGrabber;
@property struct CGPoint { float x1; float x2; } extentPoint;
@property double firstMovedTime;
@property BOOL inGesture;
@property struct CGPoint { float x1; float x2; } initialBasePoint;
@property float initialDistance;
@property struct CGPoint { float x1; float x2; } initialExtentPoint;
@property BOOL inputViewIsChanging;
@property BOOL isScrolling;
@property BOOL magnifying;
@property int mode;
@property(retain) NSArray * rects;
@property BOOL rotating;
@property BOOL scaling;
@property(readonly) UITextSelectionView * selectionView;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } startEdge;
@property(retain) UISelectionGrabber * startGrabber;
@property struct CGPoint { float x1; float x2; } touchOffset;

- (id)activeTouch;
- (BOOL)animateUpdate;
- (struct CGPoint { float x1; float x2; })applyTouchOffset:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)autoscrolled;
- (BOOL)baseIsStart;
- (struct CGPoint { float x1; float x2; })basePoint;
- (void)beginMagnifying;
- (void)cancelDelayedActions;
- (BOOL)commandsWereShowing;
- (id)container;
- (struct CGPoint { float x1; float x2; })convertFromMagnifierPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)dealloc;
- (void)didRotate;
- (void)didScroll;
- (void)doneMagnifying;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endEdge;
- (id)endGrabber;
- (struct CGPoint { float x1; float x2; })extentPoint;
- (double)firstMovedTime;
- (BOOL)inGesture;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selectionView:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (struct CGPoint { float x1; float x2; })initialBasePoint;
- (float)initialDistance;
- (struct CGPoint { float x1; float x2; })initialExtentPoint;
- (void)inputViewDidChange;
- (BOOL)inputViewIsChanging;
- (void)inputViewWillChange;
- (BOOL)isScrolling;
- (struct CGPoint { float x1; float x2; })magnifierPoint;
- (BOOL)magnifying;
- (int)mode;
- (BOOL)pointCloserToEnd:(struct CGPoint { float x1; float x2; })arg1 startEdge:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 endEdge:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)prepareForMagnification;
- (id)rects;
- (void)removeFromSuperview;
- (BOOL)rotating;
- (void)scaleDidChange;
- (void)scaleWillChange;
- (BOOL)scaling;
- (void)selectionAnimationDidStop:(id)arg1 finished:(id)arg2;
- (id)selectionView;
- (void)setActiveTouch:(id)arg1;
- (void)setAnimateUpdate:(BOOL)arg1;
- (void)setBaseIsStart:(BOOL)arg1;
- (void)setBasePoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCommandsWereShowing:(BOOL)arg1;
- (void)setEnclosingScrollViewsEnabled:(BOOL)arg1;
- (void)setEndEdge:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEndGrabber:(id)arg1;
- (void)setExtentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFirstMovedTime:(double)arg1;
- (void)setInGesture:(BOOL)arg1;
- (void)setInitialBasePoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setInitialDistance:(float)arg1;
- (void)setInitialExtentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setInputViewIsChanging:(BOOL)arg1;
- (void)setIsScrolling:(BOOL)arg1;
- (void)setMagnifying:(BOOL)arg1;
- (void)setMode:(int)arg1;
- (void)setRects:(id)arg1;
- (void)setRotating:(BOOL)arg1;
- (void)setScaling:(BOOL)arg1;
- (void)setStartEdge:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStartGrabber:(id)arg1;
- (void)setTouchOffset:(struct CGPoint { float x1; float x2; })arg1 touchPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)setTouchOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)startAnimating;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })startEdge;
- (id)startGrabber;
- (void)stopAnimating;
- (struct CGPoint { float x1; float x2; })touchOffset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateBaseAndExtentPointsFromEdges;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateDots;
- (void)updateGrabbers;
- (void)updateRectViews;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
- (void)willRotate;
- (void)willScroll;

@end
