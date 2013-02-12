/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUMediaDataSource, MPMediaLibrary, MPMediaQuery, NSArray, NSMutableArray;

@interface IUMediaQueriesDataSource : IUMediaListDataSource {
    unsigned int _reloading : 1;
    unsigned int _queriesEntitiesChanged : 1;
    unsigned int _hasPendingDynamicChanges : 1;
    unsigned int _hasPendingDefaultLibraryChanges : 1;
    unsigned int _hasPendingLibraryChanges : 1;
    IUMediaDataSource *_dataSourceForFiltering;
    BOOL _hasQueriesAreEmpty;
    int _invalidationBehavior;
    MPMediaLibrary *_mediaLibrary;
    unsigned long long _nowPlayingItemPersistentID;
    NSArray *_queries;
    BOOL _queriesAreEmpty;
    NSArray *_queriesBeforeFiltering;
    NSMutableArray *_queriesEntities;
}

@property(readonly) BOOL alwaysGroupedInGridView;
@property int invalidationBehavior;
@property(readonly) BOOL matchesNowPlayingQuery;
@property(retain) MPMediaLibrary * mediaLibrary;
@property(readonly) unsigned long long nowPlayingItemPersistentID;
@property(retain) NSArray * queries;
@property(copy) MPMediaQuery * query;
@property(readonly) unsigned int requiredEntityCountForSections;
@property(readonly) BOOL shouldLoadLocalImagesSynchronously;
@property(readonly) BOOL showShuffleButtonWhenApplicable;

+ (id)_imageCache;
+ (Class)cellConfigurationClassForSongs;
+ (int)mediaEntityType;
+ (id)newDataSourceWithQuery:(id)arg1;
+ (id)newDataSourceWithSpecifier:(id)arg1;
+ (id)queryCollectionPropertiesToFetch;
+ (id)queryItemPropertiesToFetch;
+ (id)selectionConfirmationAlertForEntity:(id)arg1;
+ (BOOL)usesNowPlayingIndicator;

- (void)_addDefaultNormalActionRows;
- (void)_addDefaultOnTheGoActionRows;
- (void)_addPrefixActionRow:(id)arg1;
- (void)_appDefaultsDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)_copyReloadedQueriesEntitiesForQueries:(id)arg1 library:(id)arg2;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_getMoreAction:(id)arg1;
- (id)_getMoreURLForMediaType:(int)arg1;
- (void)_handleDefaultMediaLibraryDidChange;
- (void)_handleMediaLibraryDidChange;
- (void)_handleTrackDynamicPropertiesChanged;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (id)_newContextForAllAlbums;
- (id)_newContextForAllSongs;
- (id)_newContextForCopyWithIdentifier:(id)arg1;
- (id)_newContextForShuffle;
- (id)_newGetMoreActionRowForMediaType:(int)arg1;
- (void)_reloadFilteredQueries;
- (void)_setQueriesEntities:(id)arg1;
- (BOOL)alwaysGroupedInGridView;
- (void)appDefaultsChanged;
- (id)bestStoreURL;
- (BOOL)canDeleteIndex:(unsigned int)arg1;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (id)cellConfigurationForIndex:(unsigned int)arg1 artworkLoadingCompletionHandler:(id)arg2;
- (id)copyGetMoreFromITunesStoreActionRow;
- (unsigned int)count;
- (id)countStringFormat;
- (void)dealloc;
- (id)deleteConfirmationAlertViewForIndex:(unsigned int)arg1;
- (id)deleteConfirmationSheetForIndex:(unsigned int)arg1;
- (BOOL)deleteIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)entitiesForQuery:(id)arg1;
- (id)entityAtIndex:(unsigned int)arg1 localEntityIndex:(unsigned int*)arg2 localEntityCount:(unsigned int*)arg3 query:(id*)arg4;
- (id)entityAtIndex:(unsigned int)arg1;
- (BOOL)filterUsingDataSource:(id)arg1;
- (BOOL)hasPlayableItems;
- (unsigned int)indexOfEntity:(id)arg1;
- (unsigned int)indexOfPersistentID:(unsigned long long)arg1;
- (id)init;
- (void)invalidate;
- (void)invalidateDynamicTrackCaches;
- (int)invalidationBehavior;
- (BOOL)isEmpty;
- (BOOL)isEmptyAfterFiltering;
- (BOOL)isFiltered;
- (BOOL)isRestorableNavigationPathNode;
- (BOOL)matchesNowPlayingQuery;
- (int)mediaDisclosureStyleForIndex:(unsigned int)arg1;
- (id)mediaLibrary;
- (unsigned long long)nowPlayingItemPersistentID;
- (id)playbackContextForIndex:(unsigned int)arg1;
- (id)playbackContextForQuery:(id)arg1 entityIndex:(unsigned int)arg2;
- (id)queries;
- (id)query;
- (id)queryForDrillingIntoRowAtIndex:(unsigned int)arg1;
- (id)queryForIndex:(unsigned int)arg1 localEntityIndex:(unsigned int*)arg2;
- (void)reloadActionRows;
- (void)reloadData;
- (void)reloadDataWithCompletionHandler:(id)arg1;
- (void)reloadIsEmpty;
- (void)reloadNowPlayingItemPersistentID;
- (void)reloadQueriesEntities;
- (void)reloadSectionInfo;
- (unsigned int)requiredEntityCountForSections;
- (float)rowHeight;
- (id)selectionConfirmationAlertForIndex:(unsigned int)arg1;
- (BOOL)selectionPossibleForActionRow:(id)arg1;
- (BOOL)selectionPossibleForIndex:(unsigned int)arg1;
- (void)setArtAStillFrame:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (void)setInvalidationBehavior:(int)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setQueries:(id)arg1;
- (void)setQuery:(id)arg1;
- (BOOL)shouldDrawAsDisabledForIndex:(unsigned int)arg1;
- (BOOL)shouldLoadLocalImagesSynchronously;
- (BOOL)showShuffleButtonWhenApplicable;
- (BOOL)skipSingleItemLists;
- (id)viewControllerContextForActionRow:(id)arg1;
- (id)viewControllerContextForSearchCompletion;

@end
