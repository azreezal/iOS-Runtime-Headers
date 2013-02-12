/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class <UIPDFSelectionWidget>, <UIPDFSelectionWidget><NSObject>, UIPDFPageView;

@interface UIPDFSelectionController : NSObject {
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
    struct CGPoint { 
        float x; 
        float y; 
    } _adjustedPoint;
    int _firstIndex;
    BOOL _hiding;
    BOOL _isTracking;
    int _lastIndex;
    UIPDFPageView *_pageView;
    BOOL _preceeds;
    BOOL _rangeMode;
    BOOL _resizingWidget;
    } _selectionBounds;
    } _selectionFixedPoint;
    <UIPDFSelectionWidget><NSObject> *_selectionWidget;
}

@property(readonly) struct CGPoint { float x; float y; } adjustedPoint;
@property(readonly) struct CGPoint { float x; float y; } currentSelectionPoint;
@property(readonly) struct CGPoint { float x; float y; } initialSelectionPoint;
@property(readonly) BOOL isTracking;
@property UIPDFPageView * pageView;
@property(readonly) BOOL rangeMode;
@property(readonly) <UIPDFSelectionWidget> * selectionWidget;

- (void)adjustSelection:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })adjustedPoint;
- (void)clearSelection;
- (struct CGPoint { float x1; float x2; })currentSelectionPoint;
- (void)dealloc;
- (void)endTracking:(struct CGPoint { float x1; float x2; })arg1;
- (void)extendSelectionToParagraph;
- (void)hideWidget;
- (id)init;
- (struct CGPoint { float x1; float x2; })initialSelectionPoint;
- (BOOL)isTracking;
- (void)layoutSelections;
- (id)pageView;
- (BOOL)rangeMode;
- (struct CGPoint { float x1; float x2; })selectedPointOffset;
- (void)selectionHide:(id)arg1;
- (void)selectionShow:(id)arg1;
- (void)selectionShowDelayed:(id)arg1;
- (id)selectionWidget;
- (void)setPageView:(id)arg1;
- (void)setSelectionFor:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)shouldTrackAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)startSelectingAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)startTracking:(struct CGPoint { float x1; float x2; })arg1 showMagnifier:(BOOL*)arg2;
- (void)tracking:(struct CGPoint { float x1; float x2; })arg1 showMagnifier:(BOOL*)arg2;
- (BOOL)useParagraphMode;

@end
