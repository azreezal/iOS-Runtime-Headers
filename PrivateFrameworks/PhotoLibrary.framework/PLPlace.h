/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSDictionary, NSMutableArray, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSSet, NSString, NSURL, PLManagedAsset, PLPlacesMapAnnotation, UIImage;

@interface PLPlace : NSObject <PLAssetContainer> {
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    PLPlacesMapAnnotation *_annotation;
    NSMutableOrderedSet *_assets;
    BOOL _needsToUpdateAlbumPhotos;
    NSMutableArray *_photos;
    BOOL _titleIsNumberOfPhotos;
    NSString *_uuid;
    NSSet *assetsSet;
    } destinationRegion;
    unsigned int numberOfPhotos;
    unsigned int numberOfVideos;
    } originalRegion;
    } region;
    NSDictionary *slideshowSettings;
}

@property(retain) NSMutableOrderedSet * _assets;
@property(copy) NSString * _uuid;
@property(readonly) NSOrderedSet * assets;
@property(retain) NSSet * assetsSet;
@property(readonly) unsigned int count;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } destinationRegion;
@property(readonly) NSURL * groupURL;
@property(retain) NSString * importSessionID;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(retain) PLManagedAsset * keyAsset;
@property(readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSMutableOrderedSet * mutableAssets;
@property(readonly) NSString * name;
@property unsigned int numberOfPhotos;
@property unsigned int numberOfVideos;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } originalRegion;
@property unsigned int pendingItemsCount;
@property unsigned int pendingItemsType;
@property(readonly) unsigned int photosCount;
@property(readonly) UIImage * posterImage;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(readonly) NSString * title;
@property(readonly) NSString * uuid;
@property(readonly) unsigned int videosCount;

- (id)_annotationTitle;
- (id)_assets;
- (id)_newAnnotationWith2DLocation:(struct { double x1; double x2; })arg1 title:(id)arg2 subtitle:(id)arg3;
- (struct { double x1; double x2; })_placeLocation;
- (void)_setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateAnnotationTitle;
- (void)_updatePlaceToPlace:(id)arg1;
- (id)_uuid;
- (void)addPhoto:(id)arg1;
- (id)annotation;
- (id)assets;
- (id)assetsSet;
- (BOOL)canPerformEditOperation:(int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })destinationRegion;
- (id)displayableIndexesForCount:(unsigned int)arg1;
- (struct { double x1; double x2; })effectiveLocation;
- (id)groupURL;
- (BOOL)hasPhoto:(id)arg1;
- (BOOL)hasSameEffectiveLocationAs:(struct { double x1; double x2; })arg1;
- (id)importSessionID;
- (unsigned int)indexOfPosterImage;
- (id)initWithRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isCameraAlbum;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPlace:(id)arg1;
- (BOOL)isLibrary;
- (BOOL)isPhotoStreamAlbum;
- (id)keyAsset;
- (id)kind;
- (int)kindValue;
- (id)localizedTitle;
- (id)mutableAssets;
- (id)name;
- (unsigned int)numberOfPhotos;
- (unsigned int)numberOfVideos;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })originalRegion;
- (unsigned int)pendingItemsCount;
- (unsigned int)pendingItemsType;
- (unsigned int)photosCount;
- (id)posterImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (void)removePhoto:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setAssetsSet:(id)arg1;
- (void)setDestinationRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setNumberOfPhotos:(unsigned int)arg1;
- (void)setNumberOfVideos:(unsigned int)arg1;
- (void)setOriginalRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPendingItemsCount:(unsigned int)arg1;
- (void)setPendingItemsType:(unsigned int)arg1;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setTitleIsNumberOfPhotos:(BOOL)arg1;
- (void)set_assets:(id)arg1;
- (void)set_uuid:(id)arg1;
- (BOOL)shouldDeleteWhenEmpty;
- (BOOL)shouldGroupPhoto:(id)arg1;
- (id)slideshowSettings;
- (id)title;
- (void)updateStackedImage;
- (id)uuid;
- (unsigned int)videosCount;

@end
