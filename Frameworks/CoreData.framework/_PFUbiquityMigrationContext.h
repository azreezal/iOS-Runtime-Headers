/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityStoreSaveSnapshot, PFUbiquityTransactionLog;

@interface _PFUbiquityMigrationContext : NSObject {
    PFUbiquityStoreSaveSnapshot *_destinationStoreSaveSnapshot;
    PFUbiquityStoreSaveSnapshot *_sourceStoreSaveSnapshot;
    PFUbiquityTransactionLog *_transactionLog;
}

@property(retain) PFUbiquityStoreSaveSnapshot * destinationStoreSaveSnapshot;
@property(retain) PFUbiquityStoreSaveSnapshot * sourceStoreSaveSnapshot;
@property(retain) PFUbiquityTransactionLog * transactionLog;

- (void)dealloc;
- (id)destinationStoreSaveSnapshot;
- (void)setDestinationStoreSaveSnapshot:(id)arg1;
- (void)setSourceStoreSaveSnapshot:(id)arg1;
- (void)setTransactionLog:(id)arg1;
- (id)sourceGlobalObjectIDFromCompressedID:(id)arg1;
- (id)sourceStoreSaveSnapshot;
- (id)transactionLog;

@end
