/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class ASSettingsTaskUserInformationGetResponse, NSNumber;

@interface ASSettingsTaskUserInformationResponse : ASItem {
    ASSettingsTaskUserInformationGetResponse *_getResponse;
    NSNumber *_status;
}

@property(retain) ASSettingsTaskUserInformationGetResponse * getResponse;
@property(retain) NSNumber * status;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;

- (id)asParseRules;
- (void)dealloc;
- (id)description;
- (id)getResponse;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)setGetResponse:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
