/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUPropertyLayoutStorage : NSObject {
    unsigned int _count;
    struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } *_frames;
    id *_selectedValues;
    id *_values;
}

- (unsigned int)count;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameAtIndex:(unsigned int)arg1;
- (id)initWithCount:(unsigned int)arg1;
- (id)selectedValueAtIndex:(unsigned int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 atIndex:(unsigned int)arg2;
- (void)setSelectedValue:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setValue:(id)arg1 atIndex:(unsigned int)arg2;
- (id)valueAtIndex:(unsigned int)arg1;

@end
