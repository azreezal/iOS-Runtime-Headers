/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVXMLData, NSDictionary, NSMutableDictionary, NSString;

@interface CoreDAVMultiPutTask : CoreDAVTask {
    NSString *_appSpecificDataProp;
    NSString *_appSpecificNamespace;
    NSString *_checkCTag;
    NSMutableDictionary *_hrefToETag;
    NSMutableDictionary *_hrefToErrorItems;
    NSString *_nextCTag;
    CoreDAVXMLData *_pushedData;
    NSMutableDictionary *_uuidToErrorItems;
    NSMutableDictionary *_uuidToHREF;
    BOOL _validCTag;
}

@property(readonly) NSDictionary * hrefToETag;
@property(readonly) NSDictionary * hrefToErrorItems;
@property(readonly) NSString * nextCTag;
@property(readonly) NSDictionary * uuidToErrorItems;
@property(readonly) NSDictionary * uuidToHREF;

- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)hrefToETag;
- (id)hrefToErrorItems;
- (id)httpMethod;
- (id)initWithURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4;
- (id)nextCTag;
- (id)requestBody;
- (id)uuidToErrorItems;
- (id)uuidToHREF;

@end
