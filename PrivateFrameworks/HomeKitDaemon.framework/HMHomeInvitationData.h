/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMHomeInvitationData : NSObject <NSSecureCoding> {
    NSDate * _endDate;
    NSUUID * _identifier;
    int  _invitationState;
    NSDate * _startDate;
}

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic) int invitationState;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (id)homeInvitationStateDescription:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitationState:(int)arg1 invitationIdentifier:(id)arg2 expiryDate:(id)arg3;
- (int)invitationState;
- (void)setEndDate:(id)arg1;
- (void)setInvitationState:(int)arg1;
- (id)startDate;

@end
