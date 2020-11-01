/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFHealthKitAccessResource : WFGranularAccessResource <WFActionEventObserver> {
    WFAction * _action;
    unsigned long long  _globalLevelStatus;
    HKHealthStore * _healthStore;
}

@property (nonatomic) WFAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (readonly) Class superclass;

+ (bool)alwaysMakeAvailable;
+ (bool)isSystemResource;
+ (Class)perWorkflowStateClass;

- (void).cxx_destruct;
- (id)action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)associatedAppIdentifier;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;
- (unsigned long long)globalLevelStatus;
- (id)healthStore;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)initWithDefinition:(id)arg1;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedWorkflowLevelDeniedStatusMessage;
- (id)localizedWorkflowLevelMessageTemplate;
- (id)localizedWorkflowLevelNotDeterminedStatusMessage;
- (id)localizedWorkflowLevelPromptTemplate;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)objectTypes;
- (id)objectTypesForAccessType:(id)arg1;
- (id)protectedResourceDescription;
- (id)readTypes;
- (id)readableUnauthorizedResourceDescription;
- (void)refreshAvailability;
- (id)requestedEntries;
- (void)setAction:(id)arg1;
- (id)writeTypes;

@end