/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
 */

@interface _VOSProfileSlaveCommand : NSObject <NSSecureCoding> {
    VOSCommand * _command;
    unsigned long long  _context;
    _VOSProfileCommand * _masterProfileCommand;
    unsigned long long  _pressCount;
}

@property (nonatomic, retain) VOSCommand *command;
@property (nonatomic) unsigned long long context;
@property (nonatomic) _VOSProfileCommand *masterProfileCommand;
@property (nonatomic) unsigned long long pressCount;

+ (id)profileSlaveCommandWithCommand:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3;
+ (id)profileSlaveCommandWithStringValue:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithCommand:(id)arg1 context:(unsigned long long)arg2 pressCount:(unsigned long long)arg3;
- (id)command;
- (unsigned long long)context;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)masterProfileCommand;
- (unsigned long long)pressCount;
- (void)setCommand:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setMasterProfileCommand:(id)arg1;
- (void)setPressCount:(unsigned long long)arg1;

@end