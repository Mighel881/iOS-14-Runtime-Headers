/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVGlobalOperationQueue : NSObject {
    NSOperationQueue * _operationQueue;
}

@property (readonly, copy) NSArray *unfinishedOperations;

+ (id)defaultQueue;

- (void)dealloc;
- (id)description;
- (void)enqueueOperation:(id)arg1;
- (id)init;
- (id)unfinishedOperations;

@end
