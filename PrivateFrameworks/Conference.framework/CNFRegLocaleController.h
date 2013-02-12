/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class NSArray, NSString, PSSpecifier;

@interface CNFRegLocaleController : CNFRegFirstRunController <CNFRegRegionChooserDelegate> {
    PSSpecifier *_countryFieldSpecifier;
    NSString *_currentPhoneValue;
    NSString *_currentRegionID;
    BOOL _isError;
    BOOL _isLoading;
    PSSpecifier *_phoneNumberFieldSpecifier;
    PSSpecifier *_phoneNumberGroupSpecifier;
    NSArray *_phoneNumberSpecifiers;
    NSArray *_regionData;
    id _regionListChangeObserver;
}

@property(copy) NSString * currentPhoneValue;
@property(copy) NSString * currentRegionID;
@property(retain) NSArray * regionData;

- (void)_buildCountryFieldSpecifierCache:(id)arg1;
- (void)_buildPhoneNumberSpecifierCache:(id)arg1;
- (void)_buildSpecifierCache:(id)arg1;
- (id)_currentRegion;
- (void)_failValidationWithError:(id)arg1;
- (void)_finishValidation;
- (void)_handleRegionListLoad;
- (void)_handleTimeout;
- (void)_hideCountryPickerAnimated:(BOOL)arg1;
- (void)_loadInitialValues;
- (void)_loadRegionsIfNecessary;
- (id)_phoneTextField;
- (void)_refreshCountryFieldAnimated:(BOOL)arg1;
- (void)_refreshPhoneFieldAnimated:(BOOL)arg1;
- (void)_rightButtonTapped;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setupEventHandlers;
- (void)_showCountryPickerAnimated:(BOOL)arg1;
- (void)_showPhoneField:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_startListeningForRegionListChanges;
- (void)_startTimeout;
- (void)_stopListeningForRegionListChanges;
- (id)_unformattedPhoneNumber:(id)arg1;
- (void)_updateControllerState;
- (void)_updateUI;
- (id)bundle;
- (id)controllerForRowAtIndexPath:(id)arg1;
- (id)countryList;
- (id)currentCountryValueForSpecifier:(id)arg1;
- (id)currentPhoneCompatibleCountryCode;
- (id)currentPhoneNumberForSpecifier:(id)arg1;
- (id)currentPhoneValue;
- (id)currentRegionID;
- (void)dealloc;
- (void)hideCountryPicker;
- (id)initWithRegController:(id)arg1;
- (id)logName;
- (void)regionChooser:(id)arg1 selectedRegionID:(id)arg2;
- (id)regionData;
- (void)setCurrentPhoneNumber:(id)arg1 forSpecifier:(id)arg2;
- (void)setCurrentPhoneValue:(id)arg1;
- (void)setCurrentRegionID:(id)arg1;
- (void)setRegionData:(id)arg1;
- (void)showCountryPicker;
- (id)specifierList;
- (id)validationString;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
