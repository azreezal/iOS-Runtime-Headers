/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSMutableArray, NSMutableDictionary;

@interface AVConferenceXPCServer : NSObject {
    NSMutableArray *clientConnections;
    struct dispatch_queue_s { } *incomingMessageQueue;
    struct _xpc_connection_s { } *listener;
    struct dispatch_queue_s { } *outgoingMessageQueue;
    NSMutableDictionary *registeredBlocks;
}

@property(readonly) struct _xpc_connection_s { }* listener;
@property(readonly) NSMutableDictionary * registeredBlocks;

+ (id)AVConferenceXPCServerSingleton;

- (void)_xpc_add_connection_to_list:(struct _xpc_connection_s { }*)arg1;
- (void)_xpc_handle_incoming_request:(struct _xpc_connection_s { }*)arg1;
- (void)_xpc_remove_connection_from_list:(struct _xpc_connection_s { }*)arg1;
- (void)_xpc_remove_connections_from_list;
- (void)_xpc_start_listening_for_connections;
- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (void)appendPIDToDictionary:(id)arg1 pid:(int)arg2;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createClientDiedDictionary;
- (id)createNSDictionaryFromXPCDictionary:(void*)arg1;
- (void*)createXPCDictionaryFromNSDictionary:(id)arg1 forEvent:(void*)arg2;
- (void)dealloc;
- (void)deregisterFromService:(char *)arg1;
- (id)init;
- (struct _xpc_connection_s { }*)listener;
- (void)registerBlockForService:(char *)arg1 block:(id)arg2;
- (id)registeredBlocks;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2;

@end
