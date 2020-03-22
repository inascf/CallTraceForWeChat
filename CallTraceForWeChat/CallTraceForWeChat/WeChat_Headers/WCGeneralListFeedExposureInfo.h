//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary, NSString;

@interface WCGeneralListFeedExposureInfo : MMObject
{
    NSString *_feedId;
    double _exposurePosiY;
    double _exposureHeight;
    double _originPosiY;
    double _originHeight;
    double _realScreenHeight;
    NSMutableDictionary *_specialParams;
}

@property(retain, nonatomic) NSMutableDictionary *specialParams; // @synthesize specialParams=_specialParams;
@property(nonatomic) double realScreenHeight; // @synthesize realScreenHeight=_realScreenHeight;
@property(nonatomic) double originHeight; // @synthesize originHeight=_originHeight;
@property(nonatomic) double originPosiY; // @synthesize originPosiY=_originPosiY;
@property(nonatomic) double exposureHeight; // @synthesize exposureHeight=_exposureHeight;
@property(nonatomic) double exposurePosiY; // @synthesize exposurePosiY=_exposurePosiY;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (double)getScreenExposurePercent;
- (double)getSelfExposurePercent;
- (id)toString;
- (id)init;

@end
