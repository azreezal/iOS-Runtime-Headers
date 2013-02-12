/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSString;

@interface PKPaper : NSObject {
    NSString *_baseName;
    int bottomMargin;
    int height;
    int leftMargin;
    NSString *name;
    int rightMargin;
    int topMargin;
    int width;
}

@property(readonly) NSString * baseName;
@property int bottomMargin;
@property int height;
@property(readonly) float imageableArea;
@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } imageableAreaRect;
@property(readonly) BOOL isBorderless;
@property int leftMargin;
@property(retain,readonly) NSString * localizedName;
@property(retain) NSString * name;
@property(readonly) struct CGSize { float width; float height; } paperSize;
@property int rightMargin;
@property int topMargin;
@property int width;

+ (id)documentPapers;
+ (id)generic3_5x5Paper;
+ (id)generic4x6Paper;
+ (id)genericA4Paper;
+ (id)genericA6Paper;
+ (id)genericBorderlessWithName:(id)arg1;
+ (id)genericHagakiPaper;
+ (id)genericLetterPaper;
+ (id)genericPRC32KPaper;
+ (id)genericWithName:(id)arg1;
+ (id)photoPapers;
+ (BOOL)willAdjustMarginsForDuplexMode:(id)arg1;

- (id)baseName;
- (int)bottomMargin;
- (void)dealloc;
- (unsigned int)hash;
- (int)height;
- (float)imageableArea;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageableAreaRect;
- (id)initWithPWGSize:(struct _pwg_size_s { struct _pwg_map_s { char *x_1_1_1; char *x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; }*)arg1 localizedName:(id)arg2 codeName:(id)arg3;
- (id)initWithWidth:(int)arg1 Height:(int)arg2 Left:(int)arg3 Top:(int)arg4 Right:(int)arg5 Bottom:(int)arg6 localizedName:(id)arg7 codeName:(id)arg8;
- (BOOL)isBorderless;
- (BOOL)isEqual:(id)arg1;
- (int)leftMargin;
- (id)localizedName;
- (id)name;
- (id)nameWithoutSuffixes:(id)arg1;
- (struct CGSize { float x1; float x2; })paperSize;
- (id)paperWithMarginsAdjustedForDuplexMode:(id)arg1;
- (int)rightMargin;
- (void)setBottomMargin:(int)arg1;
- (void)setHeight:(int)arg1;
- (void)setLeftMargin:(int)arg1;
- (void)setName:(id)arg1;
- (void)setRightMargin:(int)arg1;
- (void)setTopMargin:(int)arg1;
- (void)setWidth:(int)arg1;
- (int)topMargin;
- (int)width;

@end
