/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADXPCConnection, NSMutableArray, NSMutableSet, NSString, NSTimer;

@interface ADSRVSession : NSObject <AdSheetSessionDelegate> {
    NSMutableSet *_activeProfilingSessions;
    NSString *_bundleIdentifier;
    NSMutableArray *_children;
    int _clientStatusBarOrientation;
    NSTimer *_closeTimer;
    ADXPCConnection *_connection;
    BOOL _isClientInBackground;
    BOOL _isOpen;
    BOOL _isPrivilegedClient;
    BOOL _isTimedCloseInProgress;
    NSString *_serverURL;
    id _sessionMessageProxy;
}

@property(retain) NSMutableSet * activeProfilingSessions;
@property(readonly) NSString * bundleId;
@property(retain) NSString * bundleIdentifier;
@property(retain) NSMutableArray * children;
@property int clientStatusBarOrientation;
@property(retain) NSTimer * closeTimer;
@property(retain) ADXPCConnection * connection;
@property BOOL isClientInBackground;
@property(readonly) BOOL isOpen;
@property BOOL isPrivilegedClient;
@property(readonly) BOOL isTimedCloseInProgress;
@property(retain) NSString * serverURL;
@property(readonly) id sessionMessageProxy;

- (void)_didReceiveMemoryWarning;
- (void)_priv_abort:(id)arg1;
- (void)_priv_addToBlacklist:(id)arg1;
- (void)_priv_beginProfiling:(id)arg1;
- (void)_priv_clearAdCache:(id)arg1;
- (void)_priv_clearLocationPermissionCache:(id)arg1;
- (void)_priv_clearURLCache:(id)arg1;
- (void)_priv_clearWebArchiveCache:(id)arg1;
- (void)_priv_endProfiling:(id)arg1;
- (void)_priv_logClientState:(id)arg1;
- (void)_priv_removeAllDefaultsOverrides:(id)arg1;
- (void)_priv_reportStatusBarVisibility:(id)arg1;
- (void)_priv_resetServerAccessCoordinator:(id)arg1;
- (void)_priv_setServerURI:(id)arg1;
- (void)_priv_terminate:(id)arg1;
- (void)_priv_writeDefaultValueForKey:(id)arg1;
- (void)_priv_writeRawDefaultValueForKey:(id)arg1;
- (void)_profileTestComplete:(id)arg1;
- (void)_remote_bannerCreated:(id)arg1;
- (void)_remote_clientDidBecomeActive:(id)arg1;
- (void)_remote_clientDidEnterBackground:(id)arg1;
- (void)_remote_clientDidResignActive:(id)arg1;
- (void)_remote_clientWillEnterForeground:(id)arg1;
- (void)_remote_forwardOrientationChange:(id)arg1;
- (void)_remote_forwardShakeEvent:(id)arg1;
- (void)_remote_removeFromBlacklist:(id)arg1;
- (id)activeProfilingSessions;
- (id)bundleId;
- (id)bundleIdentifier;
- (id)children;
- (int)clientStatusBarOrientation;
- (void)close;
- (id)closeTimer;
- (id)connection;
- (void)considerClosing;
- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isClientInBackground;
- (BOOL)isOpen;
- (BOOL)isPrivilegedClient;
- (BOOL)isTimedCloseInProgress;
- (void)open;
- (id)proxyItemIdentifier;
- (id)serverURL;
- (void)sessionDidClose:(id)arg1;
- (void)sessionDidOpen:(id)arg1;
- (id)sessionMessageProxy;
- (void)setActiveProfilingSessions:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setClientStatusBarOrientation:(int)arg1;
- (void)setCloseTimer:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setIsClientInBackground:(BOOL)arg1;
- (void)setIsPrivilegedClient:(BOOL)arg1;
- (void)setServerURL:(id)arg1;
- (void)updateClientStateWithInfo:(id)arg1;

@end
