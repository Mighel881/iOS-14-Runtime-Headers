/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageSearchResultCell : UICollectionViewCell <CKSearchResultCell> {
    CALayer * _bottomHairline;
    bool  _ck_editing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _marginInsets;
    CKSpotlightQueryResult * _result;
    UITableViewCell<CKConversationSearchCellProtocol> * _searchCell;
    NSString * _searchText;
    CALayer * _topHairline;
}

@property (getter=_ck_isEditing, setter=_ck_setEditing:, nonatomic) bool _ck_editing;
@property (nonatomic, readonly) CALayer *bottomHairline;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic, retain) CKSpotlightQueryResult *result;
@property (nonatomic, retain) UITableViewCell<CKConversationSearchCellProtocol> *searchCell;
@property (nonatomic, copy) NSString *searchText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CALayer *topHairline;
@property (nonatomic) double widthForDeterminingAvatarVisibility;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (bool)_ck_isEditing;
- (void)_ck_setEditing:(bool)arg1;
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;
- (unsigned long long)_viewConfigurationState;
- (id)bottomHairline;
- (id)configurationState;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (void)forwardStateToEmbeddedCell:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (id)result;
- (id)searchCell;
- (id)searchText;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setResult:(id)arg1;
- (void)setSearchCell:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setWidthForDeterminingAvatarVisibility:(double)arg1;
- (id)topHairline;
- (double)widthForDeterminingAvatarVisibility;

@end