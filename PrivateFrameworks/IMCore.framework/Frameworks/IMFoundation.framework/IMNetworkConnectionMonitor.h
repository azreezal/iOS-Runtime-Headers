/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate> {
    unsigned int _hostFlags;
    IMReachability *_hostReachability;
    unsigned int _ipFlags;
    IMReachability *_ipReachability;
    BOOL _isConnected;
    BOOL _isSleeping;
}

@property unsigned int _hostFlags;
@property(retain) IMReachability * _hostReachability;
@property unsigned int _ipFlags;
@property(retain) IMReachability * _ipReachability;
@property BOOL _isConnected;
@property BOOL _isSleeping;

- (void)_clearReachability:(id*)arg1 flags:(unsigned int*)arg2;
- (void)_doCallbackLater;
- (void)_doCallbackNow;
- (unsigned int)_hostFlags;
- (id)_hostReachability;
- (unsigned int)_ipFlags;
- (id)_ipReachability;
- (BOOL)_isConnected;
- (BOOL)_isSleeping;
- (void)_networkManagedUpdated:(id)arg1;
- (void)_setup;
- (void)_setupReachability;
- (void)clear;
- (void)dealloc;
- (void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (void)goDisconnected;
- (BOOL)isImmediatelyReachable;
- (void)reachabilityDidChange:(id)arg1;
- (void)set_hostFlags:(unsigned int)arg1;
- (void)set_hostReachability:(id)arg1;
- (void)set_ipFlags:(unsigned int)arg1;
- (void)set_ipReachability:(id)arg1;
- (void)set_isConnected:(BOOL)arg1;
- (void)set_isSleeping:(BOOL)arg1;
- (void)systemDidWake;
- (void)systemWillSleep;

@end
