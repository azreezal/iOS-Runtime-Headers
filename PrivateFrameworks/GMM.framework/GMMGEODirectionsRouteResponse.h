/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;

@interface GMMGEODirectionsRouteResponse : GEODirectionsRouteResponse {
    NSMutableArray *_viaWaypointArrays;
}

@property(retain) NSMutableArray * viaWaypointArrays;

+ (id)geoDirectionsResponseFromGMMResponse:(id)arg1 error:(int*)arg2;

- (void)dealloc;
- (void)setViaWaypointArrays:(id)arg1;
- (id)viaWaypointArrays;

@end
