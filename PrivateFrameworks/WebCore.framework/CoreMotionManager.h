/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CLLocationManager, CMMotionManager, NSTimer;

@interface CoreMotionManager : NSObject {
    struct HashSet<WebCore::DeviceMotionClientIPhone*,WTF::PtrHash<WebCore::DeviceMotionClientIPhone*>,WTF::HashTraits<WebCore::DeviceMotionClientIPhone*> > { 
        struct HashTable<WebCore::DeviceMotionClientIPhone*,WebCore::DeviceMotionClientIPhone*,WTF::IdentityExtractor<WebCore::DeviceMotionClientIPhone*>,WTF::PtrHash<WebCore::DeviceMotionClientIPhone*>,WTF::HashTraits<WebCore::DeviceMotionClientIPhone*>,WTF::HashTraits<WebCore::DeviceMotionClientIPhone*> > { 
            struct DeviceMotionClientIPhone {} **m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    struct HashSet<WebCore::DeviceOrientationClientIPhone*,WTF::PtrHash<WebCore::DeviceOrientationClientIPhone*>,WTF::HashTraits<WebCore::DeviceOrientationClientIPhone*> > { 
        struct HashTable<WebCore::DeviceOrientationClientIPhone*,WebCore::DeviceOrientationClientIPhone*,WTF::IdentityExtractor<WebCore::DeviceOrientationClientIPhone*>,WTF::PtrHash<WebCore::DeviceOrientationClientIPhone*>,WTF::HashTraits<WebCore::DeviceOrientationClientIPhone*>,WTF::HashTraits<WebCore::DeviceOrientationClientIPhone*> > { 
            struct DeviceOrientationClientIPhone {} **m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    } m_deviceMotionClients;
    } m_deviceOrientationClients;
    BOOL m_gyroAvailable;
    BOOL m_headingAvailable;
    CLLocationManager *m_locationManager;
    CMMotionManager *m_motionManager;
    NSTimer *m_updateTimer;
}

+ (id)sharedManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addMotionClient:(struct DeviceMotionClientIPhone { int (**x1)(); id x2; struct DeviceMotionController {} *x3; struct RefPtr<WebCore::DeviceMotionData> { struct DeviceMotionData {} *x_4_1_1; } x4; boolx5; }*)arg1;
- (void)addOrientationClient:(struct DeviceOrientationClientIPhone { int (**x1)(); id x2; struct DeviceOrientationController {} *x3; struct RefPtr<WebCore::DeviceOrientation> { struct DeviceOrientation {} *x_4_1_1; } x4; boolx5; }*)arg1;
- (void)checkClientStatus;
- (void)dealloc;
- (BOOL)gyroAvailable;
- (BOOL)headingAvailable;
- (id)init;
- (void)initializeOnMainThread;
- (void)removeMotionClient:(struct DeviceMotionClientIPhone { int (**x1)(); id x2; struct DeviceMotionController {} *x3; struct RefPtr<WebCore::DeviceMotionData> { struct DeviceMotionData {} *x_4_1_1; } x4; boolx5; }*)arg1;
- (void)removeOrientationClient:(struct DeviceOrientationClientIPhone { int (**x1)(); id x2; struct DeviceOrientationController {} *x3; struct RefPtr<WebCore::DeviceOrientation> { struct DeviceOrientation {} *x_4_1_1; } x4; boolx5; }*)arg1;
- (void)sendAccelerometerData:(id)arg1;
- (void)sendMotionData:(id)arg1 withHeading:(id)arg2;
- (void)update;

@end
