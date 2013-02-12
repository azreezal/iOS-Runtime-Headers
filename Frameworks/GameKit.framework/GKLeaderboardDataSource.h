/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame, GKGameDetailHeaderSection, GKLeaderboardControlSection, GKLeaderboardSection, GKPlayer, NSArray, NSDate, NSPredicate, NSString;

@interface GKLeaderboardDataSource : GKSectionArrayDataSource <GKSearchableSectionDataSource> {
    BOOL _allowsFriendSelection;
    NSString *_categoryID;
    GKLeaderboardControlSection *_controlSection;
    NSPredicate *_filterPredicate;
    GKLeaderboardSection *_friendSection;
    GKGame *_game;
    GKGameDetailHeaderSection *_gameDetailHeaderSection;
    GKLeaderboardSection *_globalSection;
    NSArray *_items;
    BOOL _loaded;
    GKPlayer *_player;
    NSArray *_searchableSections;
    BOOL _showRatingControl;
    NSArray *_sortDescriptors;
    int _timeScope;
    NSArray *_visibleItems;
}

@property BOOL allowsFriendSelection;
@property(retain) NSString * categoryID;
@property(retain) GKLeaderboardControlSection * controlSection;
@property(retain) NSDate * expirationDate;
@property(retain) NSPredicate * filterPredicate;
@property(retain) GKLeaderboardSection * friendSection;
@property(retain) GKGame * game;
@property(retain) GKGameDetailHeaderSection * gameDetailHeaderSection;
@property(retain) GKLeaderboardSection * globalSection;
@property(retain) NSArray * items;
@property BOOL loaded;
@property(retain) GKPlayer * player;
@property(retain) NSArray * searchableSections;
@property BOOL showControlSection;
@property BOOL showRatingControl;
@property(retain) NSArray * sortDescriptors;
@property int timeScope;
@property(retain) NSArray * visibleItems;

- (BOOL)allowsFriendSelection;
- (id)categoryID;
- (id)controlSection;
- (void)dealloc;
- (id)filterPredicate;
- (id)friendSection;
- (id)game;
- (id)gameDetailHeaderSection;
- (id)globalSection;
- (id)init;
- (id)items;
- (BOOL)loaded;
- (id)player;
- (void)prepareSections;
- (void)purgeCachedData;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (id)searchableSections;
- (Class)sectionClass;
- (void)setAllowsFriendSelection:(BOOL)arg1;
- (void)setCategoryID:(id)arg1;
- (void)setControlSection:(id)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setFriendSection:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setGameDetailHeaderSection:(id)arg1;
- (void)setGlobalSection:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setLeaderboardDelegate:(id)arg1;
- (void)setLoaded:(BOOL)arg1;
- (void)setLoadingState:(int)arg1;
- (void)setPlayer:(id)arg1;
- (void)setSearchableSections:(id)arg1;
- (void)setShowControlSection:(BOOL)arg1;
- (void)setShowRatingControl:(BOOL)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setTimeScope:(int)arg1;
- (void)setVisibleItems:(id)arg1;
- (BOOL)showControlSection;
- (BOOL)showRatingControl;
- (id)sortDescriptors;
- (void)tableView:(id)arg1 updateStatusForLeaderboard:(id)arg2;
- (void)tableView:(id)arg1 updateStatusViewAfterLoading:(id)arg2 withError:(id)arg3;
- (int)timeScope;
- (id)visibleItems;

@end
