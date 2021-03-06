/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

@interface BSServiceDomain : NSObject {
    NSDictionary * _identifierToService;
    NSString * _listenerEndpointDescription;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _lock_incomingConnections;
    BSServiceDomainSpecification * _specification;
    BSXPCServiceConnectionListener * _xpcListener;
}

- (void).cxx_destruct;
- (id)init;

@end
