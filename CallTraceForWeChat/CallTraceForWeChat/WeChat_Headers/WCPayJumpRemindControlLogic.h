//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"

@class MMWebViewController, NSString, WCPayJumpRemindInfo;
@protocol MMUIViewControllerDelegate;

@interface WCPayJumpRemindControlLogic : MMObject <MMTipsViewControllerDelegate, MMWebViewDelegate>
{
    unsigned int _clientScene;
    unsigned int _payScene;
    CDUnknownBlockType _interceptBlk;
    CDUnknownBlockType _continueBlk;
    WCPayJumpRemindInfo *_jumpRemindInfo;
    id <MMUIViewControllerDelegate> _vcRootDelegate;
    MMWebViewController *_m_gdprUserKeyInfoWebviewController;
}

@property(retain, nonatomic) MMWebViewController *m_gdprUserKeyInfoWebviewController; // @synthesize m_gdprUserKeyInfoWebviewController=_m_gdprUserKeyInfoWebviewController;
@property(nonatomic) unsigned int payScene; // @synthesize payScene=_payScene;
@property(nonatomic) unsigned int clientScene; // @synthesize clientScene=_clientScene;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> vcRootDelegate; // @synthesize vcRootDelegate=_vcRootDelegate;
@property(retain, nonatomic) WCPayJumpRemindInfo *jumpRemindInfo; // @synthesize jumpRemindInfo=_jumpRemindInfo;
@property(copy, nonatomic) CDUnknownBlockType continueBlk; // @synthesize continueBlk=_continueBlk;
@property(copy, nonatomic) CDUnknownBlockType interceptBlk; // @synthesize interceptBlk=_interceptBlk;
- (void).cxx_destruct;
- (void)excuteBlk:(_Bool)arg1 nativepath:(id)arg2;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)handleJumpUrl;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)handleJumpRemindInfo:(id)arg1 clientScene:(unsigned int)arg2 payScene:(unsigned int)arg3 vcRootDelegate:(id)arg4 onIntercept:(CDUnknownBlockType)arg5 onContinue:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
