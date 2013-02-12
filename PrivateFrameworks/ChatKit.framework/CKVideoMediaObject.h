/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSDictionary, NSString, UIImage;

@interface CKVideoMediaObject : CKAVMediaObject {
    NSDictionary *_transcodeOptions;
    NSString *_transcodePath;
    UIImage *_videoImage;
    UIImage *_videoPreviewImage;
}

+ (id)mimeTypesAllowedForMMS;
+ (id)mimeTypesToFileExtensions;

- (void)_generateImageOnMainThreadForVideoFile:(id)arg1;
- (void)_generatePreviewOnMainThreadForVideoFile:(id)arg1;
- (id)_newPreviewImageForIncomingVideoWithTailStyle:(int)arg1;
- (id)_newPreviewImageWithTailStyle:(int)arg1;
- (id)_newVideoPreviewImageForImage:(id)arg1 withTailStyle:(int)arg2;
- (id)_transcodeOptions;
- (float)balloonHeightWithPreviewData:(id)arg1;
- (Class)balloonPreviewClassWithPreviewData:(id)arg1;
- (void)configureBalloon:(id)arg1 withPreviewData:(id)arg2;
- (void)copyToPasteboard:(id)arg1;
- (void)dealloc;
- (id)effectiveExportedFilename;
- (id)filenameForMedia;
- (int)mediaType;
- (id)newPreview:(int)arg1 highlight:(BOOL)arg2;
- (id)optionsForMedia;
- (void)prepareForTranscode;
- (BOOL)shouldGeneratePreviewInBackground;
- (BOOL)shouldTranscodeForMMS;
- (unsigned long long)sizeInBytes;
- (double)transcodeDuration;
- (double)transcodeEndTime;
- (id)transcodeMimeType;
- (id)transcodePath;
- (double)transcodeStartTime;
- (id)transcodedFilename;
- (id)transcodedPathExtension;
- (id)videoImage;

@end
