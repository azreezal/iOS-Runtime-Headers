/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class CMMotionManager;

@interface FigCoreMotionDelegate : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct { 
        float x; 
        float y; 
        float z; 
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    struct { 
        float x; 
        float y; 
        float z; 
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    struct { 
        double timestamp; 
        float x; 
        float y; 
        float z; 
    struct { 
        double timestamp; 
        float x; 
        float y; 
        float z; 
    int accelRingIndex;
    double accelRingTime[128];
    float accelRingX[128];
    float accelRingY[128];
    float accelRingZ[128];
    BOOL computingPosition;
    BOOL copyingAllData;
    } currentQuaternion;
    double dGyroUpdateInterval;
    double dLatestFusedMotionCopied;
    double dLatestTimestamp;
    } fusedRingAccel[128];
    int fusedRingIndex;
    } fusedRingPosition[128];
    } fusedRingQuaternion[128];
    BOOL fusedRingSync[128];
    double fusedRingTime[128];
    BOOL gettingAttitudeChange;
    BOOL manageAccel;
    BOOL manageFusedMotion;
    BOOL manageGravity;
    CMMotionManager *motionManager;
    } position;
    } previousQuaternion;
    } ringMutex;
    double timestampLatency;
    } velocity;
}

- (id)copyAllFusedMotionData;
- (id)copyNewFusedMotionData;
- (void)dealloc;
- (void)didUpdateAcceleration:(struct { float x1; float x2; float x3; })arg1 time:(double)arg2;
- (void)didUpdateFusedMotionWithDeviceMotion:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; int x5; })arg1 time:(double)arg2 ifsync:(BOOL)arg3;
- (void)didUpdateGravity:(struct { float x1; float x2; float x3; })arg1 time:(double)arg2;
- (void)didUpdatePositionWithAcceleration:(struct { float x1; float x2; float x3; }*)arg1 forTimeStamp:(double)arg2;
- (void)didUpdatePositionWithTimeStamp:(double)arg1;
- (void)didUpdateVelocityWithAcceleration:(struct { float x1; float x2; float x3; }*)arg1 forTimeStamp:(double)arg2;
- (void)getCurrentAttitude:(double*)arg1 :(double*)arg2 :(double*)arg3;
- (void)getCurrentDeltaAttitude:(double*)arg1 :(double*)arg2 :(double*)arg3;
- (void)getCurrentDeltaQuaternion:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)getCurrentQuaternion:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)getFusedVector:(float*)arg1 :(float*)arg2 :(float*)arg3 forTimeStamp:(double)arg4;
- (void)getGravityZ:(float*)arg1 forTimeStamp:(double)arg2;
- (void)getPosition:(float*)arg1 :(float*)arg2 :(float*)arg3 forTimeStamp:(double)arg4;
- (void)getVector:(float*)arg1 :(float*)arg2 :(float*)arg3 forTimeStamp:(double)arg4;
- (id)init;
- (id)initWithAccelerometer:(BOOL)arg1 gravityZ:(BOOL)arg2 fusedMotion:(BOOL)arg3 accelUpdateInterval:(float)arg4 fusedMotionUpdateInterval:(float)arg5;
- (BOOL)isCopyingAllData;
- (BOOL)managingAccel;
- (BOOL)managingFusedMotion;
- (BOOL)managingGravity;
- (void)updateCurrentQuaternionForTimeStamp:(double)arg1;
- (void)updateCurrentQuaternionForTimeStamps:(double)arg1 withEnd:(double)arg2;
- (void)updateCurrentQuaternionForTimeStamps:(double)arg1 withSynced:(double)arg2;
- (void)updateDeviceCallback:(BOOL)arg1 fusedMotionUpdateInterval:(float)arg2;
- (void)updateGyroInterval:(float)arg1;

@end
