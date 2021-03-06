//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIButton, MMWebImageView, UILabel, UIView;

@interface GameVideoGalleryCell : UICollectionViewCell
{
    UIView *_bottomView;
    MMWebImageView *_imageView;
    UILabel *_titleView;
    UILabel *_subtitleView;
    UIView *_vertDividerView;
    UIView *_tagViewContainer;
    MMUIButton *_videoTypeView;
    UIView *_horiDividerView;
    id _cellData;
    CDUnknownBlockType _videoTypeAction;
}

- (void).cxx_destruct;
- (void)renderTagViews:(id)arg1;
- (void)clickVideoType;
- (void)updateVideoTypeState:(_Bool)arg1;
- (void)renderWithCellData:(id)arg1 videoTypeAction:(CDUnknownBlockType)arg2 extraBottomHeight:(double)arg3;
- (void)updateLayout:(double)arg1;
- (void)setupGameVideoGalleryCell;
- (id)initWithFrame:(struct CGRect)arg1;

@end

