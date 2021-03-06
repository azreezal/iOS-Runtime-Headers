/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutEventCollector : NSObject {
    <HDWorkoutEventCollectorDelegate> * _delegate;
    NSUUID * _sessionId;
}

@property (readonly) <HDWorkoutEventCollectorDelegate> *delegate;
@property (readonly) NSUUID *sessionId;

+ (BOOL)isAvailableInCurrentHardware;

- (void).cxx_destruct;
- (id)delegate;
- (void)immediateUpdateWithCompletion:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)sessionId;
- (void)startWithSessionId:(id)arg1;
- (void)stop;
- (BOOL)supportsWorkoutActivityType:(unsigned int)arg1;

@end
