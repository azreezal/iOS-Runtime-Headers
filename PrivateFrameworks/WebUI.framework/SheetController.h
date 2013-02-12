/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSMutableArray, UIAlertView;

@interface SheetController : NSObject <BrowserPanel, UIModalViewDelegate, UITableViewDelegate, UITableViewDataSource> {
    int _actionToPerform;
    NSMutableArray *_alertInvocationQueue;
    id _delegate;
    BOOL _isDismissed;
    UIAlertView *_view;
    struct __CFDictionary { } *_views;
}

- (void)_showSheetForAlert:(id)arg1 inView:(id)arg2 withClass:(Class)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)dealloc;
- (void)didPresentAlertView:(id)arg1;
- (BOOL)disablesStatusBarPress;
- (void)hideSheet;
- (BOOL)ignoresPrivateBrowsingStyle;
- (id)initWithDelegate:(id)arg1;
- (int)panelState;
- (int)panelType;
- (int)pausesPages;
- (void)setDelegate:(id)arg1;
- (void)showSheetForAlert:(id)arg1 inView:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
