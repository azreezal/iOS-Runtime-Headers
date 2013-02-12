/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPaper : NSObject {
    id _internal;
    int _paperOrientation;
}

@property(readonly) struct CGSize { float x1; float x2; } paperSize;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } printableRect;

+ (id)_defaultPKPaperForOuptutType:(int)arg1;
+ (id)_defaultPaperForOutputType:(int)arg1;
+ (id)_defaultPaperListForOutputType:(int)arg1;
+ (id)_paperListForPrinter:(id)arg1 withDuplexMode:(int)arg2;
+ (id)_readyPaperListForPrinter:(id)arg1 withDuplexMode:(int)arg2 forContentType:(int)arg3;
+ (id)_readyPaperListForPrinter:(id)arg1 withDuplexMode:(int)arg2;
+ (id)bestPaperForPageSize:(struct CGSize { float x1; float x2; })arg1 withPapersFromArray:(id)arg2;

- (id)_initWithPrintKitPaper:(id)arg1;
- (id)_localizedName;
- (int)_paperOrientation;
- (id)_pkPaper;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_printableRectForDuplex:(BOOL)arg1;
- (void)_setPaperOrientation:(int)arg1;
- (void)_updatePKPaper:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (struct CGSize { float x1; float x2; })paperSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })printRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })printableRect;

@end
