/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPMediaPickerControllerDelegate>, MPMediaPickerControllerInternal, NSString;

@interface MPMediaPickerController : UIViewController <MediaPickerModalContextDelegate, UIScrollViewDelegate> {
    MPMediaPickerControllerInternal *_internal;
}

@property BOOL allowsPickingMultipleItems;
@property <MPMediaPickerControllerDelegate> * delegate;
@property(readonly) int mediaTypes;
@property(copy) NSString * prompt;

+ (void)preheatMediaPicker;

- (void)_pickerDidCancel;
- (void)_pickerDidPickItems:(id)arg1;
- (BOOL)allowsPickingMultipleItems;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithMediaTypes:(int)arg1;
- (void)loadView;
- (void)mediaPickerModalContext:(id)arg1 didPickMediaItems:(id)arg2;
- (int)mediaTypes;
- (void)modalContextDidDismiss:(id)arg1 withSuccess:(BOOL)arg2;
- (id)prompt;
- (void)setAllowsPickingMultipleItems:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)viewDidUnload;

@end
