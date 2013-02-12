/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, NSString, SUNavigationItem, SURotationController, SUViewControllerContext, SUViewControllerFactory, SUViewControllerScriptProperties, UIViewController;

@interface SUViewController : UIViewController <SUScriptNativeObject, ISOperationDelegate> {
    SUViewControllerScriptProperties *_cachedScriptProperties;
    BOOL _canBeWeakScriptReference;
    NSMutableArray *_cancelOnDeallocOperations;
    BOOL _excludeFromNavigationHistory;
    UIViewController *_footerViewController;
    UIViewController *_inputAccessoryViewController;
    BOOL _isEnteringForeground;
    BOOL _loading;
    SUViewControllerContext *_memoryPurgeContext;
    NSMutableArray *_operations;
    NSMutableArray *_pendingDialogs;
    SUViewControllerContext *_restoredContext;
    SURotationController *_rotationController;
    int _rotationState;
    BOOL _shouldInvalidateForMemoryPurge;
    int _transitionSafetyCount;
}

@property(readonly) double defaultPNGExpirationTime;
@property(readonly) NSString * defaultPNGName;
@property(readonly) UIViewController * footerViewController;
@property(retain) UIViewController * inputAccessoryViewController;
@property(getter=isLoading) BOOL loading;
@property(readonly) SUNavigationItem * navigationItem;
@property BOOL shouldExcludeFromNavigationHistory;
@property BOOL shouldInvalidateForMemoryPurge;
@property(readonly) SUViewControllerFactory * viewControllerFactory;
@property(getter=isVisible,readonly) BOOL visible;
@property(getter=isVisibleAndFrontmost,readonly) BOOL visibleAndFrontmost;

- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (BOOL)_canReloadView;
- (void)_dialogFinishedNotification:(id)arg1;
- (void)_dismissFooterAnimationDidStop:(id)arg1;
- (id)_existingNavigationItem;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_performScheduledRotation:(id)arg1;
- (int)_preferredInterfaceOrientationGivenCurrentOrientation:(int)arg1;
- (void)_presentFooterAnimationDidStop;
- (id)_rotationController;
- (void)_setExistingNavigationItem:(id)arg1;
- (BOOL)_shouldUseDefaultFirstResponder;
- (void)applicationDidEnterBackground;
- (void)applicationDidResume;
- (void)applicationWillEnterForeground;
- (void)applicationWillSuspend;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)cancelOperations;
- (BOOL)clearsWeakScriptReferences;
- (id)copyArchivableContext;
- (id)copyChildViewControllersForReason:(int)arg1;
- (id)copyDefaultScriptProperties;
- (id)copyScriptProperties;
- (void)dealloc;
- (double)defaultPNGExpirationTime;
- (id)defaultPNGName;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)dismissAfterDialogs;
- (void)dismissFooterViewControllerAnimated:(BOOL)arg1;
- (void)enqueueOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (id)footerViewController;
- (void)handleApplicationURL:(id)arg1;
- (id)init;
- (id)initWithSection:(id)arg1;
- (id)inputAccessoryView;
- (id)inputAccessoryViewController;
- (int)interfaceOrientation;
- (void)invalidate;
- (void)invalidateForMemoryPurge;
- (BOOL)isLoading;
- (BOOL)isVisible;
- (BOOL)isVisibleAndFrontmost;
- (void)loadView;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)navigationItem;
- (id)newRotationController;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (BOOL)presentDialog:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (void)presentFooterViewController:(id)arg1 animated:(BOOL)arg2;
- (void)purgeMemoryForReason:(int)arg1;
- (void)reload;
- (void)reloadContentSizeForViewInPopover;
- (void)resetRestoredContext;
- (void)restoreArchivableContext:(id)arg1;
- (void)setInputAccessoryViewController:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setShouldExcludeFromNavigationHistory:(BOOL)arg1;
- (void)setShouldInvalidateForMemoryPurge:(BOOL)arg1;
- (void)setTitle:(id)arg1 changeTabBarItem:(BOOL)arg2;
- (void)setTitle:(id)arg1;
- (BOOL)shouldExcludeFromNavigationHistory;
- (BOOL)shouldInvalidateForMemoryPurge;
- (void)storePageProtocolDidChange;
- (void)trackOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (id)viewControllerFactory;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;

@end
