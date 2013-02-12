/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, SSAuthenticationContext, SUDelayedNavigationItem, SUItem, SUObjectPool, SUStorePageProtocol, SUStructuredPage, SUTableViewController, SUWebView;

@interface SUWebViewController : SUViewController <SUWebViewDelegate> {
    SSAuthenticationContext *_authenticationContext;
    SUDelayedNavigationItem *_delayedNavigationItem;
    BOOL _hasEverAppeared;
    int _lastKnownOrientation;
    SUObjectPool *_objectPool;
    SUItem *_rootItem;
    int _scheduledOrientation;
    SUStorePageProtocol *_storePageProtocol;
    int _style;
    SUStructuredPage *_trackList;
    SUTableViewController *_trackListController;
    NSURL *_url;
    BOOL _viewIsReady;
    SUWebView *_webView;
}

@property(copy) SSAuthenticationContext * authenticationContext;
@property int style;
@property BOOL viewIsReady;
@property(readonly) SUWebView * webView;

- (void)_addPlaceholderBackgroundView;
- (void)_applySavedScrollOffsetIfPossible;
- (void)_applyScriptProperties:(id)arg1;
- (void)_handleProtocol:(id)arg1;
- (void)_handleRootObject:(id)arg1;
- (void)_handleTrackList:(id)arg1;
- (id)_placeholderBackgroundView;
- (void)_reloadObjectPool;
- (void)_reloadPlaceholderBackgroundView;
- (void)_reloadUI;
- (void)_removePlaceholderBackgroundView;
- (void)_selectTrackListItemWithIdentifier:(id)arg1;
- (void)_sendOrientationWillChangeToInterfaceOrientation:(int)arg1;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)_setLastKnownOrientation:(int)arg1;
- (void)_setTrackListController:(id)arg1;
- (void)_updateTrackListRootItem;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)authenticationContext;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)copyScriptProperties;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (void)invalidate;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)loadView;
- (struct CGSize { float x1; float x2; })minimumViewSize;
- (id)navigationItemForScriptInterface;
- (id)newDataProviderToProcessProtocol;
- (id)newRotationController;
- (id)newViewControllerForTrackList:(id)arg1;
- (void)operationFinished:(id)arg1;
- (id)parentViewControllerForWebView:(id)arg1;
- (void)parentViewControllerHierarchyDidChange;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)setAuthenticationContext:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setStorePageProtocol:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setViewIsReady:(BOOL)arg1;
- (id)storePageProtocol;
- (void)storePageProtocolDidChange;
- (int)style;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)viewIsReady;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (BOOL)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webView:(id)arg1 documentViewDidSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)webView:(id)arg1 foundPropertyList:(id)arg2 ofType:(int)arg3;
- (void)webView:(id)arg1 performPurchaseAnimationWithView:(id)arg2;
- (void)webView:(id)arg1 receivedEventOfType:(int)arg2 userInfo:(id)arg3;
- (void)webView:(id)arg1 willInjectScriptObject:(id)arg2;
- (id)webView;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

@end
