/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADLogMetaData, NSMutableArray;

@interface ADLogImpressionRequest : PBRequest {
    ADLogMetaData *_metaData;
    NSMutableArray *_metrics;
}

@property(readonly) BOOL hasMetaData;
@property(retain) ADLogMetaData * metaData;
@property(retain) NSMutableArray * metrics;

+ (void)initialize;

- (void)addMetric:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMetaData;
- (id)metaData;
- (id)metricAtIndex:(unsigned int)arg1;
- (id)metrics;
- (unsigned int)metricsCount;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setMetaData:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)writeTo:(id)arg1;

@end
