/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriFindMy.framework/SiriFindMy
 */

@interface DeviceDetail : INObject

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *deviceClass;
@property (nonatomic) long long deviceLocality;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, retain) INPerson *deviceOwner;
@property (nonatomic, copy) NSString *emoji;
@property (nonatomic, copy) NSString *productName;
@property (nonatomic, copy) NSArray *productTypes;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
