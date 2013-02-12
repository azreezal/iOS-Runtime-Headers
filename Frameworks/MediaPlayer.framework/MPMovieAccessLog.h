/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVPlayerItemAccessLog, NSArray, NSData;

@interface MPMovieAccessLog : NSObject <NSCopying> {
    struct MPMovieAccessLogInternal { 
        AVPlayerItemAccessLog *accessLog; 
    } _internal;
}

@property struct MPMovieAccessLogInternal { id x1; } _internal;
@property(readonly) NSArray * events;
@property(readonly) NSData * extendedLogData;
@property(readonly) unsigned int extendedLogDataStringEncoding;

- (id)_initWithAVItemAccessLog:(id)arg1;
- (struct MPMovieAccessLogInternal { id x1; })_internal;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)events;
- (id)extendedLogData;
- (unsigned int)extendedLogDataStringEncoding;
- (void)set_internal:(struct MPMovieAccessLogInternal { id x1; })arg1;

@end
