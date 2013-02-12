/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVTaskDelegate>, NSData;

@interface CoreDAVPostTask : CoreDAVPostOrPutTask {
}

@property <CoreDAVTaskDelegate> * delegate;
@property(readonly) NSData * responseBodyPayload;

- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;
- (id)responseBodyPayload;

@end
