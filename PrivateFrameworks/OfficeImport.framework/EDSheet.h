/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDColorReference, EDHeaderFooter, EDPageSetup, EDProcessors, EDString, EDWarnings, EDWorkbook, ESDContainer, NSMutableArray, SFUPointerKeyDictionary;

@interface EDSheet : OCDDelayedNode {
    boolmDisplayFormulas;
    boolmDisplayGridlines;
    boolmHidden;
    boolmIsDialogSheet;
    SFUPointerKeyDictionary *mCommentMap;
    EDColorReference *mDefaultGridlineColorReference;
    NSMutableArray *mDrawables;
    ESDContainer *mEscherDrawing;
    EDHeaderFooter *mHeaderFooter;
    EDString *mName;
    EDPageSetup *mPageSetup;
    EDProcessors *mProcessors;
    SFUPointerKeyDictionary *mTextBoxMap;
    EDWarnings *mWarnings;
    EDWorkbook *mWorkbook;
}

@property bool isDialogSheet;

+ (id)sheetWithWorkbook:(id)arg1;

- (void)addDrawable:(id)arg1;
- (void)applyProcessors;
- (void)dealloc;
- (id)defaultGridlineColor;
- (id)defaultGridlineColorReference;
- (void)doneWithNonRowContent;
- (id)drawableAtIndex:(unsigned int)arg1;
- (unsigned int)drawableCount;
- (id)drawableEnumerator;
- (id)drawables;
- (id)edCommentForShape:(id)arg1;
- (id)edTextBoxForShape:(id)arg1;
- (id)escherDrawing;
- (id)headerFooter;
- (id)initWithWorkbook:(id)arg1;
- (bool)isDialogSheet;
- (bool)isDisplayFormulas;
- (bool)isDisplayGridlines;
- (bool)isHidden;
- (id)name;
- (id)pageSetup;
- (id)processors;
- (void)reduceMemoryIfPossible;
- (void)removeDrawableAtIndex:(unsigned int)arg1;
- (void)setDefaultGridlineColor:(id)arg1;
- (void)setDefaultGridlineColorReference:(id)arg1;
- (void)setDisplayFormulas:(bool)arg1;
- (void)setDisplayGridlines:(bool)arg1;
- (void)setEDComment:(id)arg1 forShape:(id)arg2;
- (void)setEDTextBox:(id)arg1 forShape:(id)arg2;
- (void)setEscherDrawing:(id)arg1;
- (void)setHeaderFooter:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsDialogSheet:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPageSetup:(id)arg1;
- (void)setup;
- (void)teardown;
- (id)warnings;
- (id)workbook;

@end
