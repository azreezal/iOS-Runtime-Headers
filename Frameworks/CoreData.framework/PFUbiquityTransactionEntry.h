/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDate, NSNumber, NSString, NSURL, PFUbiquityPeer, PFUbiquityStoreMetadata;

@interface PFUbiquityTransactionEntry : NSManagedObject {
}

@property(retain) PFUbiquityPeer * actingPeer;
@property(retain) NSString * globalIDStr;
@property(retain) NSString * knowledgeVectorString;
@property(retain) NSString * localIDStr;
@property(retain) PFUbiquityStoreMetadata * storeMetadata;
@property(retain) NSDate * transactionDate;
@property(retain) NSString * transactionLogFilename;
@property(readonly) NSURL * transactionLogURL;
@property(retain) NSNumber * transactionNumber;
@property int transactionType;
@property(retain) NSNumber * transactionTypeNum;

+ (BOOL)canMergeKnowledgeVector:(id)arg1 withKnowledgeVector:(id)arg2;
+ (id)createKnowledgeVectorByAddingKnowledgeVector:(id)arg1 toKnowledgeVector:(id)arg2;
+ (id)createKnowledgeVectorStringFromPeerDictionary:(id)arg1;
+ (id)createPeerCodeDictionaryFromVector:(id)arg1;
+ (id)createSumForKnowlegeVectorString:(id)arg1;
+ (id)transactionEntriesAfterPeerState:(id)arg1 forStoreName:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)transactionEntriesForGlobalIDStrings:(id)arg1 beforePeerState:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)transactionEntriesForPeerID:(id)arg1 beforeTransacationNumber:(id)arg2 forStoreNamed:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)transactionEntriesForPeerID:(id)arg1 withTransactionNumber:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)transactionEntriesMatchingGlobalObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)transactionEntriesMatchingLocalObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)transactionEntryForGlobalIDString:(id)arg1 withActingPeerID:(id)arg2 atTransactionNumber:(id)arg3 inManagedObjectContext:(id)arg4;

- (id)initAndInsertIntoManagedObjectContext:(id)arg1;
- (void)setTransactionType:(int)arg1;
- (id)transactionLogURL;
- (int)transactionType;

@end
