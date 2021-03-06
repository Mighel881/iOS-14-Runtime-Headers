/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTKeywordDetectorAssets : NSObject {
    NSString * _categoryKey;
    NSString * _configFile;
    NSString * _configVersion;
    NSDictionary * _decodedInfo;
    NSDictionary * _dictionary;
    NSString * _locale;
    NSString * _resourcePath;
}

@property (nonatomic, readonly) NSString *categoryKey;
@property (nonatomic, readonly) NSString *configFile;
@property (nonatomic, readonly) NSString *configVersion;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *resourcePath;

- (void).cxx_destruct;
- (id)VTSecondPassConfigPathNDAPI;
- (id)VTSecondPassConfigPathRecognizer;
- (bool)VTSecondPassConfigPathRecognizerExist;
- (float)VTSecondPassRecognizerScoreScaleFactor;
- (id)VTSecondPassRecognizerToken;
- (bool)VTSecondPassUseKeywordSpotting;
- (bool)_containsCategory:(id)arg1;
- (bool)_containsKey:(id)arg1 category:(id)arg2;
- (id)_decodeJson:(id)arg1;
- (id)_dictionary;
- (bool)_getBoolForKey:(id)arg1 category:(id)arg2 default:(bool)arg3;
- (id)_getNumberForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (id)_getStringForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (id)_hearstRTModelWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 locale:(id)arg3;
- (id)categoryKey;
- (id)configFile;
- (id)configVersion;
- (id)ctcKwdToPhraseIdMap;
- (id)dictionary;
- (id)initWithAssetPath:(id)arg1 categoryKey:(id)arg2 forLocale:(id)arg3;
- (id)latestHearstRTModel;
- (id)locale;
- (id)resourcePath;
- (id)supportedVTPhrasesInfo;

@end
