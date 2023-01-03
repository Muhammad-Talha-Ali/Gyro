//
//  NativeCallProxy.m
//  UnityNativeIos
//
//  Created by Mufaza on 05/07/2021.
//

#import <Foundation/Foundation.h>
#import <Foundation/Foundation.h>
#import "NativeCallProxy.h"

@implementation FrameworkLibAPI

id<NativeCallsProtocol> api = NULL;
+(void) registerAPIforNativeCalls:(id<NativeCallsProtocol>) aApi
{
    api = aApi;
}

@end

extern "C"
{   //when cart icon tapped in unity
    // void sendMessageToMobileApp(const char* message)
    // {
    //     return [api sendMessageToMobileApp:[NSString stringWithUTF8String:message]];
    // }

    void destroyUnity(const char* message)
   {
        return [api destroyUnity:[NSString stringWithUTF8String:message]];
   }
     void doubleProjectionState(const char* message)
   {
   return [api doubleProjectionState:[NSString stringWithUTF8String:message]];
   }
    void modelState(const char* message)
   {
   return [api modelState:[NSString stringWithUTF8String:message]];
   }
    void assetDownloadState(const char* message)
   {
   return [api assetDownloadState:[NSNumber stringWithUTF8String:message]];
   }
    void showContainerView(const char* message)
   {
        return [api showContainerView:[NSString stringWithUTF8String:message]];
   }
    void sendMessageOnReload(const char* message)
   {
        return [api sendMessageOnReload:[NSString stringWithUTF8String:message]];
   }
    void modelDownloaded(const char* message)
   {
        return [api modelDownloaded:[NSNumber numberWithBool:message]];
   } 
    void screenTap(const char* message)
   {
        return [api screenTap:[NSNumber numberWithBool:message]];
   } 
   void LongTap(const char* message)
   {
       // return [api LongTap:[NSNumber numberWithBool:message]];
         return [api LongTap:[NSString stringWithUTF8String:message]];
   }
     void modelDownloadingDone(const char* message)  
   {
        return [api modelDownloadingDone:[NSString stringWithUTF8String:message]];
   }
    void liveAvatarDownloaded(const char* message)  
   {
        return [api liveAvatarDownloaded:[NSNumber numberWithBool:message]];
   }
     void avatarModule(const char* message1,const char* message2)
   {
          return [api avatarModule:[NSString stringWithUTF8String:message1] forRedeem:[NSString stringWithUTF8String:message2]];
   }
   void modelProjected(const char* message)
   {
       return [api modelProjected:[NSNumber numberWithBool:message]];
   }
   void avatarProjected(const char* message)
   {
       return [api avatarProjected:[NSNumber numberWithBool:message]];
   }
    void groundScanned(const char* message)
   {
       return [api groundScanned:[NSNumber numberWithBool:message]];
   }
    void groundScanning(const char* message)
   {
       return [api groundScanning:[NSString stringWithUTF8String:message]];
   }
   void GlbModelProjected(const char* message)
   {
       return [api GlbModelProjected:[NSString stringWithUTF8String:message]];
   }
   void newMove(const char* message)
   {
       return [api newMove:[NSString stringWithUTF8String:message]];
   }
   
   

}