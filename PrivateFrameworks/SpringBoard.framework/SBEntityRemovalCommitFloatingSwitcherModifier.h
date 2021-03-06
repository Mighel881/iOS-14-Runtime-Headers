/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBEntityRemovalCommitFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    long long  _floatingConfiguration;
    SBAppLayout * _fromAppLayout;
    SBAppLayout * _toAppLayout;
}

- (void).cxx_destruct;
- (bool)_isIndexFromAppLayout:(unsigned long long)arg1;
- (bool)_isIndexToAppLayout:(unsigned long long)arg1;
- (id)_layoutSettings;
- (double)_toBeRemovedFinalScale;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerViewBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 floatingConfiguration:(long long)arg4;
- (bool)isContentStatusBarVisible;
- (double)opacityForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end
