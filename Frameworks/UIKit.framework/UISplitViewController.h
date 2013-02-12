/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UISplitViewControllerDelegate>, NSArray, NSString, UIBarButtonItem, UIPopoverController, UIView;

@interface UISplitViewController : UIViewController <GKContentRefresh, GKURLHandling> {
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
    struct { 
        unsigned int hidesMasterViewInPortrait : 1; 
        unsigned int delegateImplementsShouldHide : 1; 
        unsigned int hidden : 3; 
        unsigned int delegateHandlesTogglingMaster : 1; 
        unsigned int delegateProvidesBackgroundView : 1; 
        unsigned int delegateWantsUnSlideCallback : 1; 
        unsigned int masterOnSlide : 1; 
        unsigned int delegateWantsWillShowCallback : 1; 
        unsigned int delegateWantsWillHideCallback : 1; 
    UIBarButtonItem *_barButtonItem;
    NSString *_buttonTitle;
    NSArray *_cornerImageViews;
    float _cornerRadius;
    id _delegate;
    float _gutterWidth;
    UIPopoverController *_hiddenPopoverController;
    int _lastPresentedOrientation;
    UIView *_masterBackgroundView;
    float _masterColumnWidth;
    } _rotatingFromMasterViewFrame;
    int _rotatingFromOrientation;
    } _rotatingToMasterViewFrame;
    UIView *_rotationSnapshotView;
    unsigned int _slideTransitionCount;
    } _splitViewControllerFlags;
}

@property <UISplitViewControllerDelegate> * delegate;
@property(copy) NSArray * viewControllers;

+ (BOOL)_optsOutOfPopoverControllerHierarchyCheck;

- (void)__viewWillLayoutSubviews;
- (BOOL)_canSlideMaster;
- (void)_commonInit;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_detailViewFrame;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)_gkForceNextContentUpdate;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkResetContents;
- (void)_gkSetContentsNeedUpdateWithHandler:(id)arg1;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (BOOL)_isLandscape;
- (void)_loadNewSubviews:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_masterViewFrame;
- (BOOL)_masterViewShown;
- (void)_removeRoundedCorners;
- (void)_setupRoundedCorners;
- (BOOL)_shouldPersistViewWhenCoding;
- (void)_slideIn:(BOOL)arg1 viewController:(id)arg2 animated:(BOOL)arg3 totalDuration:(double)arg4 completion:(id)arg5;
- (void)_toggleVisibilityOfViewController:(id)arg1;
- (void)_updateMasterViewControllerFrame;
- (void)_viewControllerHiding:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)detailViewController;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (float)gutterWidth;
- (BOOL)hidesMasterViewDuringRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2;
- (BOOL)hidesMasterViewInLandscape;
- (BOOL)hidesMasterViewInPortrait;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isRotating;
- (float)leftColumnWidth;
- (void)loadSubviews;
- (void)loadView;
- (float)masterColumnWidth;
- (id)masterViewController;
- (void)purgeMemoryForReason:(int)arg1;
- (BOOL)revealsMasterViewDuringRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2;
- (void)setDelegate:(id)arg1;
- (void)setGutterWidth:(float)arg1;
- (void)setHidesMasterViewInPortrait:(BOOL)arg1;
- (void)setLeftColumnWidth:(float)arg1;
- (void)setMasterColumnWidth:(float)arg1;
- (void)setViewControllers:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)snapshotAllViews;
- (void)snapshotForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2;
- (void)snapshotMasterView;
- (void)toggleMasterVisible:(id)arg1;
- (void)unloadViewForced:(BOOL)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
