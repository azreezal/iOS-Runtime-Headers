/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@interface IMMobileConnectionMonitor : IMConnectionMonitor {
    Class _CPNetworkObserverClass;
    BOOL _isHostReachable;
}

@property(retain) Class _CPNetworkObserverClass;
@property BOOL _isHostReachable;

- (Class)_CPNetworkObserverClass;
- (void)_handleNetworkObserverDidChange:(id)arg1;
- (BOOL)_isHostReachable;
- (void)_setup;
- (void)dealloc;
- (id)init;
- (BOOL)isImmediatelyReachable;
- (void)set_CPNetworkObserverClass:(Class)arg1;
- (void)set_isHostReachable:(BOOL)arg1;

@end
