//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBWindowContextManagerObserver.h"

@class FBScene, FBWindowContextHostWrapperView, FBWindowContextManager, NSDictionary, NSMutableSet, NSString;

@interface FBWindowContextHostInfo : NSObject <FBWindowContextManagerObserver>
{
    FBWindowContextManager *_contextManager;
    FBScene *_scene;
    FBWindowContextHostWrapperView *_wrapperView;
    NSMutableSet *_hiddenContexts;
    NSDictionary *_realContextHostViewChangedProperties;
    NSDictionary *_realContextHostViewOriginalProperties;
}

@property(retain, nonatomic) NSDictionary *realContextHostViewOriginalProperties; // @synthesize realContextHostViewOriginalProperties=_realContextHostViewOriginalProperties;
@property(retain, nonatomic) NSDictionary *realContextHostViewChangedProperties; // @synthesize realContextHostViewChangedProperties=_realContextHostViewChangedProperties;
@property(readonly, retain, nonatomic) NSMutableSet *hiddenContexts; // @synthesize hiddenContexts=_hiddenContexts;
@property(readonly, retain, nonatomic) FBWindowContextHostWrapperView *wrapperView; // @synthesize wrapperView=_wrapperView;
- (void)windowContextManager:(id)arg1 didRepositionContext:(id)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4;
- (void)dealloc;
- (id)initWithContextManager:(id)arg1 hostManager:(id)arg2 scene:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

