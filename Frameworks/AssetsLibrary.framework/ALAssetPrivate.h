/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAssetsLibrary, PLManagedAsset, PLPhotoLibrary;

@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset> {
    BOOL _isValid;
    ALAssetsLibrary *_library;
    PLManagedAsset *_photo;
    PLPhotoLibrary *_photoLibrary;
}

@property(retain) PLPhotoLibrary * _photoLibrary;
@property BOOL isValid;
@property ALAssetsLibrary * library;
@property(retain) PLManagedAsset * photo;

- (void)_performBlockAndWait:(id)arg1;
- (id)_photoLibrary;
- (void)dealloc;
- (id)initWithManagedAsset:(id)arg1 library:(id)arg2;
- (BOOL)isValid;
- (id)library;
- (void)libraryDidChange;
- (void)libraryWillDisappear;
- (id)photo;
- (void)setIsValid:(BOOL)arg1;
- (void)setLibrary:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)set_photoLibrary:(id)arg1;

@end
