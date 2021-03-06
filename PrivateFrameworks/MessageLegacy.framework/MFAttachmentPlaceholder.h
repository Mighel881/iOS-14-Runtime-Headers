/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentPlaceholder : NSObject {
    NSMutableDictionary * _jsonDictionary;
}

+ (id)_localStoreURLForFileData:(id)arg1 contentID:(id)arg2;
+ (id)_placeholderMagic;
+ (id)attachmentPlaceholderForData:(id)arg1 fileName:(id)arg2 type:(id)arg3 contentID:(id)arg4;
+ (id)attachmentPlaceholderForFileURL:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3 type:(id)arg4 contentID:(id)arg5;
+ (void)cloneFileAtURL:(id)arg1 toPlaceholderURL:(id)arg2;
+ (id)dataForPlaceholder:(id)arg1;
+ (bool)hasPlaceholderRepresentation:(id)arg1;
+ (bool)isPlaceholderSerializedRepresentation:(id)arg1;
+ (id)placeholder;
+ (id)placeholderDirectory;
+ (id)placeholderFromSerializedRepresentation:(id)arg1;
+ (id)placeholderRepresentations:(id)arg1;
+ (void)removePlaceholder:(id)arg1;
+ (void)removePlaceholderForFileURL:(id)arg1;
+ (id)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4;
+ (bool)setFileProtectionForFileAt:(id)arg1 error:(id*)arg2;
+ (bool)writeData:(id)arg1 forURL:(id)arg2;

- (void).cxx_destruct;
- (void)_setJSONDictionary:(id)arg1;
- (id)contentID;
- (id)description;
- (id)fileName;
- (unsigned long long)fileSize;
- (id)fileURL;
- (id)fileURLString;
- (id)init;
- (id)mimeType;
- (id)serializedRepresentation;
- (void)setContentID:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setFileURLString:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setUseMailDrop:(bool)arg1;
- (bool)useMailDrop;

@end
