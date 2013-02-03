/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKStreetViewTileDecoder, MKPanorama, MKPanoramaRequest;

@interface MKPanoramaTextures : NSObject <MKStreetViewTileDecoderDelegate> {
    float clampY;
    MKStreetViewTileDecoder *decoder;
    NSUInteger maxImageLevel;
    NSUInteger maxLevel;
    BOOL multitexturing;
    MKPanorama *panorama;
    BOOL pendingFade;
    NSUInteger renderLevel;
    double renderPitch;
    double renderYaw;
    double **tileBirths;
    BOOL **tileInWorkingSet;
    NSUInteger *tileLevelPresentMask;
    MKPanoramaRequest ***tileRequests;
    NSUInteger **tileTextures;
    float wrapX;
}

- (void)_bindAndScaleTexture:(NSUInteger)arg1 x:(NSUInteger)arg2 y:(NSUInteger)arg3 level:(NSUInteger)arg4;
- (void)_bindAndScaleWrapTexture:(NSUInteger)arg1 x:(NSUInteger)arg2 y:(NSUInteger)arg3 level:(NSUInteger)arg4;
- (void)_enqueueDecodeRequest:(id)arg1;
- (void)_handleCompletedDecodeRequest:(id)arg1;
- (void)_setTexture:(NSUInteger)arg1 forTilePath:(NSInteger)arg2;
- (void)_setTilePath:(NSInteger)arg1 inWorkingSet:(BOOL)arg2 decodeArray:(id)arg3;
- (struct { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; })_viewRectForYaw:(double)arg1 pitch:(double)arg2 level:(NSUInteger)arg3;
- (void)dealloc;
- (void)didLoadImageData:(id)arg1 forTilePath:(NSInteger)arg2;
- (void)didPerformDecodeRequest:(id)arg1;
- (void)drawTilesWithTileStarts:(const NSInteger*)arg1 tileEnds:(const NSInteger*)arg2;
- (void)emitVertexRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withTexture:(struct { BOOL x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; float x6; }*)arg2 fadeTexture:(struct { BOOL x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; float x6; }*)arg3;
- (BOOL)hasBaseLevel;
- (id)initWithPanorama:(id)arg1 decoder:(id)arg2 numLevels:(NSUInteger)arg3 wrapX:(float)arg4 clampY:(float)arg5 numImageLevels:(NSUInteger)arg6;
- (BOOL)pendingFade;
- (void)updateWorkingSetTilesForYaw:(double)arg1 pitch:(double)arg2 zoom:(float)arg3 addNewTiles:(BOOL)arg4;

@end