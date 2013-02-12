/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableData;

@interface GEONetworkDataReader : NSObject {
    unsigned int _bookmarkOffset;
    const void *_bytes;
    NSMutableData *_data;
    unsigned int _dataLength;
    unsigned int _offset;
}

- (void)appendNetworkData:(id)arg1;
- (void)dealloc;
- (BOOL)hasUnreadData;
- (id)initWithData:(id)arg1;
- (void)markOffset;
- (id)readData:(unsigned short)arg1;
- (id)readString;
- (unsigned short)readUnsignedShort;
- (void)seekToMarkedOffset;

@end
