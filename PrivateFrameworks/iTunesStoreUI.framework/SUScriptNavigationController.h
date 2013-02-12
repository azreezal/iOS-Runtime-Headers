/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptNavigationBar, SUScriptViewController, UINavigationController;

@interface SUScriptNavigationController : SUScriptViewController {
    UINavigationController *_navController;
}

@property(readonly) SUScriptNavigationBar * navigationBar;
@property BOOL navigationBarHidden;
@property(copy) id toolbarHidden;
@property(readonly) SUScriptViewController * topViewController;
@property(retain) id viewControllers;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_copyNativeViewControllersFromScriptViewControllers:(id)arg1;
- (id)_copyNavigationBar;
- (id)_copyTopViewController;
- (id)_copyViewControllers;
- (id)_filteredViewControllers;
- (void)_initWithRootScriptViewController:(id)arg1;
- (BOOL)_isNavigationBarHidden;
- (id)_navigationController;
- (void)_popToRootViewControllerAnimated:(BOOL)arg1;
- (void)_popViewControllerAnimated:(BOOL)arg1;
- (void)_pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)attributeKeys;
- (void)dealloc;
- (void)didPerformBatchedInvocations;
- (id)initWithRootScriptViewController:(id)arg1;
- (id)navigationBar;
- (BOOL)navigationBarHidden;
- (id)newNativeViewController;
- (void)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)scriptAttributeKeys;
- (void)setNavigationBar:(id)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setToolbarHidden:(id)arg1;
- (void)setTopViewController:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1;
- (id)toolbarHidden;
- (id)topViewController;
- (id)viewControllers;
- (void)willPerformBatchedInvocations;

@end
