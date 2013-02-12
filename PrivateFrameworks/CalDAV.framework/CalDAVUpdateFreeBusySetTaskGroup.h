/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CoreDAVTaskGroupDelegate>, CoreDAVPropFindTask, NSString, NSURL;

@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate> {
    CoreDAVPropFindTask *_fetchTask;
    NSURL *_inboxURL;
    int _state;
    NSString *_suffixToFilterOut;
    NSURL *_urlToAdd;
}

@property <CoreDAVTaskGroupDelegate> * delegate;
@property(retain) CoreDAVPropFindTask * fetchTask;
@property(retain) NSURL * inboxURL;
@property int state;
@property(retain) NSString * suffixToFilterOut;
@property(retain) NSURL * urlToAdd;

- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_startFetchFreeBusySet;
- (void)_startPropPatchWithURLs:(id)arg1;
- (void)dealloc;
- (id)fetchTask;
- (id)inboxURL;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 urlToAdd:(id)arg3 suffixToFilterOut:(id)arg4 taskManager:(id)arg5;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)setFetchTask:(id)arg1;
- (void)setInboxURL:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSuffixToFilterOut:(id)arg1;
- (void)setUrlToAdd:(id)arg1;
- (void)startTaskGroup;
- (int)state;
- (id)suffixToFilterOut;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)urlToAdd;

@end
