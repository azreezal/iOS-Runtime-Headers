/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSString, NSURL, YTVideo;

@interface YTCaptionTrack : NSObject {
    NSURL *_captionTrackURL;
    NSString *_language;
    BOOL _speechRecognition;
    NSString *_title;
    YTVideo *_video;
}

@property(retain) NSURL * captionTrackURL;
@property(retain) NSString * language;
@property BOOL speechRecognition;
@property(retain) NSString * title;
@property(retain) YTVideo * video;

- (id)captionTrackURL;
- (void)dealloc;
- (id)description;
- (id)language;
- (void)setCaptionTrackURL:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setSpeechRecognition:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setVideo:(id)arg1;
- (BOOL)speechRecognition;
- (id)title;
- (id)video;

@end
