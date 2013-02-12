/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@class NSLock, NSMutableDictionary;

@interface GLKShadingHash : NSObject {
    NSMutableDictionary *_compiledFshs;
    NSMutableDictionary *_compiledVshs;
    NSLock *_fshLock;
    NSLock *_vshLock;
}

- (id)compiledFshForKey:(id)arg1;
- (id)compiledVshForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setCompiledFsh:(id)arg1 forKey:(id)arg2;
- (void)setCompiledVsh:(id)arg1 forKey:(id)arg2;

@end
