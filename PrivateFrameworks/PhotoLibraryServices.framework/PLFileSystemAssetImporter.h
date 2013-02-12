/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableIndexSet, PLPhotoLibrary;

@interface PLFileSystemAssetImporter : NSObject {
    BOOL _hasProcessedAnyAssets;
    PLPhotoLibrary *_photoLibrary;
    NSMutableIndexSet *_thumbIndexes;
}

- (id)_addAssetWithURL:(id)arg1;
- (id)addAssetWithURLs:(id)arg1 usingThumbnailsInformation:(id)arg2 duplicateUUIDs:(id)arg3 force:(BOOL)arg4;
- (id)addAssetWithURLs:(id)arg1 usingThumbnailsInformation:(id)arg2 duplicateUUIDs:(id)arg3;
- (id)addAssetWithURLs:(id)arg1 usingThumbnailsInformation:(id)arg2 force:(BOOL)arg3;
- (void)createThumbnailForVideoAsset:(id)arg1;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (unsigned int)nextThumbnailIndex;
- (void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2;
- (BOOL)setupPhotoAsset:(id)arg1 withURL:(id)arg2 thumbnailsInformation:(id)arg3 allowedToResetThumbnails:(BOOL)arg4;

@end
