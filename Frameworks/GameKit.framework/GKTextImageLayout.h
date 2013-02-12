/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, NSAttributedString;

@interface GKTextImageLayout : NSObject <GKTextLayout> {
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        int location; 
        int length; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    NSAttributedString *_attributedString;
    } _filledFrameSize;
    } _fitRange;
    } _frame;
    float _leading;
    struct CGPoint { float x1; float x2; } *_lineOrigins;
    NSArray *_lines;
    unsigned int _numberOfLines;
    id _path;
}

@property(retain) NSAttributedString * attributedString;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property float leading;
@property unsigned int numberOfLines;
@property(retain) id path;

- (id)attributedString;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (float)leading;
- (struct CGPoint { float x1; float x2; }*)lineOrigins;
- (id)lines;
- (unsigned int)numberOfLines;
- (id)path;
- (void)setAttributedString:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLeading:(float)arg1;
- (void)setNumberOfLines:(unsigned int)arg1;
- (void)setPath:(id)arg1;
- (struct CGSize { float x1; float x2; })suggestFrameSizeFitsRange:(struct { int x1; int x2; }*)arg1;

@end
