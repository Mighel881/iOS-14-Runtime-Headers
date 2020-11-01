/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLBufferErrorLog : NSObject <MTLFunctionLog> {
    unsigned long long  _addressSpace;
    MTLArgument * _argument;
    <MTLBuffer> * _buffer;
    <MTLFunctionLogDebugLocation> * _debugLocation;
    NSString * _encoderLabel;
    unsigned long long  _encoderMethodIdentifier;
    NSArray * _errorStackTrace;
    <MTLFunction> * _function;
    unsigned long long  _offset;
    unsigned long long  _operation;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long addressSpace;
@property (nonatomic, readonly) MTLArgument *argument;
@property (nonatomic, readonly) <MTLBuffer> *buffer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <MTLFunctionLogDebugLocation> *debugLocation;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *encoderLabel;
@property (nonatomic) unsigned long long encoderMethodIdentifier;
@property (nonatomic, readonly) NSArray *errorStackTrace;
@property (nonatomic, readonly) <MTLFunction> *function;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) unsigned long long operation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (unsigned long long)addressSpace;
- (id)argument;
- (id)buffer;
- (void)dealloc;
- (id)debugLocation;
- (id)description;
- (id)encoderLabel;
- (unsigned long long)encoderMethodIdentifier;
- (id)errorStackTrace;
- (id)function;
- (id)initWithType:(unsigned long long)arg1 function:(id)arg2 encoderLabel:(id)arg3 addressSpace:(unsigned long long)arg4 buffer:(id)arg5 offset:(unsigned long long)arg6 operation:(unsigned long long)arg7 stackTrace:(id)arg8 argument:(id)arg9;
- (unsigned long long)offset;
- (unsigned long long)operation;
- (void)setEncoderMethodIdentifier:(unsigned long long)arg1;
- (unsigned long long)type;

@end