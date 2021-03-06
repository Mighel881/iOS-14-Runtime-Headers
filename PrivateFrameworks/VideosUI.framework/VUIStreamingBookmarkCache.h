/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIStreamingBookmarkCache : NSObject {
    NSMutableDictionary * _bookmarkCacheStore;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_activeAccountChangedNotification:(id)arg1;
- (void)addBookmark:(id)arg1 resumeTime:(id)arg2 bookmarkTimestamp:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)removeBookmark:(id)arg1;
- (bool)resumeTimeAndTimestampByCanonical:(id)arg1 serverResumeTime:(id)arg2 serverBookmarkTimestamp:(id)arg3 mostRecentResumeTime:(id*)arg4 mostRecentBookmarkTimestamp:(id*)arg5;

@end
