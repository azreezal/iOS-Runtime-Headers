/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class <YTAuthenticatorDelegate>, NSMutableArray;

@interface YTAuthenticator : NSObject {
    int _accountAuthState;
    NSMutableArray *_deferredRequests;
    <YTAuthenticatorDelegate> *_delegate;
    int _deviceAuthState;
}

+ (id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)sharedAuthenticator;

- (void)_addAccountAuthenticationObserers;
- (void)_addDeferredRequest:(id)arg1 accountAuthRequired:(BOOL)arg2;
- (void)_addDeviceAuthenticationObserers;
- (void)_completeAuthenticationForDeferredRequests;
- (void)_didAuthenticateAccount:(id)arg1;
- (void)_didAuthenticateDevice:(id)arg1;
- (void)_failedToAuthenticateAccount:(id)arg1;
- (void)_failedToAuthenticateDevice:(id)arg1;
- (void)_removeAccountAuthenticationObservers;
- (void)_removeDefferredRequests;
- (void)_removeDeviceAuthenticationObservers;
- (void)addAuthenticationHeadersToRequest:(id)arg1 accountAuthRequired:(BOOL)arg2;
- (BOOL)cachedCredentialsValid;
- (void)clearAccountInfo;
- (void)dealloc;
- (id)init;
- (void)invalidateToken;
- (BOOL)isAccountAuthenticated;
- (BOOL)isWaitingForAuthentication;
- (BOOL)loadStoredCredentials;
- (void)setAccount:(id)arg1 password:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)userCancelledAccountAuthentication;

@end
