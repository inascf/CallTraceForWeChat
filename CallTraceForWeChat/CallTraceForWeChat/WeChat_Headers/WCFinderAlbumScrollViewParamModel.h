//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderAlbumScrollViewParamModel : NSObject
{
    double _zoomScale;
    struct CGSize _contentSize;
    struct CGPoint _contentOffset;
    struct CGPoint _contentOffsetHistory;
    struct CGRect _frame;
}

@property(nonatomic) struct CGPoint contentOffsetHistory; // @synthesize contentOffsetHistory=_contentOffsetHistory;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)init;

@end

