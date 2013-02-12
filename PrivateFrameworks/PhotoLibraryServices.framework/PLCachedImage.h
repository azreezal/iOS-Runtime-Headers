/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDictionary, PLLoadRequestKey;

@interface PLCachedImage : UIImage {
    PLLoadRequestKey *_cacheKey;
    int _format;
    NSDictionary *_metadata;
}

@property(copy) PLLoadRequestKey * cacheKey;
@property int format;
@property(retain) NSDictionary * metadata;

- (id)cacheKey;
- (void)dealloc;
- (id)description;
- (int)format;
- (id)metadata;
- (void)setCacheKey:(id)arg1;
- (void)setFormat:(int)arg1;
- (void)setMetadata:(id)arg1;

@end
