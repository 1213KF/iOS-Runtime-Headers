/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface LBSGAddressComponent : PBCodable {
    NSInteger _featureType;
    NSString *_locale;
    NSString *_name;
}

@property(retain) NSString *locale; /* unknown property attribute: V_locale */
@property NSInteger featureType; /* unknown property attribute: V_featureType */
@property(retain) NSString *name; /* unknown property attribute: V_name */
@property(readonly) BOOL hasLocale;

- (void)dealloc;
- (id)description;
- (NSInteger)featureType;
- (BOOL)hasLocale;
- (id)init;
- (id)locale;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setFeatureType:(NSInteger)arg1;
- (void)setLocale:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end