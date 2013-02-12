/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSString, SUScriptNavigationController, SUScriptNavigationItem, SUScriptPopOver, SUScriptSection, SUScriptSplitViewController, SUScriptViewController, UIViewController;

@interface SUScriptViewController : SUScriptObject {
    NSArray *_scriptToolbarItems;
}

@property(retain) id backgroundColor;
@property(retain) SUScriptViewController * inputAccessoryViewController;
@property(retain) NSString * modalPresentationStyle;
@property(readonly) NSString * modalPresentationStyleNameFormSheet;
@property(readonly) NSString * modalPresentationStyleNameFullScreen;
@property(readonly) SUScriptViewController * modalViewController;
@property(retain) UIViewController * nativeViewController;
@property(readonly) SUScriptNavigationController * navigationController;
@property(readonly) SUScriptNavigationItem * navigationItem;
@property(readonly) SUScriptPopOver * popOver;
@property(retain) SUScriptSection * section;
@property(readonly) SUScriptSplitViewController * splitViewController;
@property(copy) id toolbarItems;
@property(retain) id topBackgroundColor;
@property(retain) SUScriptViewController * transientViewController;
@property(readonly) SUScriptViewController * volumeViewController;
@property id wantsFullScreenLayout;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_copyBackgroundColor;
- (id)_copyModalViewController;
- (id)_copyNavigationController;
- (id)_copyNavigationItem;
- (id)_copyPopOver;
- (id)_copySection;
- (id)_copySplitViewController;
- (id)_copyTopBackgroundColor;
- (id)_copyTransientViewController;
- (id)_copyVolumeViewController;
- (void)_dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)_dismissModalViewControllerWithTransition:(id)arg1;
- (void)_dismissVolumeViewControllerAnimated:(BOOL)arg1;
- (BOOL)_mainThreadEquals:(id)arg1;
- (int)_modalPresentationStyle;
- (void)_moveToSectionWithIdentifier:(id)arg1;
- (id)_nativeSection;
- (id)_parentViewControllerForVolumeViewController;
- (void)_presentModalViewController:(id)arg1 withTransition:(id)arg2;
- (void)_presentVolumeViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_runScrollTest:(id)arg1 withDelta:(float)arg2 forIterations:(int)arg3;
- (id)_sectionIdentifier;
- (void)_setBackgroundColor:(struct CGColor { }*)arg1;
- (void)_setModalPresentationStyle:(int)arg1;
- (void)_setTopBackgroundColor:(struct CGColor { }*)arg1;
- (void)_setTransientViewController:(id)arg1;
- (int)_transitionForString:(id)arg1;
- (id)attributeKeys;
- (id)backgroundColor;
- (void)dealloc;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)dismissModalViewControllerWithTransition:(id)arg1;
- (void)dismissVolumeViewControllerAnimated:(id)arg1;
- (BOOL)equals:(id)arg1;
- (id)inputAccessoryViewController;
- (id)modalPresentationStyle;
- (id)modalPresentationStyleNameFormSheet;
- (id)modalPresentationStyleNameFullScreen;
- (id)modalViewController;
- (id)nativeViewController;
- (id)navigationController;
- (id)navigationItem;
- (id)newNativeViewController;
- (id)newScriptColorWithValue:(id)arg1;
- (id)popOver;
- (void)presentModalViewController:(id)arg1 withTransition:(id)arg2;
- (void)presentVolumeViewController:(id)arg1 animated:(id)arg2;
- (void)runScrollTest:(id)arg1 withDelta:(float)arg2 forIterations:(int)arg3;
- (id)scriptAttributeKeys;
- (id)section;
- (void)setBackgroundColor:(id)arg1;
- (void)setInputAccessoryViewController:(id)arg1;
- (void)setModalPresentationStyle:(id)arg1;
- (void)setModalViewController:(id)arg1;
- (void)setNativeViewController:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setNavigationItem:(id)arg1;
- (void)setPopOver:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSplitViewController:(id)arg1;
- (void)setToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)setToolbarItems:(id)arg1;
- (void)setTopBackgroundColor:(id)arg1;
- (void)setTransientViewController:(id)arg1;
- (void)setVolumeViewController:(id)arg1;
- (void)setWantsFullScreenLayout:(id)arg1;
- (id)splitViewController;
- (void)tearDownUserInterface;
- (id)toolbarItems;
- (id)topBackgroundColor;
- (id)transientViewController;
- (id)volumeViewController;
- (id)wantsFullScreenLayout;

@end
