/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKEmptyTableSection : NSObject <GKTableSection> {
}

@property(getter=isLoading) BOOL loading;

+ (id)sharedEmptySection;

- (float)sectionFooterHeightInTableView:(id)arg1;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (int)sectionRowCountInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;

@end
