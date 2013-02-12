/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class LSApplicationProxy, NSArray, NSDictionary, NSString, NSURL;

@interface LSResourceProxy : NSObject {
    NSString *_boundApplicationIdentifier;
    NSURL *_boundContainerURL;
    NSString *_boundIconCacheKey;
    NSArray *_boundIconFileNames;
    BOOL _boundIconIsBadge;
    BOOL _boundIconIsPrerendered;
    NSDictionary *_boundIconsDictionary;
    NSURL *_boundResourcesDirURL;
    NSString *_localizedName;
    LSApplicationProxy *_typeOwner;
}

@property(readonly) BOOL boundIconIsBadge;
@property(readonly) NSDictionary * iconsDictionary;
@property(readonly) NSString * localizedName;

+ (struct CGSize { float x1; float x2; })_applicationIconCanvasSize;
+ (int)_compareApplicationIconCanvasSize:(struct CGSize { float x1; float x2; })arg1 withSize:(struct CGSize { float x1; float x2; })arg2;

- (struct CGSize { float x1; float x2; })_defaultStyleSize:(id)arg1;
- (struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_iconDefinitionForSize:(struct CGSize { float x1; float x2; })arg1 style:(id)arg2;
- (id)_iconForStyle:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)_iconForStyle:(id)arg1;
- (struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;
- (id)_initWithLocalizedName:(id)arg1 boundApplicationIdentifier:(id)arg2 boundContainerURL:(id)arg3 boundResourcesDirectoryURL:(id)arg4 boundIconsDictionary:(id)arg5 boundIconCacheKey:(id)arg6 boundIconFileNames:(id)arg7 typeOwner:(id)arg8 boundIconIsPrerendered:(BOOL)arg9 boundIconIsBadge:(BOOL)arg10;
- (id)_initWithLocalizedName:(id)arg1;
- (struct CGSize { float x1; float x2; })_largestImageSize:(id)arg1;
- (id)boundApplicationIdentifier;
- (id)boundContainerURL;
- (id)boundIconCacheKey;
- (id)boundIconFileNames;
- (BOOL)boundIconIsBadge;
- (BOOL)boundIconIsPrerendered;
- (id)boundIconsDictionary;
- (id)boundResourcesDirectoryURL;
- (void)dealloc;
- (id)iconDataForStyle:(id)arg1 width:(int)arg2 height:(int)arg3 options:(unsigned int)arg4;
- (id)iconDataForVariant:(int)arg1;
- (id)iconStyleDomain;
- (id)iconsDictionary;
- (id)localizedName;
- (void)setBoundApplicationIdentifier:(id)arg1;
- (void)setBoundContainerURL:(id)arg1;
- (void)setBoundIconCacheKey:(id)arg1;
- (void)setBoundIconFileNames:(id)arg1;
- (void)setBoundIconIsBadge:(BOOL)arg1;
- (void)setBoundIconIsPrerendered:(BOOL)arg1;
- (void)setBoundIconsDictionary:(id)arg1;
- (void)setBoundResourcesDirectoryURL:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setTypeOwner:(id)arg1;
- (id)typeOwner;

@end
