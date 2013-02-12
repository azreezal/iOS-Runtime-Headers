/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLFormElement, DOMHTMLOptionsCollection, NSString;

@interface DOMHTMLSelectElement : DOMHTMLElement {
}

@property BOOL autofocus;
@property BOOL disabled;
@property(retain,readonly) DOMHTMLFormElement * form;
@property(readonly) int length;
@property BOOL multiple;
@property(copy) NSString * name;
@property(retain,readonly) DOMHTMLOptionsCollection * options;
@property int selectedIndex;
@property int size;
@property(copy,readonly) NSString * type;
@property(copy) NSString * value;
@property(readonly) BOOL willValidate;

- (void)_activateItemAtIndex:(int)arg1 allowMultipleSelection:(BOOL)arg2;
- (void)_activateItemAtIndex:(int)arg1;
- (BOOL)_requiresAccessoryView;
- (BOOL)_requiresInputView;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (BOOL)_supportsAutoFill;
- (void)add:(id)arg1 :(id)arg2;
- (void)add:(id)arg1 before:(id)arg2;
- (BOOL)autofocus;
- (BOOL)checkValidity;
- (unsigned int)completeLength;
- (id)createPeripheral;
- (BOOL)disabled;
- (id)form;
- (id)item:(unsigned int)arg1;
- (id)labels;
- (int)length;
- (id)listItemAtIndex:(int)arg1;
- (BOOL)multiple;
- (id)name;
- (id)namedItem:(id)arg1;
- (BOOL)nodeCanBecomeFirstResponder;
- (id)options;
- (void)remove:(int)arg1;
- (BOOL)required;
- (int)selectedIndex;
- (void)setAutofocus:(BOOL)arg1;
- (void)setCustomValidity:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setMultiple:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setRequired:(BOOL)arg1;
- (void)setSelectedIndex:(int)arg1;
- (void)setSize:(int)arg1;
- (void)setValue:(id)arg1;
- (int)size;
- (int)structuralComplexityContribution;
- (id)type;
- (id)validationMessage;
- (id)validity;
- (id)value;
- (BOOL)willValidate;

@end
