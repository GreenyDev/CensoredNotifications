//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTMessageStatus : NSObject
{
    unsigned int _messageId;
    int _messageType;
    int _result;
}

@property(readonly) int result; // @synthesize result=_result;
@property(readonly) int messageType; // @synthesize messageType=_messageType;
@property(readonly) unsigned int messageId; // @synthesize messageId=_messageId;
- (id)initWithMessageId:(unsigned int)arg1 messageType:(int)arg2 result:(int)arg3;

@end

