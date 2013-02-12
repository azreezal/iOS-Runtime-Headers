/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSMutableSet;

@interface IUSongCellGlobalContext : IUMediaItemCellGlobalContext {
    unsigned int _showAlbum : 1;
    unsigned int _showAlbumSubtitle : 1;
    unsigned int _showArtistSubtitle : 1;
    id _aggregateProperties;
    NSMutableSet *_displayedStringProperties;
    int _interfaceOrientation;
    BOOL _showDuration;
}

@property(retain) id aggregateProperties;
@property int interfaceOrientation;
@property BOOL showAlbum;
@property BOOL showAlbumSubtitle;
@property BOOL showArtistSubtitle;
@property BOOL showDuration;

- (id)aggregateProperties;
- (void)dealloc;
- (id)init;
- (id)initWithPropertiesFromDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (int)interfaceOrientation;
- (void)setAggregateProperties:(id)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setShowAlbum:(BOOL)arg1;
- (void)setShowAlbumSubtitle:(BOOL)arg1;
- (void)setShowArtistSubtitle:(BOOL)arg1;
- (void)setShowDuration:(BOOL)arg1;
- (void)setShowsValue:(BOOL)arg1 forProperty:(id)arg2;
- (BOOL)showAlbum;
- (BOOL)showAlbumSubtitle;
- (BOOL)showArtistSubtitle;
- (BOOL)showDuration;
- (BOOL)showsValueForProperty:(id)arg1;

@end
