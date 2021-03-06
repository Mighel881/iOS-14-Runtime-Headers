/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMediaTokenServiceKeychainStore : NSObject {
    NSString * _clientIdentifier;
    NSString * _keychainAccessGroup;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, retain) NSString *keychainAccessGroup;

- (void).cxx_destruct;
- (struct __CFDictionary { }*)_copyKeychainQuery;
- (void)_removeTokenFromKeychain;
- (id)clientIdentifier;
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2;
- (id)keychainAccessGroup;
- (id)retrieveToken;
- (void)setKeychainAccessGroup:(id)arg1;
- (bool)storeToken:(id)arg1;

@end
