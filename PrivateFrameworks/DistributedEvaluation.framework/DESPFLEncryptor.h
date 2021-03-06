/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
 */

@interface DESPFLEncryptor : NSObject {
    NSString * _privatizationIdentifier;
    id /* block */  _privatizer;
    NSDictionary * _recipeUserInfo;
    long long  _version;
    double  _weight;
}

@property (nonatomic, copy) NSString *privatizationIdentifier;
@property (nonatomic, copy) id /* block */ privatizer;
@property (nonatomic) long long version;
@property (nonatomic) double weight;

+ (void)initialize;
+ (bool)privatizationSupported;

- (void).cxx_destruct;
- (id)_encryptedDataWithPublicKey:(id)arg1 noiseable:(id)arg2 error:(id*)arg3;
- (void)_maybeQuantizeDataTransportOfNoisable:(id)arg1;
- (id)_newNoiseable;
- (id)_requestedTransport;
- (id)encryptedAndPrivatizedDataWithPublicKey:(id)arg1 inPlaceNumbers:(float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
- (id)encryptedAndPrivatizedDataWithPublicKey:(id)arg1 numbers:(const float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
- (id)encryptedDataWithPublicKey:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (id)encryptedDataWithPublicKey:(id)arg1 dataFloatNumbers:(const float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
- (id)encryptedDataWithPublicKey:(id)arg1 dataNumbers:(const double*)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
- (id)encryptedDataWithPublicKey:(id)arg1 inPlaceDataFloatNumbers:(float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
- (id)encryptedDataWithPublicKey:(id)arg1 inPlaceDataNumbers:(double*)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
- (id)init;
- (id)initWithRecipe:(id)arg1;
- (id)initWithRecipeUserInfo:(id)arg1;
- (id)privatizationIdentifier;
- (id /* block */)privatizer;
- (void)setPrivatizationIdentifier:(id)arg1;
- (void)setPrivatizer:(id /* block */)arg1;
- (void)setVersion:(long long)arg1;
- (void)setWeight:(double)arg1;
- (long long)version;
- (double)weight;

@end
