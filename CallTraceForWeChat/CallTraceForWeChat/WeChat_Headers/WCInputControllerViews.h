//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EmoticonBoardView, MMGrowTextView, MMUILabel, UIButton, UIView, WCInputController;

@interface WCInputControllerViews : NSObject
{
    WCInputController *_inputController;
    UIView *_inputView;
    UIButton *_expressionButton;
    MMGrowTextView *_growTextView;
    MMUILabel *_remainWordCountLabel;
    UIView *_backgroundView;
    EmoticonBoardView *_emoticonBoardView;
}

@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMUILabel *remainWordCountLabel; // @synthesize remainWordCountLabel=_remainWordCountLabel;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
- (void).cxx_destruct;

@end
