/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSNumber, NSString, NSURL;

@interface SPSearchResult : NSObject <SPSearchResult, SPSearchResultCursor> {
    NSURL *_URL;
    NSString *_auxiliarySubtitle;
    NSString *_auxiliaryTitle;
    NSNumber *_badge;
    int _domain;
    unsigned long long _identifier;
    NSString *_resultDisplayIdentifier;
    int _resultDomain;
    NSString *_subtitle;
    NSString *_summary;
    NSString *_title;
}

@property(retain) NSURL * URL;
@property(retain) NSString * auxiliarySubtitle;
@property(retain) NSString * auxiliaryTitle;
@property(copy) NSNumber * badge;
@property int domain;
@property unsigned long long identifier;
@property(retain) NSString * resultDisplayIdentifier;
@property int resultDomain;
@property(retain) NSString * subtitle;
@property(retain) NSString * summary;
@property(retain) NSString * title;

- (id)URL;
- (const char *)URLUTF8String;
- (id)auxiliarySubtitle;
- (const char *)auxiliarySubtitleUTF8String;
- (id)auxiliaryTitle;
- (const char *)auxiliaryTitleUTF8String;
- (id)badge;
- (void)dealloc;
- (int)domain;
- (BOOL)getBadgeValue:(float*)arg1;
- (unsigned int)hash;
- (unsigned long long)identifier;
- (BOOL)isEqual:(id)arg1;
- (id)resultDisplayIdentifier;
- (const char *)resultDisplayIdentifierUTF8String;
- (int)resultDomain;
- (void)setAuxiliarySubtitle:(id)arg1;
- (void)setAuxiliaryTitle:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setDomain:(int)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setResultDisplayIdentifier:(id)arg1;
- (void)setResultDomain:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)subtitle;
- (const char *)subtitleUTF8String;
- (id)summary;
- (const char *)summaryUTF8String;
- (id)title;
- (const char *)titleUTF8String;

@end
