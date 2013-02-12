/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
 */

@class OACredential;

@interface OAURLRequestSigner : NSObject {
    OACredential *_credential;
    int _signatureMethod;
}

@property int signatureMethod;

- (id)applyApplicationID:(id)arg1 toRequest:(id)arg2 containsMultiPartData:(BOOL)arg3;
- (void)dealloc;
- (id)initWithCredential:(id)arg1;
- (id)oauthAuthorizationHeaderWithSignature:(id)arg1 nonce:(id)arg2 timestamp:(id)arg3;
- (id)oauthNonce;
- (id)oauthParametersWithNonce:(id)arg1 timeStamp:(id)arg2;
- (void)setSignatureMethod:(int)arg1;
- (int)signatureMethod;
- (id)signatureMethodString;
- (id)signedURLRequestWithRequest:(id)arg1 applicationID:(id)arg2;
- (id)signedURLRequestWithRequest:(id)arg1;
- (Class)signer;
- (id)timestamp;

@end
