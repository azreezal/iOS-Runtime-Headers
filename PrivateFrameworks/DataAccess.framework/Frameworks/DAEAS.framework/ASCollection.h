/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class ASFolderItemsSyncResponse, NSArray, NSNumber, NSString;

@interface ASCollection : ASItem {
    NSArray *_changedItems;
    BOOL _checkedShouldSniffInvites;
    NSString *_collectionId;
    int _dataclass;
    NSNumber *_moreAvailable;
    ASFolderItemsSyncResponse *_parentResponse;
    NSArray *_responseItems;
    int _sniffableType;
    NSNumber *_status;
    NSString *_syncKey;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;

- (id)asParseRules;
- (id)changedItems;
- (id)collectionId;
- (int)dataclass;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)moreAvailable;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)responseItems;
- (void)setChangedItems:(id)arg1;
- (void)setCollectionId:(id)arg1;
- (void)setDataclassString:(id)arg1;
- (void)setMoreAvailable:(id)arg1;
- (void)setParentResponse:(id)arg1;
- (void)setResponseItems:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setSyncKey:(id)arg1;
- (int)sniffableTypeForAccount:(id)arg1;
- (id)status;
- (id)syncKey;

@end
