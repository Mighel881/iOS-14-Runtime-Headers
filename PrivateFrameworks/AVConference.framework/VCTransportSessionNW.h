/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCTransportSessionNW : VCTransportSession {
    NSObject<OS_nw_connection> * _connection;
    NSString * _connectionID;
    bool  _didScheduleReceive;
    void * _handlerContext;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    bool  _isIPv6;
    struct tagVCNWConnectionMonitor { } * _monitor;
    int  _networkInterfaceType;
    unsigned int  _networkMTU;
    int (* _notificationHandler;
    int (* _packetEventHandler;
}

@property (readonly) NSObject<OS_nw_connection> *nwConnection;

- (void)createNWMonitor;
- (int)createVFD:(int*)arg1 forStreamType:(unsigned int)arg2;
- (void)dealloc;
- (void)destroyNWMonitor;
- (void)destroyNWMonitorInternal;
- (int)dupNWConnectionBackingSocket;
- (void)handleStateChanges:(int)arg1 error:(id)arg2 semaphore:(id)arg3 operationResult:(bool*)arg4;
- (id)initWithNWConnectionID:(id)arg1 handlerQueue:(id)arg2 context:(void*)arg3 notificationHandler:(int (*)arg4 eventHandler:(int (*)arg5;
- (void)initializeInterfaceType;
- (bool)initializeIsIPv6;
- (bool)initializeNetworkMTU;
- (bool)isIPv6;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;
- (id)nwConnection;
- (bool)setStateChangeHandlerWithResult:(bool*)arg1 semaphore:(id)arg2;
- (bool)setupNWConnection;
- (void)start;
- (void)stop;

@end