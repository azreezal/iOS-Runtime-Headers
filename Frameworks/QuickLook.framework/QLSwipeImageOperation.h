/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class <QLPreviewItem>, UIImage;

@interface QLSwipeImageOperation : NSOperation {
    struct CGSize { 
        float width; 
        float height; 
    } _destinationSize;
    UIImage *_image;
    int _index;
    <QLPreviewItem> *_previewItem;
}

@property struct CGSize { float width; float height; } destinationSize;
@property(retain) UIImage * image;
@property int index;
@property(retain) <QLPreviewItem> * previewItem;

- (void)dealloc;
- (struct CGSize { float x1; float x2; })destinationSize;
- (id)image;
- (int)index;
- (id)init;
- (id)previewItem;
- (void)setDestinationSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setIndex:(int)arg1;
- (void)setPreviewItem:(id)arg1;

@end
