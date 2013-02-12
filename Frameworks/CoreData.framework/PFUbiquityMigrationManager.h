/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectModel, PFUbiquityLocation, PFUbiquityStoreMetadata;

@interface PFUbiquityMigrationManager : NSObject {
    NSManagedObjectModel *_destinationModel;
    PFUbiquityLocation *_rootLocation;
    NSManagedObjectModel *_sourceModel;
    PFUbiquityStoreMetadata *_storeMetadata;
}

@property(readonly) NSManagedObjectModel * destinationModel;
@property(readonly) PFUbiquityLocation * rootLocation;
@property(readonly) NSManagedObjectModel * sourceModel;
@property(readonly) PFUbiquityStoreMetadata * storeMetadata;

- (void)dealloc;
- (id)destinationModel;
- (id)initWithDestinationModel:(id)arg1 storeMetadata:(id)arg2 ubiquityRootLocation:(id)arg3;
- (BOOL)migrateUbiquitousContentForStoreName:(id)arg1 peerID:(id)arg2 error:(id*)arg3;
- (id)rootLocation;
- (id)sourceModel;
- (id)storeMetadata;

@end
