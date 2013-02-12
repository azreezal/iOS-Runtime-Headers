/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIPasteboard, UIView<PLDraggingDestination>;

@interface PLDragGestureRecognizer : UILongPressGestureRecognizer {
    struct { 
        unsigned int respondsToDraggingEntered : 1; 
        unsigned int respondsToDraggingUpdated : 1; 
        unsigned int respondsToDraggingExited : 1; 
        unsigned int respondsToDraggingEnded : 1; 
        unsigned int canDrop : 1; 
    UIView<PLDraggingDestination> *_destinationView;
    UIPasteboard *_draggingPasteboard;
    } _flags;
    int draggingSourceOperationMask;
}

@property(retain) UIView<PLDraggingDestination> * destinationView;
@property(readonly) UIPasteboard * draggingPasteboard;
@property int draggingSourceOperationMask;

- (id)_touchedView;
- (void)dealloc;
- (id)destinationView;
- (id)draggingPasteboard;
- (int)draggingSourceOperationMask;
- (void)reset;
- (void)setDestinationView:(id)arg1;
- (void)setDraggingSourceOperationMask:(int)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
