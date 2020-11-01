/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreConnect.framework/SoftwareUpdateCoreConnect
 */

@interface SUCoreConnectClientProxy : NSObject <NSSecureCoding, SUCoreConnectClientProxyProtocol> {
    NSString * _clientID;
    NSObject<OS_dispatch_queue> * _completionQueue;
    id /* block */  _progressBlock;
}

@property (nonatomic, readonly, retain) NSString *clientID;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ progressBlock;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientID;
- (id)completionQueue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)executeProgressBlock:(id)arg1;
- (id)initWithClientID:(id)arg1 completionQueue:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)initWithCoder:(id)arg1;
- (id /* block */)progressBlock;
- (id)summary;

@end