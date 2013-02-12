/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class <GKNATObserverDelegate>, GKNATObserver_SCContext, NSMutableDictionary, NSRecursiveLock;

@interface GKNATObserverInternal : GKNATObserver {
    int _NATCheckRetryCount;
    double _NATCheckRetryDelay;
    BOOL _addCarrierFlag;
    BOOL _addInRangeFlag;
    BOOL _checkTCPAndSSL;
    NSMutableDictionary *_commNATFlagDictionary;
    NSMutableDictionary *_currentNetworkNames;
    <GKNATObserverDelegate> *_delegate;
    struct __SCDynamicStore { } *_dynamicStore;
    BOOL _fNATCheckInProgress;
    BOOL _fNATCheckQueued;
    BOOL _favorNonCarrier;
    int _lastReportedNATType;
    struct dispatch_group_s { } *_natCheckGroup;
    struct dispatch_queue_s { } *_natCheckQueue;
    BOOL _newCarrierType;
    BOOL _nonCarrierInterfacesOnly;
    struct dispatch_queue_s { } *_reportNATQueue;
    GKNATObserver_SCContext *_sccontext;
    NSRecursiveLock *_xNATCheck;
}

- (void)HTTPCheckWithIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 useCache:(BOOL)arg2;
- (void)HTTPSCheckWithIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 useCache:(BOOL)arg2;
- (void)NATCheckWithIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 useCache:(BOOL)arg2;
- (void)cacheNATFlags:(id)arg1 forNetwork:(id)arg2;
- (struct tagCommNATInfo { unsigned int x1; unsigned int x2; unsigned short x3[3]; unsigned int x4; }*)callCommNATTestFromIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;
- (int)callHTTPTestFromIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 ToServer:(id)arg2 isSSL:(BOOL)arg3;
- (void)clearRetries;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)lookupCachedNATFlagsForNetwork:(id)arg1;
- (id)nameForNetworkWithIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 interfaceName:(id)arg2;
- (int)natType;
- (int)natTypeForCommNATFlags:(unsigned int)arg1 isCarrier:(BOOL)arg2;
- (void)registerForNetworkChanges;
- (void)release;
- (void)reportNATType;
- (void)setDelegate:(id)arg1;
- (void)tryNATCheckWithDelay:(double)arg1;

@end
