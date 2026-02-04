//
//  WKPreferences_Private.h
//  Joyflix
//

#import <WebKit/WebKit.h>

@interface WKPreferences (Fullscreen)
- (void)_setFullScreenEnabled:(BOOL)fullScreenEnabled;
@end