/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUScriptCanvasContext, UIImage, WebScriptObject;

@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem> {
    id _action;
    SUScriptCanvasContext *_canvas;
    BOOL _shouldPerformDefaultAction;
    WebScriptObject *_target;
}

@property(retain) id action;
@property(retain) SUScriptCanvasContext * canvas;
@property BOOL enabled;
@property(retain) UIImage * image;
@property BOOL loading;
@property BOOL shouldPerformDefaultAction;
@property(retain) NSString * style;
@property(retain) NSString * subtitle;
@property(retain) WebScriptObject * target;
@property(retain) NSString * title;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;

- (id)_boxedNativeButton;
- (id)_className;
- (id)_copyStyle;
- (id)_copySubtitle;
- (id)_copyTitle;
- (id)_initSUScriptButton;
- (BOOL)_isEnabled;
- (BOOL)_isLoading;
- (id)_nativeButton;
- (void)_setEnabled:(BOOL)arg1;
- (void)_setLoading:(BOOL)arg1;
- (void)_setStyle:(id)arg1;
- (void)_setSubtitle:(id)arg1;
- (void)_setTitle:(id)arg1;
- (id)_systemItemString;
- (id)action;
- (id)attributeKeys;
- (id)buttonItem;
- (id)canvas;
- (void)dealloc;
- (BOOL)enabled;
- (id)image;
- (id)init;
- (id)initWithSystemItemString:(id)arg1;
- (BOOL)loading;
- (id)nativeButtonOfType:(int)arg1;
- (void)performActionWithArguments:(id)arg1;
- (id)scriptAttributeKeys;
- (void)setAction:(id)arg1;
- (void)setCanvas:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setNativeButton:(id)arg1;
- (void)setShouldPerformDefaultAction:(BOOL)arg1;
- (void)setStyle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)shouldPerformDefaultAction;
- (id)style;
- (id)subtitle;
- (id)target;
- (id)title;

@end
