/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWindow;

@interface UIKeyboardSyntheticTouch : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    unsigned char _pathIdentity;
    unsigned char _pathIndex;
    float _pathMajorRadius;
    } locationInWindow;
    int phase;
    unsigned int tapCount;
    double timestamp;
    UIWindow *window;
}

@property(readonly) unsigned char _pathIdentity;
@property(readonly) unsigned char _pathIndex;
@property float _pathMajorRadius;
@property struct CGPoint { float x1; float x2; } locationInWindow;
@property int phase;
@property unsigned int tapCount;
@property double timestamp;
@property(retain) UIWindow * window;

+ (id)syntheticTouchWithPoint:(struct CGPoint { float x1; float x2; })arg1 timestamp:(double)arg2 window:(id)arg3;

- (unsigned char)_pathIdentity;
- (unsigned char)_pathIndex;
- (float)_pathMajorRadius;
- (struct CGPoint { float x1; float x2; })getLocationInWindow;
- (id)initWithPoint:(struct CGPoint { float x1; float x2; })arg1 timestamp:(double)arg2 window:(id)arg3;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })locationInWindow;
- (int)phase;
- (struct CGPoint { float x1; float x2; })previousLocationInView:(id)arg1;
- (void)setLocationInWindow:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPhase:(int)arg1;
- (void)setTapCount:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setWindow:(id)arg1;
- (void)set_pathMajorRadius:(float)arg1;
- (unsigned int)tapCount;
- (double)timestamp;
- (id)window;

@end
