//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GoodsObject, NSData, NSString, UIImage;

@interface ScanGoodsImageInfo : NSObject
{
    _Bool _isAiCrop;
    _Bool _isUseAi;
    _Bool _forceJump;
    unsigned int _scene;
    unsigned int _frameID;
    unsigned int _cameraImgW;
    unsigned int _cameraImgH;
    NSData *_imageData;
    unsigned long long _sessionID;
    GoodsObject *_cropObj;
    GoodsObject *_matchObj;
    NSString *_reqKey;
    UIImage *_albumImage;
}

@property(retain, nonatomic) UIImage *albumImage; // @synthesize albumImage=_albumImage;
@property(retain, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;
@property(retain, nonatomic) GoodsObject *matchObj; // @synthesize matchObj=_matchObj;
@property(nonatomic) _Bool forceJump; // @synthesize forceJump=_forceJump;
@property(nonatomic) unsigned int cameraImgH; // @synthesize cameraImgH=_cameraImgH;
@property(nonatomic) unsigned int cameraImgW; // @synthesize cameraImgW=_cameraImgW;
@property(retain, nonatomic) GoodsObject *cropObj; // @synthesize cropObj=_cropObj;
@property(nonatomic) _Bool isUseAi; // @synthesize isUseAi=_isUseAi;
@property(nonatomic) _Bool isAiCrop; // @synthesize isAiCrop=_isAiCrop;
@property(nonatomic) unsigned int frameID; // @synthesize frameID=_frameID;
@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void).cxx_destruct;

@end

