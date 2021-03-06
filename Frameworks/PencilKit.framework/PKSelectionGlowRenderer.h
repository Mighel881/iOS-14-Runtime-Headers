/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKSelectionGlowRenderer : NSObject <PKSelectionRendering> {
    long long  _draggedKnobLocation;
    CALayer * _highlightLayer;
    bool  _isDraggingKnob;
    long long  _knobDragMode;
    UIBezierPath * _lassoPath;
    PKSelectionModificationKnob * _leftKnob;
    <PKSelectionRenderingDelegate> * _renderingDelegate;
    PKSelectionModificationKnob * _rightKnob;
    CALayer * _strokePathsTilesLayer;
    PKStrokeSelection * _strokeSelection;
    NSMutableDictionary * _tiles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBezierPath *lassoPath;
@property (nonatomic) <PKSelectionRenderingDelegate> *renderingDelegate;
@property (nonatomic, retain) PKStrokeSelection *strokeSelection;
@property (readonly) Class superclass;

+ (id)sharedStrokePathCache;

- (void).cxx_destruct;
- (id)_accessibilityUserTestingChildren;
- (id)_affordanceForLocationInSelectionView:(struct CGPoint { double x1; double x2; })arg1 inputType:(long long)arg2;
- (void)_brushSelectWithKnob:(long long)arg1 toLocation:(struct CGPoint { double x1; double x2; })arg2 knobDragMode:(long long)arg3 selectionType:(long long)arg4 touchType:(long long)arg5;
- (void)_createPathAroundStrokes:(id)arg1 inDrawing:(id)arg2 isLive:(bool)arg3 liveScrollOffset:(struct CGPoint { double x1; double x2; })arg4;
- (void)_didBeginDraggingSelection;
- (void)_didEndDragKnobLocation:(long long)arg1 knobDragMode:(long long)arg2;
- (void)_didEndDraggingSelection;
- (void)_dragKnob:(long long)arg1 toLocation:(struct CGPoint { double x1; double x2; })arg2 otherKnobLocation:(struct CGPoint { double x1; double x2; })arg3 knobDragMode:(long long)arg4;
- (struct CGColor { }*)_highlightColor;
- (double)_highlightWidthForStroke:(id)arg1;
- (bool)_isBrushSelecting:(long long)arg1;
- (id)_knobForKnobLocation:(long long)arg1;
- (id)_newKnobWithLocation:(long long)arg1;
- (void)_renderLiveSelectionPath:(const struct CGPath { }*)arg1 forStrokes:(id)arg2 inDrawing:(id)arg3 liveScrollOffset:(struct CGPoint { double x1; double x2; })arg4;
- (void)_resetKnobAppearance;
- (double)_scaleForSelectionType:(long long)arg1 touchType:(long long)arg2;
- (void)_setupHighlightIfNecessary;
- (void)_setupKnobsIfNecessary;
- (void)_setupSelectionAdornment;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformFromStrokeSpaceToViewInDrawing:(id)arg1 isLive:(bool)arg2;
- (void)_updateKnobAppearanceForDragAtKnobLocation:(long long)arg1 point:(struct CGPoint { double x1; double x2; })arg2 knobDragMode:(long long)arg3 selectionType:(long long)arg4 touchType:(long long)arg5;
- (void)_updateKnobAppearanceForDragAtKnobLocation:(long long)arg1 point:(struct CGPoint { double x1; double x2; })arg2 otherKnobPoint:(struct CGPoint { double x1; double x2; })arg3 selectionType:(long long)arg4 touchType:(long long)arg5;
- (void)_updateKnobPositionsForStrokes:(id)arg1 strokeSpaceToViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)_willBeginDragKnobLocation:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 knobDragMode:(long long)arg3;
- (id)adornmentLayer;
- (struct CGPoint { double x1; double x2; })editMenuLocation;
- (id)initForLiveSelectionWithRenderingDelegate:(id)arg1;
- (id)initWithStrokeSelection:(id)arg1 renderingDelegate:(id)arg2;
- (id)lassoPath;
- (id)renderingDelegate;
- (void)setKnobsVisible:(bool)arg1;
- (void)setLassoPath:(id)arg1;
- (void)setRenderingDelegate:(id)arg1;
- (void)setStrokeSelection:(id)arg1;
- (id)strokeSelection;

@end
