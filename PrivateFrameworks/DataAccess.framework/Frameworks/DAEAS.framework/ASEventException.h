/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class ASEvent, NSDate, NSMutableDictionary, NSNumber;

@interface ASEventException : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding> {
    NSDate *_exceptionStartTime;
    NSNumber *_isDeleted;
    ASEvent *_originalEvent;
    NSMutableDictionary *_placeHolder;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;

- (void)_loadAttributesFromCalEvent:(void*)arg1 withKnownExceptionDate:(id)arg2 forAccount:(id)arg3;
- (id)_transformedExceptionStartDateForActiveSync:(id)arg1;
- (id)_transformedExceptionStartDateForCalFramework:(id)arg1;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (void)applyPlaceHolder;
- (id)asParseRules;
- (void)clearPlaceHolder;
- (void)dealloc;
- (BOOL)deleteFromCalendar;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exceptionDate;
- (id)exceptionStartTime;
- (BOOL)hasOccurrenceInTheFuture;
- (id)initWithCalEvent:(void*)arg1 originalEvent:(id)arg2 account:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithExceptionStartTime:(id)arg1;
- (id)isDeleted;
- (void)loadClientIDs;
- (id)originalEvent;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)postProcessApplicationData;
- (void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void*)arg2 intoCalendar:(void*)arg3 shouldMergeProperties:(BOOL)arg4 outMergeDidChooseLocalProperties:(BOOL*)arg5 account:(id)arg6;
- (id)serverIdForCalFrameworkWithParentEvent:(id)arg1;
- (void)setExceptionDate:(id)arg1;
- (void)setExceptionStartTime:(id)arg1;
- (void)setIsDeleted:(id)arg1;
- (void)setObject:(id)arg1 forDCCPT:(int)arg2;
- (void)setOriginalEvent:(id)arg1;
- (void)takeValuesFromParentForAccount:(id)arg1;
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void*)arg1;
- (BOOL)verifyExternalIds;

@end
