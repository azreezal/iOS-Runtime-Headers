/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@class ATXPCConnection, NSObject<ATConnectionDelegate>;

@interface ATConnection : NSObject {
    BOOL _atcRunning;
    int _atcRunningToken;
    ATXPCConnection *_connection;
    NSObject<ATConnectionDelegate> *_delegate;
    BOOL _registerForStatus;
}

@property(retain) NSObject<ATConnectionDelegate> * delegate;

- (id)_connection;
- (void)_handleMessage:(id)arg1;
- (void)_resetConnection;
- (void)_sendMessage:(id)arg1 info:(id)arg2 reply:(id)arg3;
- (void)_setRegisterForStatus:(BOOL)arg1;
- (void)cancelSync;
- (void)clearSyncData;
- (void)dataMigrationFinished;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)isSyncing:(BOOL*)arg1 automatically:(BOOL*)arg2 wirelessly:(BOOL*)arg3;
- (void)lowBatteryNotification;
- (void)registerForStatus;
- (void)requestSyncForLibrary:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)unregisterForStatus;

@end
