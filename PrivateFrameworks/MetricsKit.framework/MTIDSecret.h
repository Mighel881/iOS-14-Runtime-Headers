/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

@interface MTIDSecret : NSObject {
    NSDate * _expirationDate;
    bool  _isSynchronized;
    NSString * _key;
    NSString * _value;
}

@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic) bool isSynchronized;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)debugInfo;
- (id)description;
- (id)expirationDate;
- (id)init;
- (id)initWithKey:(id)arg1 value:(id)arg2 expirationDate:(id)arg3;
- (id)initWithRawValue:(id)arg1;
- (id)initWithScheme:(id)arg1 date:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isSynchronized;
- (id)key;
- (id)rawValue;
- (void)setExpirationDate:(id)arg1;
- (void)setIsSynchronized:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end