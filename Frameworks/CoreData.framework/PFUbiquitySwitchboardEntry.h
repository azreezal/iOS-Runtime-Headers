/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSString, NSURL, _PFUbiquityRecordsExporter, _PFUbiquityRecordsImporter;

@interface PFUbiquitySwitchboardEntry : NSObject {
    unsigned int _activeStoreCount;
    _PFUbiquityRecordsExporter *_exporter;
    _PFUbiquityRecordsImporter *_importer;
    NSString *_localPeerID;
    NSMutableDictionary *_registeredCoordinators;
    NSURL *_ubiquityRootURL;
}

@property unsigned int activeStoreCount;
@property(readonly) _PFUbiquityRecordsExporter * exporter;
@property(readonly) _PFUbiquityRecordsImporter * importer;
@property(readonly) NSString * localPeerID;
@property(readonly) NSURL * ubiquityRootURL;

- (unsigned int)activeStoreCount;
- (id)createSetOfActiveStoreNames;
- (id)createSetOfPersistentStoreCoordinatorsRegisteredForStoreName:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)exporter;
- (id)importer;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (id)localPeerID;
- (void)registerPersistentStoreCoordinator:(id)arg1 forPersistentStoreWithName:(id)arg2;
- (void)setActiveStoreCount:(unsigned int)arg1;
- (id)ubiquityRootURL;
- (void)unregisterPersistentStoreCoordinator:(id)arg1;

@end
