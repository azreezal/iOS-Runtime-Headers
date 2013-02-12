/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCameraFaceDetectionView, PLCameraFocusLockView, PLCameraFocusPointView, PLCameraFocusView, UIView;

@interface PLCameraPreviewView : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _canShowFocus : 1;
    unsigned int _controlsAreVisible : 1;
    PLCameraFocusView *_autoFocusView;
    UIView *_disabledView;
    PLCameraFaceDetectionView *_faceDetectionView;
    PLCameraFocusPointView *_focusView;
    PLCameraFocusLockView *_lockFocusView;
    UIView *_snapshotView;
    } _touchLocation;
}

+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })defaultAffineTransform;

- (void)animateFocusLock;
- (void)animateFocusScaleDown;
- (void)dealloc;
- (void)focusDidEnd;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)removeFocusView;
- (void)setCameraIsChangingModes:(BOOL)arg1;
- (void)setControlsAreVisible:(BOOL)arg1;
- (void)setShouldShowFocus:(BOOL)arg1;
- (void)showAutofocusView;
- (void)showFaceRectangleWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)showFocusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)showLockFocusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)zoomFromFactor:(float)arg1 toFactor:(float)arg2 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3;

@end
