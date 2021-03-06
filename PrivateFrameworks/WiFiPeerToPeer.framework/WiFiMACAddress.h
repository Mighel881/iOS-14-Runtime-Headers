/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
 */

@interface WiFiMACAddress : NSObject <NSSecureCoding> {
    NSData * _data;
}

@property (readonly) NSData *data;
@property (readonly) NSData *ipv6LinkLocalAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithByte1:(unsigned char)arg1 byte2:(unsigned char)arg2 byte3:(unsigned char)arg3 byte4:(unsigned char)arg4 byte5:(unsigned char)arg5 byte6:(unsigned char)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)ipv6LinkLocalAddress;
- (bool)isEqual:(id)arg1;

@end
