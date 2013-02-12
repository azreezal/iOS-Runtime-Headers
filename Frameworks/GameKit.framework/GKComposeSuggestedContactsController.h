/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKComposeSuggestedContactsControllerDelegate>, NSArray, UITableView;

@interface GKComposeSuggestedContactsController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    <GKComposeSuggestedContactsControllerDelegate> *_delegate;
    NSArray *_searchResultItems;
}

@property <GKComposeSuggestedContactsControllerDelegate> * delegate;
@property(retain) NSArray * searchResultItems;
@property(readonly) UITableView * searchResultsTable;

- (void)dealloc;
- (id)delegate;
- (void)loadView;
- (id)searchResultItems;
- (id)searchResultsTable;
- (void)setDelegate:(id)arg1;
- (void)setSearchResultItems:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end
