/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFStockData : NSObject <NSCopying, NSSecureCoding, WFNaming> {
    NSDecimalNumber * _changeInPrice;
    NSString * _companyName;
    NSString * _currency;
    NSDecimalNumber * _highPrice;
    NSURL * _infoURL;
    NSDecimalNumber * _lowPrice;
    NSDecimalNumber * _openPrice;
    NSDecimalNumber * _price;
    NSDate * _timeQuoteWasLastUpdated;
    NSDecimalNumber * _yearHighPrice;
    NSDecimalNumber * _yearLowPrice;
}

@property (nonatomic, readonly) NSDecimalNumber *changeInPrice;
@property (nonatomic, readonly) NSString *companyName;
@property (nonatomic, readonly) NSString *currency;
@property (nonatomic, readonly) NSDecimalNumber *highPrice;
@property (nonatomic, readonly) NSURL *infoURL;
@property (nonatomic, readonly) NSDecimalNumber *lowPrice;
@property (nonatomic, readonly) NSDecimalNumber *openPrice;
@property (nonatomic, readonly) NSDecimalNumber *price;
@property (nonatomic, readonly) NSDate *timeQuoteWasLastUpdated;
@property (nonatomic, readonly, copy) NSString *wfName;
@property (nonatomic, readonly) NSDecimalNumber *yearHighPrice;
@property (nonatomic, readonly) NSDecimalNumber *yearLowPrice;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)changeInPrice;
- (id)companyName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currency;
- (void)encodeWithCoder:(id)arg1;
- (id)highPrice;
- (id)infoURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithStock:(id)arg1;
- (id)lowPrice;
- (id)openPrice;
- (id)price;
- (id)timeQuoteWasLastUpdated;
- (id)wfName;
- (id)yearHighPrice;
- (id)yearLowPrice;

@end