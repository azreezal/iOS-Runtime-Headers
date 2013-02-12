/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABAccountsAndGroupDataSource, UITableView;

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate> {
    ABAccountsAndGroupDataSource *_dataSource;
    BOOL _needsReload;
    BOOL _reselectLastSelectedCell;
    BOOL _showsRefreshButton;
    BOOL _tableViewNeedsReloadAfterResume;
}

@property(readonly) ABAccountsAndGroupDataSource * dataSource;
@property BOOL hidesGlobalGroupWrapper;
@property BOOL hidesSearchableSources;
@property(readonly) UITableView * tableView;

- (void)_applyAccessibilityFontChanges;
- (void)_applyStylesToTableView:(id)arg1;
- (void)_showMembersWithModel:(id)arg1 animate:(BOOL)arg2 loadState:(BOOL)arg3;
- (int)abViewControllerType;
- (void)accessibilityLargeTextDidChange;
- (void)applicationDidResume;
- (void)cancel:(id)arg1;
- (id)copyMembersViewControllerWithModel:(id)arg1;
- (id)dataSource;
- (id)dataSource;
- (void)dealloc;
- (BOOL)hidesGlobalGroupWrapper;
- (BOOL)hidesSearchableSources;
- (id)initWithModel:(id)arg1;
- (void)loadView;
- (id)model;
- (void)modelDatabaseChange:(id)arg1;
- (BOOL)preservesSelection;
- (void)refreshEverythingNow;
- (void)reloadData;
- (void)reselectLastSelectedCellIfNeeded;
- (void)setHidesGlobalGroupWrapper:(BOOL)arg1;
- (void)setHidesSearchableSources:(BOOL)arg1;
- (void)setModel:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (BOOL)shouldShowGroups;
- (void)showMembersOfGroup:(void*)arg1 animate:(BOOL)arg2;
- (void)showMembersOfGroupWrapper:(id)arg1 animate:(BOOL)arg2 loadState:(BOOL)arg3;
- (void)showMembersOfGroupWrapper:(id)arg1 animate:(BOOL)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView;
- (void)updateNavigationButtons;
- (void)updateRefreshButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
