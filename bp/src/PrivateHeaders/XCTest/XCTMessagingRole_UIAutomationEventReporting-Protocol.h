//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSNumber, NSString, XCElementSnapshot;

@protocol XCTMessagingRole_UIAutomationEventReporting
- (id)_XCT_nativeFocusItemDidChangeAtTime:(NSNumber *)arg1 parameterSnapshot:(XCElementSnapshot *)arg2 applicationSnapshot:(XCElementSnapshot *)arg3;
- (id)_XCT_recordedEventNames:(NSArray *)arg1 timestamp:(NSNumber *)arg2 duration:(NSNumber *)arg3 startLocation:(NSDictionary *)arg4 startElementSnapshot:(XCElementSnapshot *)arg5 startApplicationSnapshot:(XCElementSnapshot *)arg6 endLocation:(NSDictionary *)arg7 endElementSnapshot:(XCElementSnapshot *)arg8 endApplicationSnapshot:(XCElementSnapshot *)arg9;
- (id)_XCT_recordedOrientationChange:(NSString *)arg1;
- (id)_XCT_recordedKeyEventsWithApplicationSnapshot:(XCElementSnapshot *)arg1 characters:(NSString *)arg2 charactersIgnoringModifiers:(NSString *)arg3 modifierFlags:(NSNumber *)arg4;
- (id)_XCT_recordedFirstResponderChangedWithApplicationSnapshot:(XCElementSnapshot *)arg1;
@end
