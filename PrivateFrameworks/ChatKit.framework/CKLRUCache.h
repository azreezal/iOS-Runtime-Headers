/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray, NSMutableDictionary;

@interface CKLRUCache : NSObject {
    NSMutableDictionary *_cacheDict;
    unsigned int _capacity;
    NSMutableArray *_orderArray;
}

@property unsigned int capacity;
@property(readonly) unsigned int count;

- (void)_removeLRUObject;
- (id)allObjects;
- (unsigned int)capacity;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)objectForKey:(id)arg1;
- (void)setCapacity:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
