/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKReminderEditorDelegate>, <EKStyleProvider>, EKReminder;

@interface EKReminderEditor : EKCalendarItemEditor {
    BOOL _locationsAllowed;
    <EKReminderEditorDelegate> *_reminderEditorDelegate;
    <EKStyleProvider> *_styleProvider;
}

@property(retain) EKReminder * reminder;
@property <EKReminderEditorDelegate> * reminderEditorDelegate;
@property(retain) <EKStyleProvider> * styleProvider;

- (BOOL)_canDetachSingleOccurrence;
- (void)_copyEventForPossibleRevert;
- (id)_editItems;
- (id)_nameForDeleteButton;
- (void)_revertEvent;
- (id)_viewForSheet;
- (void)_wifiStatusDidChange:(id)arg1;
- (BOOL)allowsDeletingFutureOccurrences;
- (void)applicationDidResume;
- (void)customizeActionSheet:(id)arg1;
- (void)dealloc;
- (id)defaultAlertTitle;
- (id)defaultTitleForCalendarItem;
- (void)editItemDidCommit:(id)arg1;
- (void)loadView;
- (float)marginForTableView:(id)arg1;
- (id)notificationNamesForLocaleChange;
- (id)preferredTitle;
- (void)prepareEditItems;
- (id)reminder;
- (id)reminderEditorDelegate;
- (void)setReminder:(id)arg1;
- (void)setReminderEditorDelegate:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setupDeleteButton;
- (id)styleProvider;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)viewDidLoad;
- (void)viewDidUnload;

@end
