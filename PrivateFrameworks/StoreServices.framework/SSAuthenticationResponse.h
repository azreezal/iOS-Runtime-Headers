/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, NSHTTPURLResponse, NSNumber, NSString;

@interface SSAuthenticationResponse : NSObject {
    NSDictionary *_responseDictionary;
    int _urlBagType;
    NSHTTPURLResponse *_urlResponse;
}

@property int URLBagType;
@property(readonly) NSHTTPURLResponse * URLResponse;
@property(readonly) int accountKind;
@property(readonly) NSString * accountName;
@property(readonly) NSNumber * accountUniqueIdentifier;
@property(readonly) int availableServiceTypes;
@property(readonly) NSString * creditsString;
@property(readonly) int enabledServiceTypes;
@property(readonly) NSNumber * failureType;
@property(readonly) NSDictionary * responseDictionary;
@property(readonly) int responseType;
@property(readonly) NSString * storeFrontIdentifier;
@property(readonly) NSString * token;
@property(readonly) NSString * userMessage;

- (int)URLBagType;
- (id)URLResponse;
- (int)_responseTypeForFailureType:(int)arg1;
- (int)_responseTypeForStatusValue:(int)arg1;
- (id)_statusValue;
- (int)accountKind;
- (id)accountName;
- (id)accountUniqueIdentifier;
- (int)availableServiceTypes;
- (id)creditsString;
- (void)dealloc;
- (int)enabledServiceTypes;
- (id)failureType;
- (id)initWithURLResponse:(id)arg1 dictionary:(id)arg2;
- (id)newAccount;
- (id)responseDictionary;
- (int)responseType;
- (void)setURLBagType:(int)arg1;
- (id)storeFrontIdentifier;
- (id)token;
- (id)userMessage;

@end
