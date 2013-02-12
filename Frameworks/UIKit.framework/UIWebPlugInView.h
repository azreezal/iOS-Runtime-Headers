/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CALayer, UIView, UIWebDocumentView;

@interface UIWebPlugInView : WAKView {
    CALayer *_hostingLayer;
    BOOL _isFullScreen;
    BOOL _isMapViewPlugIn;
    BOOL _isQuickTimePlugIn;
    struct __CFRunLoopObserver { } *_mainRunLoopDrawObserver;
    BOOL _parentedInLayer;
    UIView *_uiView;
    UIWebDocumentView *_webView;
}

@property BOOL isMapViewPlugIn;
@property BOOL isQuickTimePlugIn;
@property(getter=isParentedInLayer) BOOL parentedInLayer;

- (void)_attachPluginLayerOnMainThread;
- (void)_connectPluginLayers;
- (void)_detachPluginLayerOnMainThread;
- (void)_disconnectPluginLayers;
- (void)_reshapeOnMainThread;
- (void)_viewDidMoveToWindowOnMainThread;
- (void)attachPluginLayer;
- (void)dealloc;
- (void)detachPluginLayer;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithWebView:(id)arg1 plugInView:(id)arg2;
- (void)invalidateGState;
- (BOOL)isMapViewPlugIn;
- (BOOL)isParented;
- (BOOL)isParentedInLayer;
- (BOOL)isQuickTimePlugIn;
- (void)layout;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (id)objectForWebScript;
- (id)plugInView;
- (id)pluginLayer;
- (void)reshape;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setIsMapViewPlugIn:(BOOL)arg1;
- (void)setIsQuickTimePlugIn:(BOOL)arg1;
- (void)setParentedInLayer:(BOOL)arg1;
- (void)setWebView:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)webPlugInDestroy;
- (void)webPlugInInitialize;
- (void)webPlugInStart;
- (void)webPlugInStop;
- (BOOL)willProvidePluginLayer;

@end
