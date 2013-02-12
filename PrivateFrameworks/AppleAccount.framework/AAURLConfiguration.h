/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSDictionary, NSString;

@interface AAURLConfiguration : NSObject {
    NSDictionary *_urlDictionary;
}

@property(readonly) NSString * accountCreationUIURL;
@property(readonly) NSString * accountCreationURL;
@property(readonly) NSString * addEmailURL;
@property(readonly) NSString * authenticateURL;
@property(readonly) NSString * completeValidateEmailURL;
@property(readonly) NSString * fetchAccountSettingsURL;
@property(readonly) NSString * initiateValidateEmailURL;
@property(readonly) NSString * mobileMeOfferAlertURL;
@property(readonly) NSString * registerURL;
@property(readonly) NSString * signInURL;
@property(readonly) NSString * signingSessionCertURL;
@property(readonly) NSString * signingSessionURL;
@property(readonly) NSString * updateAccountUIURL;
@property(readonly) NSString * updateAccountURL;
@property(readonly) NSString * validateURL;

+ (void)reset;
+ (id)urlConfiguration;

- (id)accountCreationUIURL;
- (id)accountCreationURL;
- (id)addEmailURL;
- (id)authenticateURL;
- (id)completeValidateEmailURL;
- (void)dealloc;
- (id)fetchAccountSettingsURL;
- (id)initWithDictionary:(id)arg1;
- (id)initiateValidateEmailURL;
- (id)mobileMeOfferAlertURL;
- (id)registerURL;
- (id)signInURL;
- (id)signingSessionCertURL;
- (id)signingSessionURL;
- (id)updateAccountUIURL;
- (id)updateAccountURL;
- (id)validateURL;

@end
