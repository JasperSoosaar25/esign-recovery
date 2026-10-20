#pragma once
#import <Foundation/Foundation.h>

// Original class layout and property semantics; method bodies recovered separately.
@interface YYYMobileprovision : NSObject {
    BOOL _provisionsAllDevices;
    NSString * _name;
    NSString * _appIDName;
    NSString * _appID;
    NSString * _teamName;
    NSArray * _teamIdentifier;
    NSArray * _platform;
    NSString * _UUID;
    NSDate * _createDate;
    NSDate * _expirationDate;
    NSArray * _applicationIdentifierPrefix;
    NSArray * _provisionedDevices;
    NSArray * _developerCertificates;
    NSArray * _developerCertificatesFormatter;
    NSDictionary * _entitlements;
    NSDictionary * _info;
    NSData * _data;
}
@property(nonatomic,copy) NSString * name;
@property(nonatomic,copy) NSString * appIDName;
@property(nonatomic,copy) NSString * appID;
@property(nonatomic,copy) NSString * teamName;
@property(nonatomic,strong) NSArray * teamIdentifier;
@property(nonatomic,strong) NSArray * platform;
@property(nonatomic,copy) NSString * UUID;
@property(nonatomic,assign) BOOL provisionsAllDevices;
@property(nonatomic,copy) NSDate * createDate;
@property(nonatomic,copy) NSDate * expirationDate;
@property(nonatomic,strong) NSArray * applicationIdentifierPrefix;
@property(nonatomic,strong) NSArray * provisionedDevices;
@property(nonatomic,strong) NSArray * developerCertificates;
@property(nonatomic,strong) NSArray * developerCertificatesFormatter;
@property(nonatomic,strong) NSDictionary * entitlements;
@property(nonatomic,strong) NSDictionary * info;
@property(nonatomic,strong) NSData * data;
- (id)initWithData:(id)data;
- (BOOL)setup;
- (BOOL)containsCertificate:(id)certificate;
@end
