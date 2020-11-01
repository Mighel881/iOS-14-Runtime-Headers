/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
 */

@interface DISessionSecurityPort : NSObject <NSCoding, NSSecureCoding> {
    NSMachPort * _port;
}

@property (retain) NSMachPort *port;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)port;
- (void)setPort:(id)arg1;

@end