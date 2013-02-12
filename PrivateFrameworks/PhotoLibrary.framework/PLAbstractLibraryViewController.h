/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSObject<PLAlbumContainer>, NSObject<PLAssetContainer>, PLSyncProgressView;

@interface PLAbstractLibraryViewController : UIViewController <PLAlbumListChangeObserver, PLAlbumChangeObserver, PLPhotoLibraryShouldReloadObserver> {
    struct { 
        unsigned int contentMode : 8; 
        unsigned int hasContent : 1; 
        unsigned int albumsListViewInSync : 1; 
        unsigned int syncProgressVisible : 1; 
        unsigned int visible : 1; 
        unsigned int reserved : 20; 
    struct NSObject { Class x1; } *_albumList;
    } _alcFlags;
    id _didSelectAlbumHandler;
    struct NSObject { Class x1; } *_hiddenAlbum;
    unsigned int _ignoreReorderNotificationCount;
    unsigned int _justCreatedAlbumIndex;
    unsigned int _lastPendingCount;
    unsigned int _previousAlbumsCount;
    NSArray *_syncProgressAlbums;
    unsigned int _totalItemsCount;
}

@property(readonly) NSObject<PLAlbumContainer> * albumList;
@property BOOL albumsListViewInSync;
@property(readonly) int contentMode;
@property(copy) id didSelectAlbumHandler;
@property(readonly) BOOL hasContent;
@property(retain) NSObject<PLAssetContainer> * hiddenAlbum;
@property(readonly) BOOL libraryViewVisible;
@property(readonly) PLSyncProgressView * syncProgressView;
@property(getter=isSyncProgressVisible) BOOL syncProgressVisible;

- (id)_syncProgressAlbums;
- (void)_updateAlbumsWithNotification:(id)arg1;
- (void)_updateHasContent;
- (void)_updateSyncProgress;
- (void)addAlbum:(id)arg1;
- (void)albumDidChange:(id)arg1;
- (struct NSObject { Class x1; }*)albumList;
- (void)albumListDidChange:(id)arg1;
- (BOOL)albumsListViewInSync;
- (void)beginAddPhotosSessionForAlbum:(struct NSObject { Class x1; }*)arg1 completionHandler:(id)arg2;
- (int)contentMode;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)didSelectAlbumHandler;
- (BOOL)hasContent;
- (struct NSObject { Class x1; }*)hiddenAlbum;
- (void)hideAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)increaseIgnoreReorderNotificationCount;
- (id)init;
- (BOOL)isSyncProgressVisible;
- (BOOL)libraryViewVisible;
- (void)navigateToAlbum:(struct NSObject { Class x1; }*)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)navigateToRevealAlbum:(struct NSObject { Class x1; }*)arg1 animated:(BOOL)arg2;
- (void)scrollToAlbumAtIndex:(unsigned int)arg1 animated:(BOOL)arg2 select:(BOOL)arg3;
- (void)setAlbumList:(struct NSObject { Class x1; }*)arg1 contentMode:(int)arg2;
- (void)setAlbumsListViewInSync:(BOOL)arg1;
- (void)setDidSelectAlbumHandler:(id)arg1;
- (void)setHiddenAlbum:(id)arg1 animated:(BOOL)arg2;
- (void)setHiddenAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setSyncProgressVisible:(BOOL)arg1;
- (void)shouldReload:(id)arg1;
- (id)syncProgressView;
- (BOOL)updateInterfaceForDeletedAlbumIndexes:(id)arg1 addedIndexes:(id)arg2 changedIndexes:(id)arg3 needsFullReload:(BOOL)arg4;
- (void)updateInterfaceForHasContentChange;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;

@end
