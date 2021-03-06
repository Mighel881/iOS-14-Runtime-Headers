/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
 */

@interface NUMetalQuad : CLKUIQuad {
    double  _baseTime;
    unsigned int  _isPrepared;
    NURenderer * _renderer;
    NUResources * _resources;
    NUScene * _scene;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewport;
}

@property (nonatomic, retain) NUScene *scene;

- (void).cxx_destruct;
- (id)initWithResources:(id)arg1;
- (bool)prepareForTime:(double)arg1;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (void)setupForQuadView:(id)arg1;

@end
