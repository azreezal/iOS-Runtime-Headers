/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSDictionary, NSString;

@interface IMTimer : NSObject {
    NSString *_name;
    SEL _selector;
    id _target;
    double _timeInterval;
    id _timer;
    NSDictionary *_userInfo;
    BOOL _wakeDevice;
}

@property(readonly) id userInfo;

- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;
- (void)invalidate;
- (void)setFireTimeInterval:(double)arg1;
- (id)userInfo;

@end
