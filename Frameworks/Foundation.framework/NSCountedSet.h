/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSCountedSet : NSMutableSet 
{
    id _table;
    void *_reserved;
}


- (BOOL)isSubsetOfSet:(id)arg1;
- (NSUInteger)countForObject:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithSet:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (id)member:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)intersectSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)isEqualToSet:(id)arg1;
- (Class)classForCoder;
- (id)allObjects;
- (id)initWithArray:(id)arg1;
- (id)anyObject;
- (id)initWithObjects:(id*)arg1 count:(NSUInteger)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCapacity:(NSUInteger)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)init;
- (void)removeObject:(id)arg1;
- (NSUInteger)count;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (id)objectEnumerator;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end