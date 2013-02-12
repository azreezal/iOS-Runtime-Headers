/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonEditDelegate>, <ABPersonViewControllerDelegate>, <ABStyleProvider>, NSArray, NSString, UIFont, UIImage, UIView;

@interface ABPersonViewController : UIViewController {
    id _helper;
    BOOL _internal2;
    id _internal;
    <ABPersonViewControllerDelegate> *_personViewDelegate;
}

@property void* addressBook;
@property BOOL allowsActions;
@property BOOL allowsAddToFavorites;
@property BOOL allowsCancel;
@property BOOL allowsConferencing;
@property BOOL allowsDeletion;
@property BOOL allowsEditing;
@property BOOL allowsSettingAsPreferredCardForName;
@property BOOL allowsSharing;
@property BOOL allowsSounds;
@property BOOL allowsVibrations;
@property BOOL appearsInLinkingPeoplePicker;
@property(copy) NSString * attribution;
@property(retain) UIView * customFooterView;
@property(retain) UIView * customHeaderView;
@property(retain) UIView * customMessageView;
@property void* displayedPerson;
@property(copy) NSArray * displayedProperties;
@property <ABPersonEditDelegate> * editDelegate;
@property(copy) NSString * message;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIFont * messageFont;
@property BOOL observesExternalChanges;
@property(retain) UIView * personHeaderView;
@property <ABPersonViewControllerDelegate> * personViewDelegate;
@property(retain) UIImage * shareLocationSnapshotImage;
@property(copy) NSString * shareLocationURL;
@property(copy) NSString * shareMessageBody;
@property BOOL shareMessageBodyIsHTML;
@property(copy) NSString * shareMessageSubject;
@property BOOL shouldAlignPersonHeaderViewToImage;
@property BOOL shouldShowLinkedPeople;
@property BOOL shouldShowLinkingUIOnCard;
@property(retain) <ABStyleProvider> * styleProvider;
@property(copy) id willTweetLocationCallback;

- (BOOL)_allowsAutorotation;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)_handleLocalChange:(struct __CFDictionary { }*)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)_removeContextProviderOnMainThread;
- (BOOL)_updateAllDataForExternalChange;
- (BOOL)_updatePeopleDataForExternalChange;
- (void)_updateTableDataForExternalChange;
- (int)abViewControllerType;
- (float)ab_heightToFitForViewInPopoverView;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void*)addressBook;
- (void)addressBookChangedLocally:(struct __CFDictionary { }*)arg1;
- (BOOL)allowContextProvider:(id)arg1;
- (BOOL)allowsActions;
- (BOOL)allowsAddToFavorites;
- (BOOL)allowsCancel;
- (BOOL)allowsConferencing;
- (BOOL)allowsDeletion;
- (BOOL)allowsEditing;
- (BOOL)allowsSettingAsPreferredCardForName;
- (BOOL)allowsSharing;
- (BOOL)allowsSounds;
- (BOOL)allowsVibrations;
- (BOOL)appearsInLinkingPeoplePicker;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)applicationWillTerminate:(id)arg1;
- (id)attribution;
- (BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)cancelEditing:(BOOL)arg1;
- (id)contextManager;
- (id)customFooterView;
- (id)customHeaderView;
- (id)customMessageView;
- (void)dealloc;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void*)displayedPerson;
- (id)displayedProperties;
- (void)editAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)editCancel:(id)arg1;
- (id)editDelegate;
- (void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(int)arg2;
- (id)getCurrentContext;
- (BOOL)handleExternalChange;
- (void)helper:(id)arg1 didToggleEditingWhileInViewMode:(BOOL)arg2;
- (id)helper;
- (void)helperDidReloadAfterChangingDisplayedPeople:(id)arg1;
- (id)init;
- (id)initWithAddressBook:(void*)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 style:(int)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (BOOL)isDelayingChangeNotifications;
- (BOOL)isReadonly;
- (void)loadView;
- (BOOL)makeFirstFieldBecomeFirstResponder;
- (BOOL)manuallyLinkPerson:(void*)arg1;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (id)newActionButton;
- (BOOL)observesExternalChanges;
- (void)peoplePickerLinkButtonTapped;
- (id)personHeaderView;
- (id)personViewDelegate;
- (void)pickerCancel:(id)arg1;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (void)saveChanges;
- (void)setActionShouldPickHighlightedItem:(BOOL)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsAddToFavorites:(BOOL)arg1;
- (void)setAllowsCancel:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsDeletion:(BOOL)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setAllowsSettingAsPreferredCardForName:(BOOL)arg1;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAllowsSounds:(BOOL)arg1;
- (void)setAllowsVibrations:(BOOL)arg1;
- (void)setAppearsInLinkingPeoplePicker:(BOOL)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setAttribution:(id)arg1;
- (void)setCustomAppearanceProvider:(id)arg1;
- (void)setCustomFooterView:(id)arg1;
- (void)setCustomHeaderView:(id)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setEditDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 saveChanges:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setObservesExternalChanges:(BOOL)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPersonViewDelegate:(id)arg1;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (void)setShareLocationURL:(id)arg1;
- (void)setShareMessageBody:(id)arg1;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1;
- (void)setShouldShowLinkedPeople:(BOOL)arg1;
- (void)setShouldShowLinkingUIOnCard:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setWillTweetLocationCallback:(id)arg1;
- (void)shareContactByEmail:(id)arg1;
- (id)shareLocationSnapshotImage;
- (id)shareLocationURL;
- (id)shareMessageBody;
- (BOOL)shareMessageBodyIsHTML;
- (id)shareMessageSubject;
- (BOOL)shouldAlignPersonHeaderViewToImage;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldShowLinkedPeople;
- (BOOL)shouldShowLinkingUIOnCard;
- (void)startDelayingChangeNotifications;
- (void)stopDelayingChangeNotificationsAndDeliverNow:(BOOL)arg1;
- (id)styleProvider;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)updateNavigationButtons;
- (void)updateNavigationButtonsAnimated:(BOOL)arg1;
- (void)updateRecord;
- (void)updateTitle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)willTweetLocationCallback;

@end
