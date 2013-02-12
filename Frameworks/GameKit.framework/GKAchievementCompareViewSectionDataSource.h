/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGameRecord, NSArray, UIImage;

@interface GKAchievementCompareViewSectionDataSource : GKAchievementSectionDataSource {
    UIImage *_compositeCheckMark;
    NSArray *_friendAchievements;
    GKGameRecord *_friendRecord;
}

@property(retain) UIImage * compositeCheckMark;
@property(retain) NSArray * friendAchievements;
@property(retain) GKGameRecord * friendRecord;

- (int)columnCountInTableView:(id)arg1;
- (id)compositeCheckMark;
- (void)dealloc;
- (id)friendAchievements;
- (id)friendRecord;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (int)sectionContentRowCountInTableView:(id)arg1;
- (id)sectionHeaderViewInTableView:(id)arg1;
- (int)sectionItemCountInTableView:(id)arg1;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (void)setCompositeCheckMark:(id)arg1;
- (void)setFriendAchievements:(id)arg1;
- (void)setFriendRecord:(id)arg1;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)title;
- (void)updateStatusWithError:(id)arg1;

@end
