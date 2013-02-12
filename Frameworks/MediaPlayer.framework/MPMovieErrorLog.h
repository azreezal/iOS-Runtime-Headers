/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVPlayerItemErrorLog, NSArray, NSData;

@interface MPMovieErrorLog : NSObject <NSCopying> {
    struct MPMovieErrorLogInternal { 
        AVPlayerItemErrorLog *errorLog; 
    } _internal;
}

@property struct MPMovieErrorLogInternal { id x1; } _internal;
@property(readonly) NSArray * events;
@property(readonly) NSData * extendedLogData;
@property(readonly) unsigned int extendedLogDataStringEncoding;

- (id)_initWithAVItemErrorLog:(id)arg1;
- (struct MPMovieErrorLogInternal { id x1; })_internal;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)events;
- (id)extendedLogData;
- (unsigned int)extendedLogDataStringEncoding;
- (void)set_internal:(struct MPMovieErrorLogInternal { id x1; })arg1;

@end
