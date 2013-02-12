/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSObject<MBConnectionHandler>;

@interface MBConnection : NSObject {
    struct _xpc_connection_s { } *_conn;
    struct dispatch_queue_s { } *_eventQueue;
    NSObject<MBConnectionHandler> *_handler;
}

@property NSObject<MBConnectionHandler> * messageHandler;

- (void)_handleXPCError:(void*)arg1;
- (void)_handleXPCEvent:(void*)arg1;
- (void)_setEventHandlerForXPCConnection;
- (void)dealloc;
- (struct dispatch_queue_s { }*)eventQueue;
- (id)initWithServiceName:(id)arg1 eventQueue:(struct dispatch_queue_s { }*)arg2;
- (id)initWithXPCConnection:(struct _xpc_connection_s { }*)arg1 eventQueue:(struct dispatch_queue_s { }*)arg2;
- (id)messageHandler;
- (void)resume;
- (void)sendMessage:(id)arg1;
- (id)sendMessageWithReplyAndSync:(id)arg1;
- (void)setMessageHandler:(id)arg1;
- (void)suspend;

@end
