//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CNetworkStatusExt-Protocol.h"
#import "IChatMigrationServerExt-Protocol.h"
#import "MMLoadSessionExt-Protocol.h"

@class MMUIActivityIndicatorView, NSString, UIImage, UIImageView, UILabel;

@interface WXGMigrationServerViewController : MMUIViewController <IChatMigrationServerExt, CNetworkStatusExt, MMLoadSessionExt>
{
    UIImageView *m_qrCodeImageView;
    UILabel *m_qrCodeTipLabel;
    MMUIActivityIndicatorView *m_qrCodeLoadingView;
    UIImage *m_qrcodeImage;
    int m_retryGetQRCodeTimes;
    _Bool _isMigrationAllAndNeedWaitLoad;
    _Bool _isSessionDataLoadFinish;
}

@property(nonatomic) _Bool isSessionDataLoadFinish; // @synthesize isSessionDataLoadFinish=_isSessionDataLoadFinish;
@property(nonatomic) _Bool isMigrationAllAndNeedWaitLoad; // @synthesize isMigrationAllAndNeedWaitLoad=_isMigrationAllAndNeedWaitLoad;
- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onMigrationServerAlertCode:(unsigned long long)arg1;
- (void)onMigrationServerNotifyCode:(unsigned long long)arg1;
- (void)onGetQRCodeImg:(id)arg1;
- (void)onLoadDataFinished;
- (void)loadSessionArrayFinishAndShowQRCode;
- (void)p_setQRCodeTipLabelWithText:(id)arg1;
- (void)p_makeQRCodeImageFailureFinishState;
- (void)p_makeQRCodeImageFinishState:(id)arg1 withText:(id)arg2;
- (void)p_makeQRCodeLoadingState;
- (void)onPressLeftNavigationButton;
- (void)p_popNavigationController;
- (void)popToSettingViewController;
- (void)dealloc;
- (void)registerLoadSessionExtension;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

