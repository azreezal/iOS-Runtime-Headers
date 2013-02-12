/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface CMVideoCaptureCameraTorchManager : NSObject <AXCameraTorchManager> {
    struct tagHANDLE { int x1; } *_hCMCapture;
}

- (void)closeTorchDevice;
- (id)initWithVideoCaptureHandle:(struct tagHANDLE { int x1; }*)arg1;
- (BOOL)openTorchDevice;
- (void)turnTorchOff;
- (void)turnTorchOn;

@end
