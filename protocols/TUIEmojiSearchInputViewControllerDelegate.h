/* Generated by RuntimeBrowser.
 */

@protocol TUIEmojiSearchInputViewControllerDelegate <NSObject>

@required

- (void)emojiSearchTextFieldDidBecomeActive:(UITextField *)arg1;
- (void)emojiSearchTextFieldDidBecomeInactive:(UITextField *)arg1;
- (void)emojiSearchTextFieldWillBecomeActive:(UITextField *)arg1;
- (void)emojiSearchTextFieldWillBecomeInactive:(UITextField *)arg1;

@optional

- (void)emojiSearchWillInsertEmoji:(NSString *)arg1 forSearchQuery:(NSString *)arg2;

@end