/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSDictionary;

@interface IMUserNotification : NSObject {
    id _reserved;
}

@property(readonly) unsigned int displayFlags;
@property(readonly) NSDictionary * displayInformation;
@property(readonly) id identifier;
@property(readonly) unsigned int response;
@property(readonly) unsigned int responseFlags;
@property(readonly) NSDictionary * responseInformation;
@property(readonly) double timeout;
@property(retain) NSDictionary * userInfo;

+ (id)userNotificationWithIdentifier:(id)arg1 timeout:(double)arg2 alertLevel:(unsigned int)arg3 displayFlags:(unsigned int)arg4 displayInformation:(id)arg5;
+ (id)userNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 alternateButton:(id)arg5 otherButton:(id)arg6;

- (id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 displayFlags:(unsigned int)arg3 displayInformation:(id)arg4;
- (void)_setResponseFlags:(unsigned int)arg1 responseInformation:(id)arg2;
- (void)dealloc;
- (unsigned int)displayFlags;
- (id)displayInformation;
- (id)identifier;
- (unsigned int)response;
- (unsigned int)responseFlags;
- (id)responseInformation;
- (void)setUserInfo:(id)arg1;
- (double)timeout;
- (id)userInfo;

@end
