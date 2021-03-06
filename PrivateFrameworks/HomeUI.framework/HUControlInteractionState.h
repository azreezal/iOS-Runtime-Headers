/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUControlInteractionState : NSObject {
    unsigned int  _inFlightWriteCount;
    BOOL  _userInteractionActive;
    NAValueThrottler * _writeThrottler;
    BOOL  _writesInProgressOrPossible;
}

@property (nonatomic) unsigned int inFlightWriteCount;
@property (getter=isUserInteractionActive, nonatomic) BOOL userInteractionActive;
@property (nonatomic, retain) NAValueThrottler *writeThrottler;
@property (getter=areWritesInProgressOrPossible, nonatomic) BOOL writesInProgressOrPossible;

- (void).cxx_destruct;
- (BOOL)areWritesInProgressOrPossible;
- (unsigned int)inFlightWriteCount;
- (BOOL)isUserInteractionActive;
- (void)setInFlightWriteCount:(unsigned int)arg1;
- (void)setUserInteractionActive:(BOOL)arg1;
- (void)setWriteThrottler:(id)arg1;
- (void)setWritesInProgressOrPossible:(BOOL)arg1;
- (id)writeThrottler;

@end
