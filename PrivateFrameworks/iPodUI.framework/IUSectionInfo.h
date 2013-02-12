/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUSectionInfo : NSObject {
    unsigned int _hideIndexBar : 1;
    unsigned int _hideSections : 1;
    unsigned int _showHeadersInShortLists : 1;
}

@property BOOL hideIndexBar;
@property BOOL hideSections;
@property(readonly) unsigned int numberOfIndexBarTitles;
@property(readonly) unsigned int numberOfSections;
@property BOOL showHeadersInShortLists;

- (BOOL)hideIndexBar;
- (BOOL)hideSections;
- (unsigned int)indexOfSectionAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfSectionForSectionIndexTitleAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfIndexBarTitles;
- (unsigned int)numberOfSections;
- (id)sectionIndexTitles;
- (void)setHideIndexBar:(BOOL)arg1;
- (void)setHideSections:(BOOL)arg1;
- (void)setShowHeadersInShortLists:(BOOL)arg1;
- (BOOL)showHeadersInShortLists;
- (id)titleOfIndexBarSectionAtIndex:(unsigned int)arg1;
- (id)titleOfSectionAtIndex:(unsigned int)arg1;

@end
