/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteContentPreferences : NSObject <NSSecureCoding> {
    long long  _backgroundStyle;
    long long  _dateTimeStyle;
    long long  _homeGestureMode;
    bool  _reducesWhitePoint;
    bool  _suppressesBottomEdgeContent;
    bool  _suppressesNotifications;
}

+ (bool)supportsSecureCoding;

- (long long)backgroundStyle;
- (long long)dateTimeStyle;
- (void)encodeWithCoder:(id)arg1;
- (long long)homeGestureMode;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (bool)reducesWhitePoint;
- (bool)suppressesBottomEdgeContent;
- (bool)suppressesNotifications;

@end