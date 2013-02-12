/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface __NSHostExtraIvars : NSObject {
    struct dispatch_queue_s { } *cacheAccessQueue;
    struct dispatch_queue_s { } *callbackQueue;
    struct dispatch_queue_s { } *resolveQueue;
    int resolveType;
    BOOL startedResolving;
    NSString *thingToResolve;
}

@property(readonly) struct dispatch_queue_s { }* cacheAccessQueue;
@property(readonly) struct dispatch_queue_s { }* callbackQueue;
@property(readonly) struct dispatch_queue_s { }* resolveQueue;
@property int resolveType;
@property BOOL startedResolving;
@property(retain) NSString * thingToResolve;

- (struct dispatch_queue_s { }*)cacheAccessQueue;
- (struct dispatch_queue_s { }*)callbackQueue;
- (void)cleanup;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (struct dispatch_queue_s { }*)resolveQueue;
- (int)resolveType;
- (void)setResolveType:(int)arg1;
- (void)setStartedResolving:(BOOL)arg1;
- (void)setThingToResolve:(id)arg1;
- (BOOL)startedResolving;
- (id)thingToResolve;

@end
