/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDAttachmentStore : NSObject

+ (id)sharedInstance;

- (id)_IMTransferGUIDForMessageGUID:(id)arg1 andIndex:(unsigned long long)arg2;
- (bool)_cloudkitSyncingEnabled;
- (bool)_fileEligibleForCacheDelete:(id)arg1;
- (struct _IMDAttachmentRecordStruct { }*)_loadAttachmentRecordForGUID:(id)arg1;
- (id)_newFileTransferFromIMDAttachmentRecordRef:(struct _IMDAttachmentRecordStruct { }*)arg1;
- (void)_reindexMessage:(id)arg1 completion:(id /* block */)arg2;
- (bool)_shouldEarlyReturnForWrongItemType:(id)arg1;
- (bool)_transferCanBeMarkedPurgable:(id)arg1;
- (bool)_updateAttachmentGUID:(id)arg1 withGUID:(id)arg2;
- (bool)_updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1 andUpdateTransfer:(id)arg2;
- (id)_updatedMessageBody:(id)arg1 replacingGuid:(id)arg2 withGuid:(id)arg3;
- (id)attachmentWithGUID:(id)arg1;
- (bool)deleteAttachmentDataForTransfer:(id)arg1;
- (bool)deleteAttachmentWithGUID:(id)arg1;
- (bool)deleteAttachmentsWithGUIDs:(id)arg1;
- (id)fileTransferWithAttachmentRecordRef:(struct _IMDAttachmentRecordStruct { }*)arg1;
- (id)getAuxVideoPath:(id)arg1;
- (bool)isSafeToDeleteAttachmentAtPath:(id)arg1;
- (void)markAllAttachmentsAsNeedingCloudKitSync;
- (void)markAllAttachmentsAsNotPurgeable;
- (void)markAttachmentPurgeable:(id)arg1;
- (void)markFileAsPurgeable:(id)arg1;
- (bool)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2;
- (bool)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2;
- (bool)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2 chatGUID:(id)arg3 storeAtExternalLocation:(bool)arg4;
- (bool)updateAttachment:(id)arg1;
- (bool)updateAttachment:(id)arg1 chatGUID:(id)arg2 storeAtExternalPath:(bool)arg3;
- (bool)updateLegacyTransferGUIDIfNeeded:(id)arg1;
- (bool)updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1;

@end
