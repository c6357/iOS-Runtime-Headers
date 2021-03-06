/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEODirectionsRequestTicket : NSObject <GEODirectionServiceTicket> {
    BOOL  _active;
    BOOL  _canceled;
    BOOL  _isReroute;
    GEOComposedRoute * _originalRoute;
    GEODirectionsRequest * _request;
    NSDictionary * _userInfo;
    NSArray * _waypoints;
}

@property (nonatomic, readonly) BOOL active;
@property (nonatomic, readonly) BOOL canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isReroute;
@property (nonatomic, retain) GEOComposedRoute *originalRoute;
@property (nonatomic, readonly) GEODirectionsRequest *request;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *waypoints;

- (BOOL)active;
- (void)cancel;
- (BOOL)canceled;
- (void)dealloc;
- (id)description;
- (id)initWithRequest:(id)arg1;
- (BOOL)isReroute;
- (id)originalRoute;
- (id)request;
- (id)responseUserInfo;
- (void)setIsReroute:(BOOL)arg1;
- (void)setOriginalRoute:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (id)waypoints;

@end
