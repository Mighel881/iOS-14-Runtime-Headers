/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGPhotosHighlightItemModelManager : NSObject <PGHighlightItemListModelWriter, PGHighlightItemModelReader> {
    unsigned short  _kind;
    PHPhotoLibrary * _library;
    NSMutableDictionary * _visibilityStateByDayHighlighItemUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *highlightUUIDsWithVisibilityStateChange;
@property (nonatomic, readonly) unsigned short kind;
@property (nonatomic, readonly) PHPhotoLibrary *library;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *visibilityStateByDayHighlighItemUUID;

- (void).cxx_destruct;
- (void)addVisibleHighlight:(id)arg1 inMonth:(id)arg2;
- (id)consumeHighlightItemList:(id)arg1;
- (id)fetchChildHighlightItemsForHighlightItem:(id)arg1;
- (id)fetchParentHighlightItemsForHighlightItems:(id)arg1;
- (id)highlightUUIDsWithVisibilityStateChange;
- (id)initWithLibrary:(id)arg1 forKind:(unsigned short)arg2;
- (unsigned short)kind;
- (id)library;
- (void)setVisibilityState:(unsigned short)arg1 forHighlightItem:(id)arg2;
- (id)visibilityStateByDayHighlighItemUUID;
- (unsigned short)visibilityStateForHighlightItem:(id)arg1;

@end