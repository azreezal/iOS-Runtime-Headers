/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKScrubberDataSource>, <EKScrubberDelegate>, EKScrubberBubble, EKScrubberThumbView, NSMutableArray, NSTimer, UIColor, UIImageView;

@interface EKScrubber : UIControl {
    NSMutableArray *_animatingSectionsToRemove;
    EKScrubberBubble *_bubbleView;
    <EKScrubberDataSource> *_dataSource;
    <EKScrubberDelegate> *_delegate;
    BOOL _dragged;
    UIImageView *_leftArrow;
    UIImageView *_rightArrow;
    NSTimer *_scrollingTimer;
    UIImageView *_scrubberWellView;
    int _sectionToSelect;
    NSMutableArray *_sections;
    unsigned int _selectedSection;
    BOOL _shouldScroll;
    UIColor *_textColor;
    EKScrubberThumbView *_thumbView;
    BOOL _timerGoingInThePast;
    BOOL _usingCustomWidth;
    BOOL _usingTimerAcceleration;
}

@property(retain) <EKScrubberDataSource> * dataSource;
@property(retain) <EKScrubberDelegate> * delegate;

- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)bubbleSlidingAnimationFinished;
- (id)bubbleView;
- (void)cancelTimers;
- (void)centerTouchOnPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)centerTouchOnSection:(unsigned int)arg1 animate:(BOOL)arg2;
- (id)closestViewForXCoordinate:(float)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)generateSections;
- (void)hideBubble;
- (void)jumpToSection:(int)arg1;
- (void)layoutSections:(id)arg1;
- (void)layoutSubviews;
- (void)leftArrowTapped;
- (void)moveBubbleToPoint:(struct CGPoint { float x1; float x2; })arg1 withText:(id)arg2 animate:(BOOL)arg3;
- (void)moveThumbViewToSection:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)offsetViewX:(id)arg1 byAmount:(float)arg2;
- (int)partForXCoordinate:(float)arg1;
- (void)rightArrowTapped;
- (void)scrollTimerFired:(id)arg1;
- (unsigned int)sectionForXCoordinate:(float)arg1;
- (void)selectSection:(int)arg1 animated:(BOOL)arg2;
- (unsigned int)selectedSection;
- (void)setBackgroundImage:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeftArrowImage:(id)arg1;
- (void)setRightArrowImage:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setThumbBackgroundImage:(id)arg1;
- (void)showBubbleAtXPosition:(float)arg1 withText:(id)arg2 animate:(BOOL)arg3;
- (void)shrinkBubbleDown;
- (void)slideAnimationFinished;
- (void)slideToSection:(int)arg1 showBubble:(BOOL)arg2;
- (void)startScrollTimer:(double)arg1;
- (id)viewForSection:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })wellContentBounds;

@end
