/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFError, NSArray, NSString;

@interface MFMessageSigner : NSObject {
    NSString *_sender;
    int _status;
    struct __SecTrust { } *_trust;
    NSString *_uncommentedSender;
}

@property(readonly) int action;
@property(readonly) NSArray * certificates;
@property(readonly) MFError * error;
@property(readonly) NSString * sender;

- (int)action;
- (void)addTrustException;
- (id)certificates;
- (struct __SecTrust { }*)copyTrust;
- (void)dealloc;
- (id)error;
- (BOOL)hasTrustException;
- (id)initWithSender:(id)arg1 trust:(struct __SecTrust { }*)arg2 verification:(int)arg3;
- (void)removeTrustException;
- (id)sender;

@end
