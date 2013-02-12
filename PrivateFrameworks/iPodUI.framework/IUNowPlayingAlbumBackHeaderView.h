/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPAVItem, MPMediaQuery, NSString, UIImage, UIImageView, UILabel;

@interface IUNowPlayingAlbumBackHeaderView : UIControl {
    UIImageView *_artworkImageView;
    UIImageView *_backgroundImageView;
    UILabel *_infoLabel;
    MPAVItem *_item;
    MPMediaQuery *_query;
    int _style;
    NSString *_subtitle;
    UILabel *_subtitleLabel;
    NSString *_title;
    UILabel *_titleLabel;
}

@property(retain) UIImage * artworkImage;
@property(retain) MPAVItem * item;
@property(retain) MPMediaQuery * query;
@property int style;
@property(retain) NSString * subtitle;
@property(retain) NSString * title;

+ (struct CGSize { float x1; float x2; })thumbnailSize;

- (id)_artworkImageView;
- (id)_backgroundImageView;
- (id)_infoLabel;
- (id)_infoTitle;
- (void)_layoutForDefaultStyle;
- (void)_layoutForGridStyle;
- (void)_layoutForWildcatGridStyle;
- (void)_reloadViews;
- (id)_subtitleLabel;
- (id)_titleLabel;
- (id)artworkImage;
- (void)dealloc;
- (id)item;
- (void)layoutSubviews;
- (id)query;
- (void)setArtworkImage:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (int)style;
- (id)subtitle;
- (id)title;

@end
