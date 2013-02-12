/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, NSString, SUScriptFunction, WebScriptObject;

@interface SUScriptTextField : SUScriptObject <SUScriptNavigationItem> {
    SUScriptFunction *_shouldFocusFunction;
    NSString *_style;
}

@property(retain) NSString * autocapitalizationType;
@property(retain) NSString * autocorrectionType;
@property(retain) NSString * keyboardType;
@property(retain) id nativeTextField;
@property(retain) NSString * placeholder;
@property(retain) WebScriptObject * shouldFocusFunction;
@property(readonly) NSString * style;
@property(retain) NSString * value;
@property(retain) NSNumber * width;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_autocapitalizationType;
- (id)_autocorrectionType;
- (BOOL)_becomeFirstResponder;
- (id)_boxedNativeTextField;
- (BOOL)_canBecomeFirstResponder;
- (id)_className;
- (id)_copyPlaceholder;
- (id)_copyShouldFocusFunction;
- (id)_copyValue;
- (float)_defaultWidth;
- (id)_keyboardType;
- (id)_newTextField;
- (BOOL)_resignFirstResponder;
- (void)_setAutocapitalizationType:(id)arg1;
- (void)_setAutocorrectionType:(id)arg1;
- (void)_setKeyboardType:(id)arg1;
- (void)_setPlaceholder:(id)arg1;
- (void)_setShouldFocusFunction:(id)arg1;
- (void)_setValue:(id)arg1;
- (void)_setWidth:(float)arg1;
- (BOOL)_styleIsValid:(id)arg1;
- (float)_width;
- (id)attributeKeys;
- (id)autocapitalizationType;
- (id)autocorrectionType;
- (BOOL)blur;
- (id)buttonItem;
- (void)dealloc;
- (BOOL)focus;
- (id)init;
- (id)initWithTextFieldStyle:(id)arg1;
- (id)keyboardType;
- (id)nativeTextField;
- (id)placeholder;
- (id)scriptAttributeKeys;
- (void)setAutocapitalizationType:(id)arg1;
- (void)setAutocorrectionType:(id)arg1;
- (void)setKeyboardType:(id)arg1;
- (void)setNativeTextField:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setShouldFocusFunction:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)shouldFocusFunction;
- (id)style;
- (id)value;
- (id)width;

@end
