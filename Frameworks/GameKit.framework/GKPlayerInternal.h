/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, NSString, NSDate, NSDictionary, GKGameInternal;

@interface GKPlayerInternal : GKInternalRepresentation  {
    NSString *_playerID;
    NSString *_alias;
    NSString *_status;
    NSDate *_lastSeenDate;
    BOOL _purpleBuddyAccount;
    unsigned int _validPieces;
    NSString *_accountName;
    BOOL _underage;
    BOOL _findable;
    BOOL _photoPending;
    NSString *_firstName;
    NSString *_lastName;
    int _numberOfFriends;
    int _numberOfFriendsInCommon;
    int _numberOfGames;
    int _numberOfGamesInCommon;
    int _numberOfAchievements;
    int _numberOfAchievementPoints;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
    NSArray *_emailAddresses;
    NSDictionary *_photos;
    NSArray *_friends;
}

@property(retain) NSString * playerID;
@property(retain) NSString * alias;
@property(retain) NSString * status;
@property(retain) NSDate * lastSeenDate;
@property(getter=isPurpleBuddyAccount) BOOL purpleBuddyAccount;
@property unsigned int validPieces;
@property(retain) NSString * accountName;
@property(getter=isUnderage) BOOL underage;
@property(getter=isFindable) BOOL findable;
@property(getter=isPhotoPending) BOOL photoPending;
@property(retain) NSString * firstName;
@property(retain) NSString * lastName;
@property int numberOfFriends;
@property int numberOfFriendsInCommon;
@property int numberOfGames;
@property int numberOfGamesInCommon;
@property int numberOfAchievements;
@property int numberOfAchievementPoints;
@property(retain) NSDate * lastPlayedDate;
@property(retain) GKGameInternal * lastPlayedGame;
@property(retain) NSArray * emailAddresses;
@property(retain) NSDictionary * photos;
@property(retain) NSArray * friends;

+ (id)codedPropertyKeys;

- (void)setPhotos:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setNumberOfAchievementPoints:(int)arg1;
- (void)setNumberOfGamesInCommon:(int)arg1;
- (void)setNumberOfGames:(int)arg1;
- (void)setNumberOfFriendsInCommon:(int)arg1;
- (void)setNumberOfFriends:(int)arg1;
- (void)setPhotoPending:(BOOL)arg1;
- (BOOL)isPhotoPending;
- (void)setFindable:(BOOL)arg1;
- (BOOL)isFindable;
- (void)setUnderage:(BOOL)arg1;
- (void)setValidPieces:(unsigned int)arg1;
- (unsigned int)validPieces;
- (void)setLastSeenDate:(id)arg1;
- (id)lastSeenDate;
- (void)setLastPlayedDate:(id)arg1;
- (void)setNumberOfAchievements:(int)arg1;
- (id)lastPlayedDate;
- (void)setPurpleBuddyAccount:(BOOL)arg1;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setAlias:(id)arg1;
- (BOOL)isUnderage;
- (BOOL)isPurpleBuddyAccount;
- (void)setAccountName:(id)arg1;
- (id)accountName;
- (id)serverRepresentation;
- (void)setStatus:(id)arg1;
- (id)friends;
- (id)lastName;
- (id)firstName;
- (id)photos;
- (void)setFriends:(id)arg1;
- (id)emailAddresses;
- (id)alias;
- (int)numberOfAchievementPoints;
- (int)numberOfAchievements;
- (int)numberOfGamesInCommon;
- (int)numberOfGames;
- (int)numberOfFriendsInCommon;
- (int)numberOfFriends;
- (void)setLastPlayedGame:(id)arg1;
- (id)lastPlayedGame;
- (id)playerID;
- (void)setPlayerID:(id)arg1;
- (id)status;
- (id)description;
- (void)dealloc;

@end