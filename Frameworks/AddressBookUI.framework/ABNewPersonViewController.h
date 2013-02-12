/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABNewPersonViewControllerDelegate>, <ABStyleProvider>, ABGroupWrapper, ABPersonViewControllerHelper;

@interface ABNewPersonViewController : UIViewController {
    id _helper;
    <ABNewPersonViewControllerDelegate> *_newPersonViewDelegate;
    id _parentGroup;
    void *_recordForNewPerson;
}

@property void* addressBook;
@property void* displayedPerson;
@property(readonly) ABPersonViewControllerHelper * helper;
@property <ABNewPersonViewControllerDelegate> * newPersonViewDelegate;
@property void* parentGroup;
@property(retain) ABGroupWrapper * parentGroupWrapper;
@property(readonly) void* recordForNewPerson;
@property BOOL savesNewContactOnSuspend;
@property BOOL showsCancelButton;
@property(retain) <ABStyleProvider> * styleProvider;

- (BOOL)_allowsAutorotation;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (int)abViewControllerType;
- (float)ab_heightToFitForViewInPopoverView;
- (void*)addressBook;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)applicationWillTerminate:(id)arg1;
- (void)attemptSaveAndTellDelegate:(BOOL)arg1;
- (void)cancel:(id)arg1;
- (BOOL)ckCanDismissWhenSuspending;
- (void)dealloc;
- (void*)displayedPerson;
- (id)helper;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (id)newPersonViewDelegate;
- (void*)parentGroup;
- (id)parentGroupWrapper;
- (void*)recordForNewPerson;
- (void)save:(id)arg1;
- (void)saveAndTellDelegate:(BOOL)arg1;
- (void)savePerson:(void*)arg1;
- (BOOL)savesNewContactOnSuspend;
- (void)setAddressBook:(void*)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNewPersonViewDelegate:(id)arg1;
- (void)setParentGroup:(void*)arg1;
- (void)setParentGroupWrapper:(id)arg1;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (void)setShowsCancelButton:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)showsCancelButton;
- (id)styleProvider;
- (void)updateNavigationButtons;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
