/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISOperation, NSString, NSURL, SSRemoteNotificationClient, SULocationObserver, SUPlaceholderViewController, SUSectionsResponse, SUTabBarController, UINavigationController;

@interface SUClientApplicationController : SUClientController <SUTabBarControllerDelegate> {
    SUPlaceholderViewController *_fetchSectionsPlaceholder;
    int _ignoreDownloadQueueChangeCount;
    SUSectionsResponse *_lastBackgroundSectionsResponse;
    SUSectionsResponse *_lastSectionsResponse;
    NSURL *_launchURL;
    ISOperation *_loadSectionsOperation;
    SULocationObserver *_locationObserver;
    BOOL _reloadForStorefrontChangeAfterAccountSetup;
    BOOL _reloadSectionsOnNextLaunch;
    SSRemoteNotificationClient *_remoteNotificationClient;
    SUTabBarController *_tabBarController;
}

@property(readonly) NSString * defaultPNGNameForSuspend;
@property(getter=isIgnoringDownloadQueueChanges,readonly) BOOL ignoringDownloadQueueChanges;
@property(readonly) NSURL * launchURL;
@property(getter=wasLaunchedFromLibrary,readonly) BOOL launchedFromLibrary;
@property(readonly) SUTabBarController * tabBarController;
@property(getter=isTabBarControllerLoaded,readonly) BOOL tabBarControllerLoaded;
@property(readonly) UINavigationController * topNavigationController;

+ (void)setSharedController:(id)arg1;
+ (id)sharedController;

- (void)_accountControllerDisappearedNotification:(id)arg1;
- (id)_accountViewController;
- (void)_beginObservingLocation;
- (void)_cancelLoadSectionsOperation;
- (void)_cancelSectionFetchPlaceholder;
- (void)_cancelSuspendAfterDialogsDismissed;
- (void)_defaultHandleApplicationURLRequestProperties:(id)arg1;
- (void)_dialogDidFinishNotification:(id)arg1;
- (void)_handleAccountURL:(id)arg1;
- (void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1;
- (void)_handleFinishedLoadSectionsOperation:(id)arg1;
- (void)_handleSearchURL:(id)arg1;
- (void)_handleSectionsLoadFailedWithError:(id)arg1;
- (BOOL)_loadSectionsAllowingCache:(BOOL)arg1 withCompletionBlock:(id)arg2;
- (void)_presentSectionFetchUI;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (BOOL)_reloadForStorefrontChange;
- (void)_reloadWithSectionsResponse:(id)arg1;
- (void)_remoteNotificationsAvailableNotification:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (id)_resumableViewController;
- (void)_retrySectionsAfterNetworkTransition;
- (void)_selectFooterSectionNotification:(id)arg1;
- (void)_setupTabBarController;
- (BOOL)_showWildcatAccountViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_storeFrontChangedNotification:(id)arg1;
- (void)bagDidLoadNotification:(id)arg1;
- (void)becomeActive;
- (void)beginIgnoringDownloadQueueChanges;
- (void)cancelAllOperations;
- (id)copySuspendSettings;
- (void)dealloc;
- (double)defaultImageSnapshotExpiration;
- (id)defaultPNGNameForSuspend;
- (void)dequeueRemoteNotifications;
- (void)dismissOverlayBackgroundViewController;
- (BOOL)dismissTopViewControllerAnimated:(BOOL)arg1;
- (BOOL)displayClientURL:(id)arg1;
- (void)endIgnoringDownloadQueueChanges;
- (void)exitStoreAfterDialogsDismiss;
- (BOOL)gotoStorePage:(id)arg1 animated:(BOOL)arg2;
- (id)initWithClientIdentifier:(id)arg1;
- (BOOL)isIgnoringDownloadQueueChanges;
- (BOOL)isTabBarControllerLoaded;
- (id)launchURL;
- (BOOL)openClientURL:(id)arg1;
- (id)overlayBackgroundViewController;
- (void)performActionForRemoteNotification:(id)arg1;
- (BOOL)presentAccountViewController:(id)arg1 showNavigationBar:(BOOL)arg2 animated:(BOOL)arg3;
- (void)presentExternalURLViewController:(id)arg1;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
- (BOOL)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;
- (void)resignActive;
- (void)returnToLibrary;
- (BOOL)selectSectionWithIdentifier:(id)arg1;
- (void)setupUI;
- (id)showMainPageForItemKind:(id)arg1 sectionIdentifiers:(id)arg2;
- (id)tabBarController;
- (void)tearDownUI;
- (id)topNavigationController;
- (BOOL)wasLaunchedFromLibrary;

@end
