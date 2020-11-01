/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHChangeRequestHelper : NSObject {
    <PHChangeRequest> * _changeRequest;
    <PLClientAuthorization> * _clientAuthorization;
    bool  _isMutated;
    bool  _isNewRequest;
    NSMutableDictionary * _mutations;
    NSMutableSet * _nilMutations;
    NSManagedObjectID * _objectID;
    PHPerformChangesRequest * _request;
    NSString * _uuid;
}

@property (nonatomic) <PHChangeRequest> *changeRequest;
@property (nonatomic, readonly) NSString *clientBundleIdentifier;
@property (nonatomic, readonly) NSString *clientDisplayName;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (getter=isClientInLimitedLibraryMode, nonatomic, readonly) bool clientInLimitedLibraryMode;
@property (nonatomic, readonly) NSString *fetchFilterIdentifier;
@property (getter=isMutated, nonatomic) bool mutated;
@property (nonatomic, readonly) NSMutableDictionary *mutations;
@property (getter=isNewRequest, nonatomic) bool newRequest;
@property (nonatomic, readonly) NSMutableSet *nilMutations;
@property (nonatomic, retain) NSManagedObjectID *objectID;
@property (nonatomic) PHPerformChangesRequest *request;
@property (nonatomic, readonly) NSString *uuid;

+ (id)changeRequestForObject:(id)arg1;
+ (id)changeRequestWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;

- (void).cxx_destruct;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (id)changeRequest;
- (id)clientBundleIdentifier;
- (id)clientDisplayName;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)description;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)fetchFilterIdentifier;
- (id)init;
- (id)initForNewObjectWithChangeRequest:(id)arg1;
- (id)initForNewObjectWithUUID:(id)arg1 changeRequest:(id)arg2;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2 changeRequest:(id)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2 isNew:(bool)arg3 changeRequest:(id)arg4;
- (id)initWithXPCDict:(id)arg1 changeRequest:(id)arg2 request:(id)arg3 clientAuthorization:(id)arg4;
- (bool)isClientEntitled;
- (bool)isClientInLimitedLibraryMode;
- (bool)isMutated;
- (bool)isNewRequest;
- (id)mutations;
- (id)nilMutations;
- (id)objectID;
- (id)placeholderForCreatedObjectWithClass:(Class)arg1 changeRequest:(id)arg2;
- (bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (id)request;
- (void)setChangeRequest:(id)arg1;
- (void)setMutated:(bool)arg1;
- (void)setNewRequest:(bool)arg1;
- (void)setObjectID:(id)arg1;
- (void)setRequest:(id)arg1;
- (id)uuid;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;

@end