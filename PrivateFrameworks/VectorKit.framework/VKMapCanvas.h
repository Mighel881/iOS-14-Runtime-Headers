/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapCanvas : VKScreenCanvas <VKInteractiveMap, VKMapModelDelegate> {
    double  _canonicalSkyHeight;
    <VKInteractiveMapDelegate> * _delegate;
    VKTimedAnimation * _horizontalOffsetAnimation;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastCanvasSize;
    struct optional<float> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[4]; 
            float type; 
        } _value; 
    }  _lastValidCanvasSizeZoomLevel;
    VKMapModel * _map;
    struct shared_ptr<md::OverlayContainer> { 
        struct OverlayContainer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _overlayContainer;
    bool  _trafficEnabled;
}

@property (nonatomic) double canonicalSkyHeight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKInteractiveMapDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VKMapModel *map;
@property (nonatomic, readonly) NSArray *overlays;
@property (readonly) Class superclass;
@property (nonatomic) bool trafficEnabled;
@property (nonatomic, readonly) NSArray *visibleTileSets;

+ (bool)supportsMapType:(int)arg1 scale:(int)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct optional<float> { bool x1; union ValueUnion { unsigned char x_2_1_1[4]; float x_2_1_2; } x2; })_zoomLevelForCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)addOverlay:(id)arg1;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationRectTest;
- (id)attributionsForCurrentRegion;
- (double)canonicalSkyHeight;
- (void)clearScene;
- (id)consoleString:(bool)arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToCameraModelPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertMapPointToPoint:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToMapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x1; double x2; })arg1 highlightTarget:(unsigned char)arg2;
- (id)delegate;
- (id)detailedDescription;
- (struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })featureMarkerAtScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (id)initWithMapEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct Device {} *x3; struct RealisticCommandBufferSelector {} *x4; struct _retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_5_1_1)(); id x_5_1_2; struct _retain_objc { } x_5_1_3; struct _release_objc { } x_5_1_4; } x5; struct unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> > { struct __compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> > { struct DisplayLink {} *x_1_2_1; } x_6_1_1; } x6; struct unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct __compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct SnapshotRunLoop {} *x_1_2_1; } x_7_1_1; } x7; struct RunLoop {} *x8; struct unique_ptr<md::AnimationManager, std::__1::default_delete<md::AnimationManager> > { struct __compressed_pair<md::AnimationManager *, std::__1::default_delete<md::AnimationManager> > { struct AnimationManager {} *x_1_2_1; } x_9_1_1; } x9; }*)arg1 inBackground:(bool)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (bool)isPointValidForGesturing:(struct CGPoint { double x1; double x2; })arg1;
- (id)map;
- (void)mapModel:(id)arg1 labelMarkerDidChangeState:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)mapModelDidReloadStylesheet:(id)arg1;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (void)mapModelLabelsDidLayout:(id)arg1;
- (id)navigationPuck;
- (id)overlays;
- (void)populateDebugNode:(struct DebugTreeNode { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 withOptions:(const struct bitset<4> { }*)arg2;
- (void)reloadStylesheet;
- (void)removeOverlay:(id)arg1;
- (void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)setCanonicalSkyHeight:(double)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setMapType:(int)arg1 animated:(bool)arg2;
- (void)setTrafficEnabled:(bool)arg1;
- (bool)shouldHideOffscreenSelectedAnnotation;
- (long long)tileSize;
- (bool)trafficEnabled;
- (void)transferStateFromCanvas:(id)arg1;
- (void)transitionToTracking:(bool)arg1 mapMode:(long long)arg2 startLocation:(struct { double x1; double x2; })arg3 startCourse:(double)arg4 cameraController:(id)arg5 pounceCompletionHandler:(id /* block */)arg6;
- (void)updateCameraForFrameResize;
- (void)updateOverlays;
- (void)updateWithTimestamp:(double)arg1 withContext:(struct LayoutContext { id x1; struct shared_ptr<gdc::Camera> { struct Camera {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned char x3; struct VKEdgeInsets { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; struct VKEdgeInsets { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::CommonMesh::Pos2UVMesh> { struct Pos2UVMesh {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; struct StencilManager { unsigned char x_9_1_1; unsigned char x_9_1_2; unsigned char x_9_1_3; struct ClearItem { unsigned char x_4_2_1; struct Matrix<float, 4, 1> { float x_2_3_1[4]; } x_4_2_2; bool x_4_2_3; float x_4_2_4; unsigned char x_4_2_5; unsigned int x_4_2_6; } x_9_1_4; } x9; struct shared_ptr<ggl::Device> { struct Device {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; }*)arg2;
- (id)visibleTileSets;

@end