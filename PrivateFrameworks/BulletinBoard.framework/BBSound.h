/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSDictionary, NSString;

@interface BBSound : NSObject <BBUniquableObject, NSCopying, NSSecureCoding> {
    NSString *_accountIdentifier;
    int _alertType;
    NSString *_audioCategory;
    double _maxDuration;
    NSString *_ringtoneName;
    NSString *_songPath;
    unsigned long long _soundBehavior;
    long long _soundType;
    unsigned int _systemSoundID;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    NSDictionary *_vibrationPattern;
    bool_repeats;
}

@property(copy) NSString * accountIdentifier;
@property int alertType;
@property(copy) NSString * audioCategory;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property double maxDuration;
@property(getter=isRepeating) bool repeats;
@property(copy) NSString * ringtoneName;
@property(copy) NSString * songPath;
@property unsigned long long soundBehavior;
@property long long soundType;
@property(readonly) Class superclass;
@property unsigned int systemSoundID;
@property(copy) NSString * toneIdentifier;
@property(copy) NSString * vibrationIdentifier;
@property(copy) NSDictionary * vibrationPattern;

+ (id)_possiblyCachedAlertSoundForInitializedSound:(id)arg1;
+ (void)_removeCachedSound:(id)arg1;
+ (id)alertSoundWithSystemSoundID:(unsigned int)arg1;
+ (id)alertSoundWithSystemSoundPath:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)accountIdentifier;
- (int)alertType;
- (id)audioCategory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(bool)arg3 audioCategory:(id)arg4 maxDuration:(double)arg5;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(bool)arg3 audioCategory:(id)arg4;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(bool)arg3;
- (id)initWithSong:(id)arg1 vibrationPattern:(id)arg2 repeats:(bool)arg3 audioCategory:(id)arg4 maxDuration:(double)arg5;
- (id)initWithSong:(id)arg1 vibrationPattern:(id)arg2 repeats:(bool)arg3 maxDuration:(double)arg4;
- (id)initWithSong:(id)arg1 vibrationPattern:(id)arg2;
- (id)initWithSystemSoundID:(unsigned int)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (id)initWithSystemSoundID:(unsigned int)arg1 behavior:(unsigned long long)arg2;
- (id)initWithSystemSoundID:(unsigned int)arg1 soundPath:(id)arg2 behavior:(unsigned long long)arg3 vibrationPattern:(id)arg4;
- (id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;
- (id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned long long)arg2;
- (id)initWithToneAlert:(int)arg1 accountIdentifier:(id)arg2;
- (id)initWithToneAlert:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (id)initWithToneAlert:(int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRepeating;
- (double)maxDuration;
- (id)ringtoneName;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAlertType:(int)arg1;
- (void)setAudioCategory:(id)arg1;
- (void)setMaxDuration:(double)arg1;
- (void)setRepeats:(bool)arg1;
- (void)setRingtoneName:(id)arg1;
- (void)setSongPath:(id)arg1;
- (void)setSoundBehavior:(unsigned long long)arg1;
- (void)setSoundType:(long long)arg1;
- (void)setSystemSoundID:(unsigned int)arg1;
- (void)setToneIdentifier:(id)arg1;
- (void)setVibrationIdentifier:(id)arg1;
- (void)setVibrationPattern:(id)arg1;
- (id)songPath;
- (unsigned long long)soundBehavior;
- (long long)soundType;
- (unsigned int)systemSoundID;
- (id)toneIdentifier;
- (id)uniqueIdentifier;
- (id)vibrationIdentifier;
- (id)vibrationPattern;

@end