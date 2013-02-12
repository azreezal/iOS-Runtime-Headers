/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPImageCache, MPImageCacheRequest, MPTimeMarker, UIImage;

@interface MPVideoChapterCellContentView : UIView {
    unsigned int _current : 1;
    unsigned int _selected : 1;
    unsigned int _showThumbnailColumn : 1;
    UIImage *_artwork;
    MPImageCache *_artworkImageCache;
    MPImageCacheRequest *_artworkImageRequest;
    unsigned int _index;
    float _timeColumnWidth;
    MPTimeMarker *_timeMarker;
}

@property(retain) UIImage * artwork;
@property(retain) MPImageCache * artworkImageCache;
@property(getter=isCurrent) BOOL current;
@property unsigned int index;
@property(getter=isSelected) BOOL selected;
@property BOOL showThumbnailColumn;
@property float timeColumnWidth;
@property(retain) MPTimeMarker * timeMarker;

- (id)artwork;
- (id)artworkImageCache;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)index;
- (BOOL)isCurrent;
- (BOOL)isSelected;
- (void)setArtwork:(id)arg1;
- (void)setArtworkImageCache:(id)arg1;
- (void)setArtworkImageRequest:(id)arg1 artworkLoadCompletionHandler:(id)arg2;
- (void)setCurrent:(BOOL)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setShowThumbnailColumn:(BOOL)arg1;
- (void)setTimeColumnWidth:(float)arg1;
- (void)setTimeMarker:(id)arg1;
- (BOOL)showThumbnailColumn;
- (float)timeColumnWidth;
- (id)timeMarker;

@end
