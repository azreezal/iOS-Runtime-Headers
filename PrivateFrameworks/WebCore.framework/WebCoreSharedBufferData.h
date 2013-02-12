/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WebCoreSharedBufferData : NSData {
    struct RefPtr<WebCore::SharedBuffer> { 
        struct SharedBuffer {} *m_ptr; 
    } sharedBuffer;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)bytes;
- (void)dealloc;
- (void)finalize;
- (id)initWithSharedBuffer:(struct SharedBuffer { int x1; unsigned int x2; struct Vector<char,0ul> { unsigned int x_3_1_1; struct VectorBuffer<char,0ul> { char *x_2_2_1; unsigned int x_2_2_2; } x_3_1_2; } x3; struct Vector<char*,0ul> { unsigned int x_4_1_1; struct VectorBuffer<char*,0ul> { char **x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; } x4; boolx5; struct OwnPtr<WebCore::PurgeableBuffer> { struct PurgeableBuffer {} *x_6_1_1; } x6; struct Vector<WTF::RetainPtr<const __CFData*>,0ul> { unsigned int x_7_1_1; struct VectorBuffer<WTF::RetainPtr<const __CFData*>,0ul> { struct RetainPtr<const __CFData*> {} *x_2_2_1; unsigned int x_2_2_2; } x_7_1_2; } x7; boolx8; unsigned int x9; int (*x10)(); void *x11; struct RetainPtr<const __CFData*> { struct __CFData {} *x_12_1_1; } x12; }*)arg1;
- (unsigned int)length;

@end
