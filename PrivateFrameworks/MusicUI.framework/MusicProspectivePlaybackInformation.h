/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class RadioStation;

@interface MusicProspectivePlaybackInformation : NSObject <NSCopying> {
    int _playbackStyle;
    RadioStation *_radioStation;
}

@property(readonly) int playbackStyle;
@property(readonly) RadioStation * radioStation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithPlaybackStyle:(int)arg1;
- (id)initWithRadioStation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)playbackStyle;
- (id)radioStation;

@end