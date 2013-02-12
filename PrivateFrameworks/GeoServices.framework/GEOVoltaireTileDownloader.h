/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class <GEOVoltaireTileDownloaderDelegate>, GEONetworkDataReader, GEOTileKeyList, NSString, NSURL, NSURLConnection;

@interface GEOVoltaireTileDownloader : NSObject <NSURLConnectionDelegate> {
    NSURLConnection *_connection;
    <GEOVoltaireTileDownloaderDelegate> *_delegate;
    GEOTileKeyList *_keyList;
    int _numTilesLoaded;
    unsigned short _providerID;
    GEONetworkDataReader *_reader;
    NSURL *_requestURL;
    NSString *_sharedPrefix;
    NSString *_userAgent;
    int _zAdjust;
}

@property <GEOVoltaireTileDownloaderDelegate> * delegate;
@property(retain) NSString * userAgent;

- (void)_cancelWithErrorCode:(int)arg1;
- (void)_cleanupConnection;
- (void)_failWithError:(id)arg1;
- (void)_failWithErrorCode:(int)arg1;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })_tileKeyForURL:(id)arg1 edition:(unsigned int*)arg2;
- (void)_tryParseTiles;
- (id)_urlForTileKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)addTileKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)start;
- (id)userAgent;

@end
