/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSSetContainersRequest : HSRequest {
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 containerID:(unsigned int)arg2 itemIDs:(id)arg3;

- (id)_bodyDataForContainerID:(unsigned int)arg1 itemIDs:(id)arg2;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1 containerID:(unsigned int)arg2 itemIDs:(id)arg3;

@end
