//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMBubbleLayer, MMScrollView, MMUIButton, MMUIImageView, MMUILabel, UITableViewCell, UIView, WSVideoFlowTableViewCell, WSVideoModel;
@protocol WSVideoWowEducateDelegate;

@interface WSVideoWowEducateViewController : MMUIViewController
{
    UIView *_coverView;
    MMScrollView *_contentFloatView;
    MMUILabel *_tipsTitleLabel;
    MMUIButton *_confirmButton;
    MMUIImageView *_tipImageView;
    MMBubbleLayer *_contentFloatViewMask;
    _Bool _needShowEduTipImageView;
    id <WSVideoWowEducateDelegate> _delegate;
    WSVideoModel *_videoModel;
    WSVideoFlowTableViewCell *_cell;
    UITableViewCell *_fromView;
}

@property(retain, nonatomic) UITableViewCell *fromView; // @synthesize fromView=_fromView;
@property(nonatomic) _Bool needShowEduTipImageView; // @synthesize needShowEduTipImageView=_needShowEduTipImageView;
@property(nonatomic) __weak WSVideoFlowTableViewCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) WSVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) __weak id <WSVideoWowEducateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)smartSetAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)animateHideWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)animatShowOnView:(id)arg1 refFrame:(struct CGRect)arg2;
- (void)pop;
- (void)internalLayout;
- (void)onConfirm:(id)arg1;
- (void)initTipImageView;
- (void)initWowConformButton;
- (void)initTipsLabel;
- (void)onTapCancel:(id)arg1;
- (void)initView;
- (void)viewDidLoad;

@end
