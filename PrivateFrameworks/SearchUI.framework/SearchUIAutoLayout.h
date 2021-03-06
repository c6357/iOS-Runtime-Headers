/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAutoLayout : NSObject

+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 priority:(float)arg3;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(float)arg3;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(float)arg3 minimum:(BOOL)arg4;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(float)arg3 minimum:(BOOL)arg4 priority:(float)arg5;
+ (id)alignLeadingView:(id)arg1 toTrailingView:(id)arg2 spacing:(float)arg3 priority:(float)arg4;
+ (id)alignView:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toView:(id)arg4 attribute:(int)arg5 constant:(float)arg6;
+ (id)alignView:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toView:(id)arg4 attribute:(int)arg5 constant:(float)arg6 priority:(float)arg7;
+ (id)alignView:(id)arg1 attribute:(int)arg2 toView:(id)arg3 attribute:(int)arg4;
+ (id)alignView:(id)arg1 attribute:(int)arg2 toView:(id)arg3 attribute:(int)arg4 constant:(float)arg5;
+ (id)alignView:(id)arg1 attribute:(int)arg2 toView:(id)arg3 attribute:(int)arg4 priority:(float)arg5;
+ (id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(int)arg3;
+ (id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(int)arg3 constant:(float)arg4;
+ (id)alignView:(id)arg1 toView:(id)arg2 withAttribute:(int)arg3 priority:(float)arg4;
+ (void)alignViews:(id)arg1 withAttribute:(int)arg2;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(float)arg3;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(float)arg3 forFont:(id)arg4;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(float)arg3 forFont:(id)arg4 minimum:(BOOL)arg5;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(float)arg3 minimum:(BOOL)arg4;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 dynamicSpacing:(float)arg3 priority:(float)arg4;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(float)arg3;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(float)arg3 isDynamic:(BOOL)arg4 forFont:(id)arg5 minimum:(BOOL)arg6;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(float)arg3 isDynamic:(BOOL)arg4 forFont:(id)arg5 minimum:(BOOL)arg6 priority:(float)arg7;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(float)arg3 minimum:(BOOL)arg4;
+ (id)baselineAlignBottomView:(id)arg1 toTopView:(id)arg2 spacing:(float)arg3 priority:(float)arg4;
+ (float)deviceScaledRoundedValue:(float)arg1;
+ (void)enableAutoLayoutForItems:(id)arg1;
+ (void)fillContainerWithView:(id)arg1;
+ (id)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2;
+ (id)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2 metrics:(id)arg3;
+ (id)installConstraintsWithVisualFormat:(id)arg1 views:(id)arg2 options:(unsigned int)arg3;
+ (id)installConstraintsWithVisualFormat:(id)arg1 withViews:(id)arg2 metrics:(id)arg3 options:(unsigned int)arg4;
+ (void)requireIntrinsicSizeForView:(id)arg1;
+ (void)requireIntrinsicSizeForView:(id)arg1 withPriority:(float)arg2;
+ (float)scaledValueForValue:(float)arg1 withFont:(id)arg2;
+ (id)setHeight:(float)arg1 forView:(id)arg2;
+ (void)setSize:(struct CGSize { float x1; float x2; })arg1 forView:(id)arg2;
+ (void)setVisibility:(BOOL)arg1 forView:(id)arg2;
+ (id)setWidth:(float)arg1 forView:(id)arg2;
+ (void)spanContainerHeightForView:(id)arg1;
+ (void)spanContainerWidthForView:(id)arg1;

@end
