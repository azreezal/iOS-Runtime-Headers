/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSFileHandle, SSLogFileOptions;

@interface SSRollableLog : NSObject {
    struct dispatch_queue_s { } *_dispatchQueue;
    NSFileHandle *_fileHandle;
    struct dispatch_source_s { } *_fileObserverSource;
    double _lastFileStatTime;
    SSLogFileOptions *_options;
}

@property(readonly) SSLogFileOptions * logOptions;

- (id)_activeLogFilePath;
- (void)_checkLogFileSize;
- (void)_closeLogFile;
- (id)_logFilePathWithIndex:(int)arg1;
- (void)_openLogFile;
- (void)_rollLogFiles;
- (void)dealloc;
- (id)initWithLogOptions:(id)arg1;
- (id)logOptions;
- (void)writeString:(id)arg1;

@end
