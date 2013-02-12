/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMSystemProxySettingsFetcher : NSObject {
    id _delegate;
    NSString *_host;
    unsigned short _port;
    NSString *_proxyAccount;
    NSString *_proxyHost;
    NSString *_proxyPassword;
    unsigned short _proxyPort;
    int _proxyProtocol;
}

@property(copy) NSString * _host;
@property unsigned short _port;
@property(copy) NSString * _proxyAccount;
@property(copy) NSString * _proxyHost;
@property(copy) NSString * _proxyPassword;
@property unsigned short _proxyPort;
@property int _proxyProtocol;
@property id delegate;

- (void)_callAccountSettingsDelegateMethod;
- (void)_callProxySettingsDelegateMethod;
- (void)_getProxyAccountAndPasswordFromKeychain;
- (id)_host;
- (unsigned short)_port;
- (id)_proxyAccount;
- (id)_proxyHost;
- (id)_proxyPassword;
- (unsigned short)_proxyPort;
- (int)_proxyProtocol;
- (void)_takeProxySettingsFromDictionary:(struct __CFDictionary { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 delegate:(id)arg3;
- (id)initWithProxyProtocol:(int)arg1 proxyHost:(id)arg2 proxyPort:(unsigned short)arg3 delegate:(id)arg4;
- (void)retrieveProxyAccountSettings;
- (void)retrieveProxySettings;
- (void)setDelegate:(id)arg1;
- (void)set_host:(id)arg1;
- (void)set_port:(unsigned short)arg1;
- (void)set_proxyAccount:(id)arg1;
- (void)set_proxyHost:(id)arg1;
- (void)set_proxyPassword:(id)arg1;
- (void)set_proxyPort:(unsigned short)arg1;
- (void)set_proxyProtocol:(int)arg1;

@end
