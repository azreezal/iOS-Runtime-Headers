/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSMutableArray, RUITableViewRow, UIDatePicker, UIPickerView, UITableView;

@interface RUITableView : RUIElement <UITableViewDataSource, UITableViewDelegate, UIWebViewDelegate> {
    UIDatePicker *_datePicker;
    RUITableViewRow *_defaultFirstResponderRow;
    id _delegate;
    float _fullscreenCellHeight;
    float _lastLayoutWidth;
    BOOL _registeredForNotifications;
    NSMutableArray *_sections;
    UIPickerView *_selectPicker;
    BOOL _showDatePicker;
    BOOL _showSelectPicker;
    UITableView *_tableView;
    BOOL _viewShrunk;
}

@property(retain) RUITableViewRow * defaultFirstResponderRow;
@property(readonly) NSMutableArray * sections;
@property(getter=isShowingPicker,readonly) BOOL showingPicker;

- (void)_clearPickers;
- (void)_registerForNotifications:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectPickerFrame;
- (void)_setBottomInset:(float)arg1;
- (void)_textChanged:(id)arg1;
- (void)activateRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)automaticKeyboardDidHide:(id)arg1;
- (void)automaticKeyboardDidShow:(id)arg1;
- (void)dealloc;
- (id)defaultFirstResponderRow;
- (id)indexPathForRow:(id)arg1;
- (id)init;
- (BOOL)isShowingPicker;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)objectModelRowForIndexPath:(id)arg1;
- (void)populatePostbackDictionary:(id)arg1;
- (void)rowDidChange:(id)arg1;
- (void)rowDidEndEditing:(id)arg1;
- (void)rowIsFirstResponder:(id)arg1;
- (id)sections;
- (void)setDefaultFirstResponderRow:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)sourceURLForRUITableViewRow;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView;
- (void)textFieldStartedEditing:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayout;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;

@end
