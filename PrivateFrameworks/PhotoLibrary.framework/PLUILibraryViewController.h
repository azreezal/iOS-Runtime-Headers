/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUILibraryViewController : PLLibraryViewController {
    unsigned int _didSetPreviousStatusBarStyle : 1;
    struct NSObject { Class x1; } *_allPhotosAlbumList;
    int _newStatusBarStyle;
    int _previousStatusBarStyle;
}

- (int)_imagePickerStatusBarStyle;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)_updateFilteredAlbumListWithFilter:(int)arg1;
- (void)albumListDidChange:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)navigateToAlbum:(struct NSObject { Class x1; }*)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)updateNavigationItemButtons;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
