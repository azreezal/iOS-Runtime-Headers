/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CalDAVPrincipalEmailDetailsResult, NSSet, NSString, NSURL;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    CalDAVPrincipalEmailDetailsResult *_principalResult;
    NSURL *_principalURL;
}

@property(retain,readonly) NSSet * addresses;
@property(retain,readonly) NSString * displayName;
@property(retain) CalDAVPrincipalEmailDetailsResult * principalResult;
@property(retain) NSURL * principalURL;

- (void)_finishWithError:(id)arg1;
- (void)_processPropFind:(id)arg1;
- (id)addresses;
- (void)dealloc;
- (id)displayName;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;
- (id)principalResult;
- (id)principalURL;
- (void)setPrincipalResult:(id)arg1;
- (void)setPrincipalURL:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end
