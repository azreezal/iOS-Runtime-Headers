/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSURL;

@interface AVFigAssetInspector : AVAssetInspector {
    struct OpaqueFigAsset { } *_figAsset;
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property(readonly) NSURL * URL;
@property(readonly) NSArray * chapterGroupInfo;
@property(getter=_figAsset,readonly) struct OpaqueFigAsset { }* figAsset;
@property(readonly) BOOL hasProtectedContent;
@property(readonly) NSURL * resolvedURL;

- (id)URL;
- (struct OpaqueFigAsset { }*)_figAsset;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (BOOL)_hasQTSaveRestriction;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (id)chapterGroupInfo;
- (id)commonMetadata;
- (id)creationDate;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)finalize;
- (BOOL)hasProtectedContent;
- (unsigned int)hash;
- (id)initWithFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (BOOL)isComposable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (id)lyrics;
- (id)mediaSelectionGroups;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (int)naturalTimeScale;
- (float)preferredRate;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (BOOL)providesPreciseDurationAndTiming;
- (id)resolvedURL;
- (long)trackCount;
- (id)trackReferences;

@end
