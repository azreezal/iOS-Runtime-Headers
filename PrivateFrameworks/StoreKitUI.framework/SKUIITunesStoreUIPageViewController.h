/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKProductPageViewController, SUBarButtonItem;

@interface SKUIITunesStoreUIPageViewController : SUStorePageViewController {
    SUBarButtonItem *_cancelButtonItem;
    SKProductPageViewController *_productPageViewController;
    BOOL _showsCancelButton;
}

@property SKProductPageViewController * productPageViewController;
@property BOOL showsCancelButton;

- (void).cxx_destruct;
- (id)_cancelButtonItem;
- (void)_storeSheetCancelButtonAction:(id)arg1;
- (void)dealloc;
- (void)handleFailureWithError:(id)arg1;
- (BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (id)productPageViewController;
- (void)resetNavigationItem:(id)arg1;
- (void)setProductPageViewController:(id)arg1;
- (void)setShowsCancelButton:(BOOL)arg1;
- (BOOL)showsCancelButton;
- (void)viewWillAppear:(BOOL)arg1;

@end