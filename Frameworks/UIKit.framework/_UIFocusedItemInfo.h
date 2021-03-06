/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusedItemInfo : NSObject <NSCopying> {
    NSArray * _containingScrollViews;
    UIView * _containingView;
    _UIFocusedItemRegion * _focusedRegion;
    int  _inheritedFocusMovementStyle;
    <UIFocusItem> * _item;
}

@property (setter=_setContainingScrollViews:, nonatomic, copy) NSArray *containingScrollViews;
@property (setter=_setContainingView:, nonatomic) UIView *containingView;
@property (nonatomic, readonly, copy) _UIFocusedItemRegion *focusedRegion;
@property (getter=_inheritedFocusMovementStyle, nonatomic, readonly) int inheritedFocusMovementStyle;
@property (setter=_setItem:, nonatomic) <UIFocusItem> *item;
@property (nonatomic, readonly) BOOL itemIsKindOfView;
@property (nonatomic, readonly) UIScreen *screen;

+ (id)infoWithItem:(id)arg1;
+ (id)infoWithView:(id)arg1;

- (void).cxx_destruct;
- (int)_inheritedFocusMovementStyle;
- (id)_initWithItem:(id)arg1;
- (id)_initWithView:(id)arg1;
- (void)_setContainingScrollViews:(id)arg1;
- (void)_setContainingView:(id)arg1;
- (void)_setItem:(id)arg1;
- (id)containingScrollViews;
- (id)containingView;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })focusedRectInCoordinateSpace:(id)arg1;
- (id)focusedRegion;
- (id)init;
- (id)item;
- (BOOL)itemIsKindOfView;
- (id)screen;

@end
