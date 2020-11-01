/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
 */

@interface CCVegaMark : NSObject <CCVegaMarkInterface> {
    JSValue * _items;
    JSValue * mark;
}

@property (nonatomic, retain) CALayer *caLayer;
@property (nonatomic, readonly) bool clip;
@property (nonatomic, readonly) bool interactive;
@property (nonatomic) bool isDirty;
@property (nonatomic, readonly) unsigned long long itemCount;
@property (retain) JSValue *mark;
@property (nonatomic, readonly) NSString *marktype;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *role;
@property (nonatomic, readonly) double zindex;

- (void).cxx_destruct;
- (id)caLayer;
- (bool)clip;
- (id)getString:(id)arg1 defaultValue:(id)arg2;
- (id)initWithJSValue:(id)arg1;
- (bool)interactive;
- (bool)isDirty;
- (bool)isEqual:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemCount;
- (id)mark;
- (id)marktype;
- (id)name;
- (id)role;
- (void)setCaLayer:(id)arg1;
- (void)setIsDirty:(bool)arg1;
- (void)setMark:(id)arg1;
- (double)zindex;

@end