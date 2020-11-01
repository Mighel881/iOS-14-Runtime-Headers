/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteAdvisory : NSObject <NSSecureCoding> {
    bool  _alwaysClickable;
    <GEOServerFormattedString> * _cardDetails;
    <GEOServerFormattedString> * _cardTitle;
    <GEOServerFormattedString> * _inlineTitle;
    NSArray * _routeIncidents;
}

@property (nonatomic) bool alwaysClickable;
@property (nonatomic, retain) <GEOServerFormattedString> *cardDetails;
@property (nonatomic, retain) <GEOServerFormattedString> *cardTitle;
@property (nonatomic, retain) <GEOServerFormattedString> *inlineTitle;
@property (nonatomic, retain) NSArray *routeIncidents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)alwaysClickable;
- (id)cardDetails;
- (id)cardTitle;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoAdvisoryNotice:(id)arg1;
- (id)initWithGeoAdvisoryNotice:(id)arg1 incidents:(id)arg2;
- (id)initWithMessage:(id)arg1 incidents:(id)arg2;
- (id)inlineTitle;
- (id)routeIncidents;
- (void)setAlwaysClickable:(bool)arg1;
- (void)setCardDetails:(id)arg1;
- (void)setCardTitle:(id)arg1;
- (void)setInlineTitle:(id)arg1;
- (void)setRouteIncidents:(id)arg1;

@end