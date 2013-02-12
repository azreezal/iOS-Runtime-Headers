/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, SSXPCConnection;

@interface SSPreorderManager : NSObject {
    SSXPCConnection *_connection;
    struct dispatch_queue_s { } *_dispatchQueue;
    NSArray *_itemKinds;
    SSXPCConnection *_observerConnection;
    struct dispatch_queue_s { } *_observerQueue;
    struct __CFArray { } *_observers;
    NSArray *_preorders;
}

@property(readonly) NSArray * itemKinds;
@property(readonly) NSArray * preorders;

+ (id)musicStoreItemKinds;

- (void)_connectAsObserver;
- (void)_handleMessage:(void*)arg1 fromServerConnection:(struct _xpc_connection_s { }*)arg2;
- (void)_registerAsObserver;
- (void)_sendMessageToObservers:(SEL)arg1;
- (void)addObserver:(id)arg1;
- (void)cancelPreorders:(id)arg1 withCompletionBlock:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithItemKinds:(id)arg1;
- (id)itemKinds;
- (id)preorders;
- (void)reloadFromServer;
- (void)removeObserver:(id)arg1;

@end
