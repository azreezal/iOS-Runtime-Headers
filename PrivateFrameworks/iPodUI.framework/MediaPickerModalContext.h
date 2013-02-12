/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class <IUModalContextDelegate><MediaPickerModalContextDelegate>, IUiPodTabBarController, NSMutableArray, NSMutableSet, NSString;

@interface MediaPickerModalContext : IUModalContext {
    unsigned int _allowsPickingMultipleItems : 1;
    unsigned int _wantsNavigationButtons : 1;
    int _mediaTypes;
    NSMutableSet *_pickedDataSourceActionRowSet;
    NSMutableSet *_pickedPersistentIDSet;
    NSMutableArray *_pickedTracks;
    NSString *_prompt;
    IUiPodTabBarController *_tabBarController;
}

@property BOOL allowsPickingMultipleItems;
@property <IUModalContextDelegate><MediaPickerModalContextDelegate> * delegate;
@property(copy) NSString * prompt;
@property BOOL wantsNavigationButtons;

- (void)_addTrackAtIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (void)_addTracks:(id)arg1 ignoringPickedEntities:(BOOL)arg2;
- (void)_addTracksForActionRowAtIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (id)_availableIdentifiersForMediaTypes:(int)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_doneAction:(id)arg1;
- (BOOL)allowsPickingMultipleItems;
- (BOOL)canHandleSelectionForIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (void)configureCell:(id)arg1 forIndex:(unsigned int)arg2 dataSource:(id)arg3;
- (void)configureNavigationItem:(id)arg1;
- (id)copyQueryForQuery:(id)arg1;
- (void)dealloc;
- (void)dismissWithSuccess:(BOOL)arg1;
- (void)handleSelectionForIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (BOOL)hideIndexBar;
- (id)initWithMediaTypes:(int)arg1;
- (void)orderOut;
- (id)prompt;
- (void)setAllowsPickingMultipleItems:(BOOL)arg1;
- (void)setPrompt:(id)arg1;
- (void)setWantsNavigationButtons:(BOOL)arg1;
- (id)viewController;
- (BOOL)wantsNavigationButtons;

@end
