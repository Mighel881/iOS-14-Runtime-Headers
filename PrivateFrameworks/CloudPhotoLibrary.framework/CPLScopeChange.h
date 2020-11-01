/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLScopeChange : CPLRecordChange <NSCopying, NSSecureCoding> {
    bool  _activated;
    CPLLibraryInfo * _libraryInfo;
    CPLLibraryState * _libraryState;
    unsigned long long  _pullTaskItem;
    CPLEngineScope * _scope;
    long long  _scopeType;
    CPLShare * _share;
}

@property (nonatomic, readonly) CPLAccountFlags *accountFlags;
@property (getter=isActivated, nonatomic) bool activated;
@property (nonatomic, readonly) NSDate *deleteDate;
@property (getter=isDisabled, nonatomic, readonly) bool disabled;
@property (nonatomic, readonly) NSDate *disabledDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) CPLLibraryInfo *libraryInfo;
@property (nonatomic, retain) CPLLibraryState *libraryState;
@property (nonatomic) unsigned long long pullTaskItem;
@property (nonatomic, copy) NSDate *recordModificationDate;
@property (nonatomic, retain) CPLEngineScope *scope;
@property (nonatomic) long long scopeType;
@property (nonatomic, copy) CPLScopedIdentifier *scopedIdentifier;
@property (nonatomic, retain) CPLShare *share;

+ (bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (id)descriptionForScopeType:(long long)arg1;
+ (id)mappingForScopeTypeDescription;
+ (id)newDeleteScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (id)newScopeChangeInferClassWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (id)newScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (Class)scopeChangeClassForType:(long long)arg1;
+ (bool)shouldAutoActivateScopeWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)_scopedIdentifier;
- (void)_setChangeType:(unsigned long long)arg1;
- (id)accountFlags;
- (id)assetCountPerType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)defaultFlags;
- (id)deleteDate;
- (id)description;
- (id)disabledDate;
- (id)initWithScopeIdentifier:(id)arg1 type:(long long)arg2;
- (bool)isActivated;
- (bool)isDisabled;
- (id)libraryInfo;
- (id)libraryState;
- (unsigned long long)pullTaskItem;
- (id)redactedDescription;
- (id)scope;
- (id)scopeIdentifier;
- (long long)scopeType;
- (void)setActivated:(bool)arg1;
- (void)setLibraryInfo:(id)arg1;
- (void)setLibraryState:(id)arg1;
- (void)setPullTaskItem:(unsigned long long)arg1;
- (void)setScope:(id)arg1;
- (void)setScopeType:(long long)arg1;
- (void)setShare:(id)arg1;
- (id)share;
- (void)udpateScopeFromScopeChange:(id)arg1 direction:(unsigned long long)arg2 didHaveChanges:(bool*)arg3;

@end