/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor> {
    NSMutableArray *messages;
}

- (id)copyMessages;
- (void)dealloc;
- (id)init;
- (id)messages;
- (void)newMessagesAvailable:(id)arg1;
- (BOOL)shouldCancel;

@end
