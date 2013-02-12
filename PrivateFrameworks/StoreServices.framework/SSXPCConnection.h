/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface SSXPCConnection : NSObject {
    struct _xpc_connection_s { } *_connection;
    id _disconnectBlock;
    struct dispatch_queue_s { } *_dispatchQueue;
    id _messageBlock;
    struct dispatch_queue_s { } *_replyQueue;
}

@property(copy) id disconnectBlock;
@property(copy) id messageBlock;

- (id)_initSSXPCConnection;
- (void)_reloadEventHandler;
- (struct dispatch_queue_s { }*)copyReplyQueue;
- (struct _xpc_endpoint_s { }*)createXPCEndpoint;
- (void)dealloc;
- (id)disconnectBlock;
- (id)init;
- (id)initWithServiceName:(id)arg1;
- (id)initWithXPCConnection:(struct _xpc_connection_s { }*)arg1;
- (id)messageBlock;
- (void)sendMessage:(void*)arg1 withReply:(id)arg2;
- (void)sendMessage:(void*)arg1;
- (void)setDisconnectBlock:(id)arg1;
- (void)setMessageBlock:(id)arg1;
- (void)setReplyQueue:(struct dispatch_queue_s { }*)arg1;

@end
