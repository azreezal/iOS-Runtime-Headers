/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSIndexPath : NSObject <NSCopying, NSCoding> {
    unsigned int _hash;
    unsigned int *_indexes;
    unsigned int _length;
    void *_reserved;
}

@property(readonly) int _gkColumn;
@property(readonly) int _gkRow;
@property(readonly) int _gkSection;
@property(readonly) unsigned int gridColumn;
@property(readonly) unsigned int gridRow;
@property(readonly) unsigned int gridSection;
@property(readonly) int row;
@property(readonly) int section;

+ (id)indexPathForRow:(int)arg1 inSection:(int)arg2;
+ (id)indexPathForRow:(unsigned int)arg1 column:(unsigned int)arg2 inSection:(unsigned int)arg3;
+ (id)indexPathWithIndex:(unsigned int)arg1;
+ (id)indexPathWithIndexes:(unsigned int*)arg1 length:(unsigned int)arg2;

- (int)_gkColumn;
- (id)_gkIndexPathWithColumn:(int)arg1;
- (id)_gkIndexPathsForColumnCount:(int)arg1;
- (id)_gkNormalizedIndexPath;
- (int)_gkRow;
- (int)_gkSection;
- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dd_stringValue;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getIndexes:(unsigned int*)arg1;
- (unsigned int)gridColumn;
- (unsigned int)gridRow;
- (unsigned int)gridSection;
- (unsigned int)hash;
- (unsigned int)indexAtPosition:(unsigned int)arg1;
- (id)indexPathByAddingIndex:(unsigned int)arg1;
- (id)indexPathByRemovingLastIndex;
- (id)indexPathBySettingSection:(unsigned int)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(unsigned int)arg1;
- (id)initWithIndexes:(unsigned int*)arg1 length:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)length;
- (int)row;
- (int)section;

@end
