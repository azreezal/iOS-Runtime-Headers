/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonAdditions : NSObject {
}

+ (id)arrayByWrappingIntegersInCFArray:(struct __CFArray { }*)arg1;
+ (struct __CFArray { }*)copyAllProperties;
+ (struct __CFArray { }*)copyDefaultDisplayedProperties;
+ (struct __CFArray { }*)copyNamePropertiesForEditing:(BOOL)arg1 includeRequiredNameProperties:(BOOL)arg2 people:(id)arg3;
+ (struct __CFArray { }*)copyNamePropertiesForEditing:(BOOL)arg1 includeRequiredNameProperties:(BOOL)arg2 person:(void*)arg3;
+ (struct __CFArray { }*)copyNamePropertiesForEditing:(BOOL)arg1 person:(void*)arg2;
+ (struct __CFArray { }*)copyNamePropertiesWithCurrentNameFormat;
+ (struct __CFArray { }*)copyOptionalJobProperties;
+ (struct __CFArray { }*)copyOptionalNameAffixProperties;
+ (struct __CFArray { }*)copyOptionalNameProperties;
+ (struct __CFArray { }*)copyOptionalProperties;
+ (struct __CFArray { }*)copyProperties:(struct __CFArray { }*)arg1 excludingProperties:(struct __CFArray { }*)arg2;
+ (void)initializeAddressBookProperties;
+ (BOOL)isNameProperty:(int)arg1;
+ (struct __CFArray { }*)newCFArrayByUnwrappingIntegersInArray:(id)arg1;
+ (void)person:(void*)arg1 allowsLabels:(BOOL*)arg2 customLabels:(BOOL*)arg3 forProperty:(int)arg4;
+ (BOOL)person:(void*)arg1 hasProperty:(int)arg2;
+ (BOOL)personAllowsCustomLabels:(void*)arg1 forProperty:(int)arg2;
+ (BOOL)personAllowsLabels:(void*)arg1 forProperty:(int)arg2;
+ (BOOL)personIsReadonly:(void*)arg1;
+ (id)primarySourceNameForPerson:(void*)arg1 accountsManager:(id)arg2;
+ (BOOL)updatePersonKindFromName:(void*)arg1 recordIsNew:(BOOL)arg2;

@end
