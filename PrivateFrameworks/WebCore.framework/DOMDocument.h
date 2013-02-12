/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMAbstractView, DOMDocumentType, DOMElement, DOMHTMLCollection, DOMHTMLElement, DOMImplementation, DOMStyleSheetList, NSString;

@interface DOMDocument : DOMNode {
}

@property(copy,readonly) NSString * URL;
@property(retain,readonly) DOMHTMLCollection * anchors;
@property(retain,readonly) DOMHTMLCollection * applets;
@property(retain) DOMHTMLElement * body;
@property(copy,readonly) NSString * characterSet;
@property(copy) NSString * charset;
@property(copy) NSString * cookie;
@property(copy,readonly) NSString * defaultCharset;
@property(retain,readonly) DOMAbstractView * defaultView;
@property(retain,readonly) DOMDocumentType * doctype;
@property(retain,readonly) DOMElement * documentElement;
@property(copy) NSString * documentURI;
@property(copy,readonly) NSString * domain;
@property(retain,readonly) DOMHTMLCollection * forms;
@property(retain,readonly) DOMHTMLCollection * images;
@property(retain,readonly) DOMImplementation * implementation;
@property(copy,readonly) NSString * inputEncoding;
@property(copy,readonly) NSString * lastModified;
@property(retain,readonly) DOMHTMLCollection * links;
@property(copy,readonly) NSString * preferredStylesheetSet;
@property(copy,readonly) NSString * readyState;
@property(copy,readonly) NSString * referrer;
@property(copy) NSString * selectedStylesheetSet;
@property(retain,readonly) DOMStyleSheetList * styleSheets;
@property(copy) NSString * title;
@property(copy,readonly) NSString * xmlEncoding;
@property BOOL xmlStandalone;
@property(copy) NSString * xmlVersion;

- (id)URL;
- (id)URLWithAttributeString:(id)arg1;
- (id)_documentRange;
- (id)_focusableNodes;
- (id)adoptNode:(id)arg1;
- (id)anchors;
- (id)applets;
- (id)body;
- (id)caretRangeFromPoint:(int)arg1 y:(int)arg2;
- (id)characterSet;
- (id)charset;
- (id)compatMode;
- (id)cookie;
- (id)createAttribute:(id)arg1;
- (id)createAttributeNS:(id)arg1 :(id)arg2;
- (id)createAttributeNS:(id)arg1 qualifiedName:(id)arg2;
- (id)createBlockPlaceholder;
- (id)createCDATASection:(id)arg1;
- (id)createCSSStyleDeclaration;
- (id)createComment:(id)arg1;
- (id)createDocumentFragment;
- (id)createElement:(id)arg1;
- (id)createElementNS:(id)arg1 :(id)arg2;
- (id)createElementNS:(id)arg1 qualifiedName:(id)arg2;
- (id)createEntityReference:(id)arg1;
- (id)createEvent:(id)arg1;
- (id)createExpression:(id)arg1 :(id)arg2;
- (id)createExpression:(id)arg1 resolver:(id)arg2;
- (id)createNSResolver:(id)arg1;
- (id)createNodeIterator:(id)arg1 :(unsigned int)arg2 :(id)arg3 :(BOOL)arg4;
- (id)createNodeIterator:(id)arg1 whatToShow:(unsigned int)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4;
- (id)createProcessingInstruction:(id)arg1 :(id)arg2;
- (id)createProcessingInstruction:(id)arg1 data:(id)arg2;
- (id)createRange;
- (id)createTextNode:(id)arg1;
- (id)createTouch:(id)arg1 target:(id)arg2 identifier:(int)arg3 pageX:(int)arg4 pageY:(int)arg5 screenX:(int)arg6 screenY:(int)arg7;
- (id)createTouchList;
- (id)createTreeWalker:(id)arg1 :(unsigned int)arg2 :(id)arg3 :(BOOL)arg4;
- (id)createTreeWalker:(id)arg1 whatToShow:(unsigned int)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4;
- (void)dd_resetResults;
- (id)defaultCharset;
- (id)defaultView;
- (id)doctype;
- (id)documentElement;
- (id)documentURI;
- (id)domain;
- (id)elementFromPoint:(int)arg1 y:(int)arg2;
- (id)evaluate:(id)arg1 :(id)arg2 :(id)arg3 :(unsigned short)arg4 :(id)arg5;
- (id)evaluate:(id)arg1 contextNode:(id)arg2 resolver:(id)arg3 type:(unsigned short)arg4 inResult:(id)arg5;
- (BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2 value:(id)arg3;
- (BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2;
- (BOOL)execCommand:(id)arg1;
- (id)forms;
- (id)getComputedStyle:(id)arg1 :(id)arg2;
- (id)getComputedStyle:(id)arg1 pseudoElement:(id)arg2;
- (id)getElementById:(id)arg1;
- (id)getElementsByClassName:(id)arg1;
- (id)getElementsByName:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (id)getElementsByTagNameNS:(id)arg1 :(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2 authorOnly:(BOOL)arg3;
- (id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2;
- (id)getOverrideStyle:(id)arg1 :(id)arg2;
- (id)getOverrideStyle:(id)arg1 pseudoElement:(id)arg2;
- (id)head;
- (id)images;
- (id)implementation;
- (id)importNode:(id)arg1 :(BOOL)arg2;
- (id)importNode:(id)arg1 deep:(BOOL)arg2;
- (id)inputEncoding;
- (id)lastModified;
- (id)links;
- (id)preferredStylesheetSet;
- (BOOL)queryCommandEnabled:(id)arg1;
- (BOOL)queryCommandIndeterm:(id)arg1;
- (BOOL)queryCommandState:(id)arg1;
- (BOOL)queryCommandSupported:(id)arg1;
- (id)queryCommandValue:(id)arg1;
- (id)querySelector:(id)arg1;
- (id)querySelectorAll:(id)arg1;
- (id)readyState;
- (id)referrer;
- (id)selectedStylesheetSet;
- (void)setBody:(id)arg1;
- (void)setCharset:(id)arg1;
- (void)setCookie:(id)arg1;
- (void)setDocumentURI:(id)arg1;
- (void)setSelectedStylesheetSet:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setXmlStandalone:(BOOL)arg1;
- (void)setXmlVersion:(id)arg1;
- (id)styleSheets;
- (id)title;
- (id)webFrame;
- (id)xmlEncoding;
- (BOOL)xmlStandalone;
- (id)xmlVersion;

@end
