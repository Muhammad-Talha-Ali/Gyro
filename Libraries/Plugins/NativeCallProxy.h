//
//  NativeCallProxy.h
//  UnityNativeIos
//
//  Created by Mufaza on 05/07/2021.
//

#ifndef NativeCallProxy_h
#define NativeCallProxy_h


#endif /* NativeCallProxy_h */

#import <Foundation/Foundation.h>

@protocol NativeCallsProtocol
@optional
- (void) sendMessageToMobileApp:(NSString*)message;
- (void) destroyUnity:(NSString*)message;
- (void) showContainerView:(NSString*)message;
- (void) sendMessageOnReload:(NSString*)message;
- (void) modelDownloaded:(BOOL)message;  
- (void) liveAvatarDownloaded:(BOOL)message;  
- (void) screenTap:(BOOL)message;
- (void) LongTap:(NSString*)message;
- (void) modelDownloadingDone:(NSString*)message;
- (void) avatarModule:(NSString*)message1 forRedeem:(NSString*)message2;
- (void) modelProjected:(BOOL)message;
- (void) avatarProjected:(BOOL)message;
- (void) groundScanned:(BOOL)message;
- (void) groundScanning:(NSString*)message;
- (void) GlbModelProjected:(NSString*)message;
- (void) newMove:(NSString*)message;
-(void) doubleProjectionState:(NSString*)message;
-(void) modelState:(NSString*)message;
-(void) assetDownloadState:(NSString*)message;


// other methods
@end

__attribute__ ((visibility("default")))
@interface FrameworkLibAPI : NSObject
+(void) registerAPIforNativeCalls:(id<NativeCallsProtocol>) aApi;

@end
