/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSNumber, NSString, SSURLRequestProperties;

@interface SUStorePageProtocol : NSObject <NSCopying> {
    NSArray *_allowedOrientations;
    NSString *_copyright;
    NSString *_expectedClientIdentifier;
    NSNumber *_focusedItemIdentifier;
    NSArray *_navigationButtons;
    NSArray *_navigationHistoryItems;
    NSArray *_navigationMenus;
    SSURLRequestProperties *_overlayBackgroundURLRequestProperties;
    NSString *_rootSectionIdentifier;
    BOOL _shouldDisplayInOverlay;
    BOOL _shouldExcludeFromNavigationHistory;
    BOOL _shouldReplaceRootViewController;
}

@property(retain) NSArray * allowedOrientations;
@property(retain) NSString * copyright;
@property(retain) NSString * expectedClientIdentifier;
@property(retain) NSNumber * focusedItemIdentifier;
@property(copy) NSArray * navigationButtons;
@property(retain) NSArray * navigationHistoryItems;
@property(copy) NSArray * navigationMenus;
@property(retain) SSURLRequestProperties * overlayBackgroundURLRequestProperties;
@property(retain) NSString * rootSectionIdentifier;
@property BOOL shouldDisplayInOverlay;
@property BOOL shouldExcludeFromNavigationHistory;
@property BOOL shouldReplaceRootViewController;

- (id)_initCommon;
- (id)_newNavigationButtonsFromArray:(id)arg1;
- (id)_newNavigationHistoryItemsFromArray:(id)arg1;
- (id)_newNavigationMenusFromArray:(id)arg1;
- (id)allowedOrientations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyright;
- (void)dealloc;
- (id)expectedClientIdentifier;
- (id)focusedItemIdentifier;
- (id)init;
- (id)navigationButtonForLocation:(id)arg1;
- (id)navigationButtons;
- (id)navigationHistoryItems;
- (id)navigationMenuForLocation:(int)arg1;
- (id)navigationMenus;
- (id)overlayBackgroundURLRequest;
- (id)overlayBackgroundURLRequestProperties;
- (id)rootSectionIdentifier;
- (void)setAllowedOrientations:(id)arg1;
- (void)setCopyright:(id)arg1;
- (void)setExpectedClientIdentifier:(id)arg1;
- (void)setFocusedItemIdentifier:(id)arg1;
- (void)setNavigationButtons:(id)arg1;
- (void)setNavigationHistoryItems:(id)arg1;
- (void)setNavigationMenus:(id)arg1;
- (void)setOverlayBackgroundURLRequest:(id)arg1;
- (void)setOverlayBackgroundURLRequestProperties:(id)arg1;
- (void)setRootSectionIdentifier:(id)arg1;
- (void)setShouldDisplayInOverlay:(BOOL)arg1;
- (void)setShouldExcludeFromNavigationHistory:(BOOL)arg1;
- (void)setShouldReplaceRootViewController:(BOOL)arg1;
- (void)setValuesFromStorePageDictionary:(id)arg1;
- (BOOL)shouldDisplayInOverlay;
- (BOOL)shouldExcludeFromNavigationHistory;
- (BOOL)shouldReplaceRootViewController;

@end
