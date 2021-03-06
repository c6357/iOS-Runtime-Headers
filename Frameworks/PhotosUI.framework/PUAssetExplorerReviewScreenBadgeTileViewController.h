/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetExplorerReviewScreenBadgeTileViewController : PUTileViewController <PUViewModelChangeObserver, PXChangeObserver> {
    PLPhotoTileBadgeView * __badgeView;
    BOOL  __isOverContent;
    BOOL  __needsUpdateBadgeView;
    BOOL  __performingChanges;
    PUAssetActionManager * _actionManager;
    PUAssetReference * _assetReference;
    PUBrowsingViewModel * _browsingViewModel;
}

@property (nonatomic, readonly) PLPhotoTileBadgeView *_badgeView;
@property (setter=_setOverContent:, nonatomic) BOOL _isOverContent;
@property (setter=_setNeedsUpdateBadgeView:, nonatomic) BOOL _needsUpdateBadgeView;
@property (getter=_isPerformingChanges, setter=_setPerformingChanges:, nonatomic) BOOL _performingChanges;
@property (nonatomic, retain) PUAssetActionManager *actionManager;
@property (nonatomic, retain) PUAssetReference *assetReference;
@property (nonatomic, retain) PUBrowsingViewModel *browsingViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)_configureBadgeView:(id)arg1 isOverContent:(BOOL)arg2;
+ (struct CGSize { float x1; float x2; })badgeTileSize;

- (void).cxx_destruct;
- (id)_badgeView;
- (id)_disableLivePhotosSelectionManager;
- (void)_handleLivePhotoButtonTapped:(id)arg1;
- (void)_invalidateBadgeView;
- (BOOL)_isOverContent;
- (BOOL)_isPerformingChanges;
- (BOOL)_needsUpdate;
- (BOOL)_needsUpdateBadgeView;
- (id)_reviewActionManager;
- (void)_setNeedsUpdateBadgeView:(BOOL)arg1;
- (void)_setOverContent:(BOOL)arg1;
- (void)_setPerformingChanges:(BOOL)arg1;
- (void)_updateBadgeViewIfNeeded;
- (void)_updateIfNeeded;
- (id)actionManager;
- (void)applyLayoutInfo:(id)arg1;
- (id)assetReference;
- (void)becomeReusable;
- (id)browsingViewModel;
- (id)loadView;
- (void)observable:(id)arg1 didChange:(unsigned int)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setActionManager:(id)arg1;
- (void)setAssetReference:(id)arg1;
- (void)setBrowsingViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
