/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPrimaryValueDelegate>, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface ABNamePropertyGroup : ABAbstractPropertyGroup {
    <ABPrimaryValueDelegate> *_delegate;
    void *_preferredPerson;
    NSMutableArray *_properties;
    NSMutableSet *_propertiesWithMultipleValuePlaceholders;
    NSMutableDictionary *_valuesByPersonByProperty;
}

@property <ABPrimaryValueDelegate> * delegate;
@property(readonly) void* preferredPerson;

- (int)_addItemForProperty:(int)arg1 duringReload:(BOOL)arg2;
- (void)_clearAllCachedInfo;
- (int)_indexForProperty:(int)arg1;
- (id)_indexPathForIndexPath:(id)arg1;
- (int)_insertItemAtIndex:(int)arg1 forProperty:(int)arg2 duringReload:(BOOL)arg3;
- (BOOL)_isEmptyValue:(id)arg1 forProperty:(int)arg2;
- (id)_labelAtIndex:(int)arg1;
- (id)_newLocalizedPlaceholderForProperty:(int)arg1;
- (int)_propertyAtIndex:(int)arg1;
- (void)_removeMultipleValuePlaceholderForProperty:(int)arg1;
- (void)_removeValueForProperty:(int)arg1;
- (void)_setValue:(id)arg1 forProperty:(int)arg2;
- (BOOL)_showsMultipleValuePlaceholderForProperty:(int)arg1;
- (id)_valueForProperty:(int)arg1 person:(void*)arg2;
- (void)addNameProperty:(int)arg1;
- (BOOL)canSave;
- (id)copyCompositeName;
- (id)copyCompositeNameIgnoringOrganization:(BOOL)arg1;
- (id)copyCompositePhoneticName;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)keyboardSettingsForRow:(unsigned int)arg1;
- (struct __CFArray { }*)nameProperties;
- (unsigned int)namePropertiesCount;
- (void*)newFakePersonFromCurrentProperties;
- (id)placeholderTextForRow:(unsigned int)arg1;
- (void*)preferredPerson;
- (id)primaryValueForProperty:(int)arg1;
- (int)property;
- (int)propertyForRow:(unsigned int)arg1;
- (BOOL)refreshPreferredPerson;
- (void)reloadFromModel;
- (unsigned int)rowForProperty:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setValue:(id)arg1 atRow:(unsigned int)arg2;
- (BOOL)showsMultipleValuePlaceholderAtRow:(unsigned int)arg1;
- (BOOL)showsMultipleValuePlaceholderForProperty:(int)arg1;
- (void)updateRecord;
- (id)valueForProperty:(int)arg1;
- (id)valueForRow:(unsigned int)arg1 whenEditing:(BOOL)arg2;

@end
