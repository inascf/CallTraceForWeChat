//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GameCenterEntranceInfo : NSObject
{
    _Bool _isIconRoundCorner;
    int _entranceNotifyType;
    NSString *_iconUrl;
    NSString *_desc;
    struct CGSize _iconSize;
}

@property(nonatomic) _Bool isIconRoundCorner; // @synthesize isIconRoundCorner=_isIconRoundCorner;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) int entranceNotifyType; // @synthesize entranceNotifyType=_entranceNotifyType;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;

@end
