/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSArray, NSDictionary;

@interface FTCanonicalizeMessage : FTMessage <NSCopying> {
    NSArray *_URIs;
    NSDictionary *_regionContext;
    NSArray *_responseNodes;
}

@property(copy) NSArray * URIs;
@property(copy) NSDictionary * regionContext;
@property(copy) NSArray * responseNodes;

- (id)URIs;
- (id)bagKey;
- (int)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)init;
- (id)messageBody;
- (id)regionContext;
- (id)requiredKeys;
- (int)responseCommand;
- (id)responseNodes;
- (void)setRegionContext:(id)arg1;
- (void)setResponseNodes:(id)arg1;
- (void)setURIs:(id)arg1;
- (BOOL)wantsBagKey;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPHeaders;

@end
