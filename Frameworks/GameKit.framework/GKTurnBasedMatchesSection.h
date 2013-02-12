/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableArray, NSMutableDictionary, NSString;

@interface GKTurnBasedMatchesSection : NSObject <GKTableSection> {
    NSString *_deleteConfirmTitle;
    NSMutableArray *_matches;
    NSMutableDictionary *_players;
    int _sectionStyle;
    NSString *_sectionTitle;
}

@property(retain) NSString * deleteConfirmTitle;
@property(getter=isLoading) BOOL loading;
@property(retain) NSMutableArray * matches;
@property(retain) NSMutableDictionary * players;
@property int sectionStyle;
@property(retain) NSString * sectionTitle;

- (void)dealloc;
- (id)deleteConfirmTitle;
- (id)description;
- (id)init;
- (id)matches;
- (id)players;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (id)sectionHeaderTitleInTableView:(id)arg1;
- (int)sectionRowCountInTableView:(id)arg1;
- (int)sectionStyle;
- (id)sectionTitle;
- (void)setDeleteConfirmTitle:(id)arg1;
- (void)setMatches:(id)arg1;
- (void)setPlayers:(id)arg1;
- (void)setSectionStyle:(int)arg1;
- (void)setSectionTitle:(id)arg1;
- (id)swipeDeleteConfirmTitleInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSwipeToDeleteRow:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;

@end
