/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage;

@interface GKGameListIconBrush : GKImageBrush {
    UIImage *_maskImage;
    UIImage *_shadowImage;
    UIImage *_shineImage;
}

@property(retain) UIImage * maskImage;
@property(retain) UIImage * shadowImage;
@property(retain) UIImage * shineImage;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)maskImage;
- (float)scaleForInput:(id)arg1;
- (void)setMaskImage:(id)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setShineImage:(id)arg1;
- (id)shadowImage;
- (id)shineImage;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;

@end
