/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AirPlayDiagnosticsFullscreenController, NSString, UIWindow;

@interface MPFloatingAirPlayDebugViewController : UINavigationController <AirPlayDiagnosticsFullscreenControllerDelegate> {
    AirPlayDiagnosticsFullscreenController *_airPlayDiagsController;
    UIWindow *_floatingWindow;
    bool_presentedAnimated;
}

@property(readonly) AirPlayDiagnosticsFullscreenController * airPlayDiagsController;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_destroyFloatingWindow;
- (void)airPlayDiagnosticsContentViewController:(id)arg1 didComplete:(bool)arg2;
- (id)airPlayDiagsController;
- (void)presentFromFloatingWindowAnimated:(bool)arg1 completion:(id)arg2;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end