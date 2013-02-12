/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray, NSNetServiceBrowser, NSThread;

@interface ATWakeupCall : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSNetServiceBrowser *_browser;
    id _completion;
    NSArray *_hostLibraryIdentifiers;
    int _hostsToResolve;
    NSMutableArray *_resolvedLibraryIdentifiers;
    NSMutableArray *_resolvedLibraryServices;
    int _resolving;
    BOOL _searching;
    NSThread *_wakeThread;
}

+ (void)sendWakeupCall:(id)arg1;
+ (void)sendWakeupCallToAllSyncHosts;
+ (id)wakeableHostsWithCompletion:(id)arg1;

- (void)dealloc;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)stop;
- (void)wake;

@end
