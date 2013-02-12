/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UILabel, UIStatusBarComposedData, UIStatusBarLayoutManager;

@interface UIStatusBarForegroundView : UIView {
    UILabel *_doubleHeightLabel;
    int _foregroundStyle;
    int _ignoreDataLevel;
    BOOL _itemIsEnabled[23];
    UIStatusBarLayoutManager *_layoutManagers[3];
    int _pendedActions;
    UIStatusBarComposedData *_pendedData;
    BOOL _performedStyleChangeReflow;
    NSString *_statusString;
}

@property(readonly) int foregroundStyle;

- (void)_cleanUpAfterDataChange;
- (void)_cleanUpAfterSimpleReflow;
- (void)_computeVisibleItems:(id*)arg1 eitherSideItems:(id)arg2;
- (void)_reflowItemViewsWithDuration:(double)arg1 suppressCenterAnimation:(BOOL)arg2;
- (BOOL)_tryToPlaceItem:(id)arg1 inItemArray:(id)arg2 layoutManager:(id)arg3 roomRemaining:(float*)arg4 allowSwap:(BOOL)arg5 swappedItem:(id*)arg6;
- (void)dealloc;
- (int)foregroundStyle;
- (BOOL)ignoringData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 foregroundStyle:(int)arg2;
- (void)reflowItemViews:(BOOL)arg1 suppressCenterAnimation:(BOOL)arg2;
- (void)setStatusBarData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3;
- (void)startIgnoringData;
- (void)stopIgnoringData:(BOOL)arg1;

@end
