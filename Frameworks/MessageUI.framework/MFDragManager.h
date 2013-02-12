/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFDragDestination>, <MFDraggableItem>, MFGobblerGestureRecognizer, MFMailComposeView, NSMutableArray, NSMutableDictionary, NSTimer, UIGestureRecognizer, UIView;

@interface MFDragManager : NSObject <UIGestureRecognizerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    <MFDragDestination> *_currentDestination;
    UIGestureRecognizer *_currentGestureBeingProcessed;
    MFMailComposeView *_currentlyDisplayedComposeView;
    NSMutableArray *_dragDestinations;
    NSMutableArray *_dragSources;
    BOOL _dragWasSuccessful;
    <MFDraggableItem> *_draggedItem;
    } _draggedItemOriginalFrame;
    UIView *_draggedItemView;
    NSMutableDictionary *_gestureRecognizersForSource;
    MFGobblerGestureRecognizer *_gobblerGestureRecognizer;
    } _offsetCenterOfDraggedView;
    } _previousGestureLocation;
    NSTimer *_scrollTimer;
    BOOL _scrollingForDrag;
    NSMutableDictionary *_sourceForGestureRecognizer;
    double _timeOfLastBigUpdate;
}

@property MFMailComposeView * currentlyDisplayedComposeView;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedInstance;

- (void)_cleanUpAfterDragCompleted;
- (BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_handleLongPress:(id)arg1;
- (void)_processGestureUpdate;
- (void)_scrollViewIfNecessary;
- (void)addDragDestination:(id)arg1;
- (void)addDragSource:(id)arg1;
- (void)cancelCurrentDragOperation;
- (id)currentlyDisplayedComposeView;
- (void)dealloc;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)removeDragDestination:(id)arg1;
- (void)removeDragSource:(id)arg1;
- (void)setCurrentlyDisplayedComposeView:(id)arg1;

@end
