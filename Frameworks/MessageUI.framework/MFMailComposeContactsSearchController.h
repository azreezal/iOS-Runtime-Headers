/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMailComposeContactsSearchControllerDelegate>, MFContactsSearchManager, MFContactsSearchResultsModel, NSNumber;

@interface MFMailComposeContactsSearchController : NSObject <MFContactsSearchConsumer> {
    <MFMailComposeContactsSearchControllerDelegate> *_delegate;
    BOOL _foundAnySearchResults;
    MFContactsSearchManager *_manager;
    MFContactsSearchResultsModel *_model;
    NSNumber *_taskID;
    unsigned int _waitingOnSearchResultsCount;
}

@property <MFMailComposeContactsSearchControllerDelegate> * delegate;
@property(retain) NSNumber * taskID;

- (void)_cancelSearchAndNotify:(BOOL)arg1;
- (void)_finishSearch;
- (void)beganNetworkActivity;
- (void)cancelSearch;
- (void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)endedNetworkActivity;
- (void)finishedSearchingForType:(int)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (id)init;
- (void)searchWithString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTaskID:(id)arg1;
- (id)taskID;

@end
