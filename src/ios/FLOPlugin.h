#import <Cordova/CDV.h>

@interface FLOPlugin : CDVPlugin {
    
    NSString *asyncCallbackId;
}

- (void)webToSdkCommand:(CDVInvokedUrlCommand*)command;

@end