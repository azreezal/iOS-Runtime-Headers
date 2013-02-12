/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SSAuthenticationContext : NSObject <SSCoding, NSCopying, NSMutableCopying> {
    NSString *_accountName;
    BOOL _accountNameEditable;
    int _accountScope;
    BOOL _canCreateNewAccount;
    NSString *_clientIdentifierHeader;
    BOOL _demoAccount;
    NSDictionary *_httpHeaders;
    BOOL _ignoresTokenExpiration;
    NSString *_preferredITunesStoreClient;
    int _promptStyle;
    NSDictionary *_requestParameters;
    NSNumber *_requiredUniqueIdentifier;
    BOOL _shouldFollowAccountButtons;
    BOOL _shouldIgnoreProtocol;
    NSDictionary *_signupRequestParameters;
    int _tokenType;
    NSArray *_userAgentComponents;
}

@property(readonly) NSDictionary * HTTPHeaders;
@property(readonly) NSString * accountName;
@property(getter=isAccountNameEditable,readonly) BOOL accountNameEditable;
@property(readonly) int accountScope;
@property(readonly) BOOL canCreateNewAccount;
@property(readonly) NSString * clientIdentifierHeader;
@property(getter=isDemoAccount,readonly) BOOL demoAccount;
@property(readonly) NSString * preferredITunesStoreClient;
@property(readonly) int promptStyle;
@property(readonly) NSDictionary * requestParameters;
@property(readonly) NSNumber * requiredUniqueIdentifier;
@property(readonly) BOOL shouldFollowAccountButtons;
@property(readonly) BOOL shouldIgnoreProtocol;
@property(readonly) NSDictionary * signupRequestParameters;
@property(readonly) int tokenType;
@property(readonly) NSArray * userAgentComponents;

+ (id)contextForSignIn;

- (id)HTTPHeaders;
- (void)_copyIvarsToCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)_initSSAuthenticationContext;
- (id)accountName;
- (int)accountScope;
- (BOOL)canCreateNewAccount;
- (id)clientIdentifierHeader;
- (id)copyPropertyListEncoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithXPCEncoding:(void*)arg1;
- (BOOL)isAccountNameEditable;
- (BOOL)isDemoAccount;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)preferredITunesStoreClient;
- (int)promptStyle;
- (id)requestParameters;
- (id)requiredUniqueIdentifier;
- (BOOL)shouldFollowAccountButtons;
- (BOOL)shouldIgnoreProtocol;
- (id)signupRequestParameters;
- (int)tokenType;
- (id)userAgentComponents;

@end
