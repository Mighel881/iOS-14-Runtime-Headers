/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

@interface BSService : NSObject {
    BSServiceDomain * _domain;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSZeroingWeakReference * _lock_globalListener;
    NSMutableDictionary * _lock_instanceToListener;
    NSMutableArray * _lock_pendedConnections;
    BSServiceSpecification * _specification;
}

- (void).cxx_destruct;

@end
