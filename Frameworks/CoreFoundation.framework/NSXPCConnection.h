/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSString;

@interface NSXPCConnection : NSObject <NSXPCObject> {
    struct _xpc_connection_s { } *_conn;
    struct dispatch_group_s { } *_dgroup;
    struct dispatch_queue_s { } *_dq;
    int _flavor;
    id _handleMessage;
    int _invalid;
    NSMutableArray *_invalidHandlers;
    int _lock;
    long long _mseqno;
    struct _xpc_connection_s { } *_sconn;
    NSString *_serviceName;
    int _started;
}

@property(readonly) struct _xpc_connection_s { }* XPCConnection;
@property struct dispatch_queue_s { }* dispatchQueue;
@property(copy) id handleMessage;
@property(readonly) NSString * serviceName;

- (struct _xpc_connection_s { }*)XPCConnection;
- (void)__invalidate;
- (void)addInvalidationHandler:(id)arg1;
- (void)dealloc;
- (struct dispatch_queue_s { }*)dispatchQueue;
- (void*)encodeToNewXPCObject;
- (id)handleMessage;
- (id)initWithPeerConnection:(struct _xpc_connection_s { }*)arg1;
- (id)initWithReceivedConnection:(struct _xpc_connection_s { }*)arg1;
- (id)initWithServiceName:(id)arg1 privileged:(BOOL)arg2;
- (id)initWithXPCConnection:(struct _xpc_connection_s { }*)arg1 type:(int)arg2;
- (id)initWithXPCObject:(void*)arg1;
- (void)invalidate;
- (void)sendMessage:(void*)arg1 waitForAck:(BOOL)arg2;
- (void)sendMessage:(void*)arg1 waitForSend:(BOOL)arg2;
- (id)serviceName;
- (void)setDispatchQueue:(struct dispatch_queue_s { }*)arg1;
- (void)setHandleMessage:(id)arg1;
- (void)start;

@end
