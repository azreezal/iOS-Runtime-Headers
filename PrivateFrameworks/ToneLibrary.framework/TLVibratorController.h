/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibratorController : NSObject {
    id _avController;
    BOOL _customAVController;
    BOOL _startedInterruption;
}

@property(setter=setAVController:,retain) id avController;

- (id)_avController;
- (id)_interruptedAVController;
- (void)_setAVController:(id)arg1;
- (void)_turnOff;
- (void)_turnOnWithVibrationPattern:(id)arg1;
- (void)_uninterruptAVControllerIfAppropriate;
- (id)avController;
- (void)dealloc;
- (id)init;
- (id)initWithAVController:(id)arg1;
- (void)setAVController:(id)arg1;
- (void)turnOff;
- (void)turnOnWithVibrationPattern:(id)arg1;
- (void)uninterruptAVControllerIfAppropriate;

@end
