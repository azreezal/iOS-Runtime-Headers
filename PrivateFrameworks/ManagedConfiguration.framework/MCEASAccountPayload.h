/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData, NSNumber, NSString;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase {
    NSString *_accountDescription;
    NSString *_accountPersistentUUID;
    NSData *_certificatePersistentID;
    NSString *_certificateUUID;
    NSString *_emailAddress;
    NSData *_embeddedCertificate;
    NSString *_embeddedCertificateName;
    NSString *_embeddedCertificatePassword;
    NSString *_hostname;
    NSNumber *_mailNumberOfPastDaysToSync;
    NSString *_password;
    BOOL _useSSL;
    NSString *_username;
}

@property(readonly) NSString * accountDescription;
@property(copy) NSString * accountPersistentUUID;
@property(retain) NSData * certificatePersistentID;
@property(readonly) NSString * certificateUUID;
@property(copy) NSString * emailAddress;
@property(readonly) NSData * embeddedCertificate;
@property(readonly) NSString * embeddedCertificateName;
@property(copy) NSString * embeddedCertificatePassword;
@property(readonly) BOOL hasCertificate;
@property(readonly) NSString * hostname;
@property(readonly) NSNumber * mailNumberOfPastDaysToSync;
@property(copy) NSString * password;
@property(readonly) BOOL useSSL;
@property(copy) NSString * username;

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;

- (id)accountDescription;
- (id)accountPersistentUUID;
- (id)certificatePersistentID;
- (id)certificateUUID;
- (void)dealloc;
- (id)description;
- (id)emailAddress;
- (id)embeddedCertificate;
- (id)embeddedCertificateName;
- (id)embeddedCertificatePassword;
- (BOOL)hasCertificate;
- (id)hostname;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)mailNumberOfPastDaysToSync;
- (id)password;
- (void)setAccountPersistentUUID:(id)arg1;
- (void)setCertificatePersistentID:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setEmbeddedCertificatePassword:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;
- (BOOL)useSSL;
- (id)username;

@end
