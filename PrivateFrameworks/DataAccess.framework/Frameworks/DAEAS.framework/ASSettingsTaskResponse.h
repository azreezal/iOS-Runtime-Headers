/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class ASSettingsTaskUserInformationResponse, NSNumber;

@interface ASSettingsTaskResponse : ASItem {
    NSNumber *_status;
    ASSettingsTaskUserInformationResponse *_userInformation;
}

@property(retain) NSNumber * status;
@property(retain) ASSettingsTaskUserInformationResponse * userInformation;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;

- (id)asParseRules;
- (void)dealloc;
- (id)description;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)setStatus:(id)arg1;
- (void)setUserInformation:(id)arg1;
- (id)status;
- (id)userInformation;

@end
