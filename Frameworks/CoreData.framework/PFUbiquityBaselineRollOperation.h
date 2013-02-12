/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectModel, NSString, PFUbiquityLocation;

@interface PFUbiquityBaselineRollOperation : NSOperation {
    NSString *_localPeerID;
    NSManagedObjectModel *_model;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
}

@property(readonly) NSString * localPeerID;
@property(readonly) NSManagedObjectModel * model;
@property(readonly) NSString * storeName;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;

- (void)dealloc;
- (id)initWithStore:(id)arg1 andLocalPeerID:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)localPeerID;
- (void)main;
- (id)model;
- (id)storeName;
- (id)ubiquityRootLocation;

@end
