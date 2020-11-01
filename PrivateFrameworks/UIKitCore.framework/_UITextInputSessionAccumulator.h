/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextInputSessionAccumulator : NSObject {
    id /* block */  _block;
    unsigned long long  _depth;
    NSString * _name;
    long long  _type;
    unsigned long long  _values;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly) unsigned long long depth;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long type;

+ (id)accumulatorWithName:(id)arg1 type:(long long)arg2 depth:(unsigned long long)arg3 block:(id /* block */)arg4;

- (void).cxx_destruct;
- (id /* block */)block;
- (unsigned long long)depth;
- (void)enumerateAnalytics:(id /* block */)arg1;
- (void)increaseWithActions:(id)arg1;
- (id)name;
- (void)reset;
- (long long)type;

@end