/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
 */

@interface NSISObjectiveLinearExpression : NSObject {
    struct { 
        struct { /* ? */ } *values; 
        unsigned short count; 
        unsigned short capacity; 
        unsigned int key; 
        unsigned int heap_position; 
    }  _constant;
    NSISEngine * _engine;
    struct { 
        struct { 
            struct { /* ? */ } **values; 
            int count; 
            unsigned int capacity; 
        } heap; 
        struct { /* ? */ } *values; 
        unsigned int count; 
        unsigned int tombstones; 
        unsigned int size; 
        unsigned short grow_shift; 
    }  _priorityMap;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithEngine:(id)arg1;

@end