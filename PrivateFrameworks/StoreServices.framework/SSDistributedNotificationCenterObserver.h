/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface SSDistributedNotificationCenterObserver : NSObject {
    id _block;
    struct dispatch_queue_s { } *_dispatchQueue;
    NSString *_name;
}

@property(readonly) id block;
@property(readonly) struct dispatch_queue_s { }* dispatchQueue;
@property(readonly) NSString * name;

- (id)block;
- (void)dealloc;
- (struct dispatch_queue_s { }*)dispatchQueue;
- (id)initWithName:(id)arg1 queue:(struct dispatch_queue_s { }*)arg2 block:(id)arg3;
- (id)name;

@end
