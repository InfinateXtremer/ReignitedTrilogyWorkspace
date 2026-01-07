#ifndef UE4SS_SDK_IGCPortalAudioControl_HPP
#define UE4SS_SDK_IGCPortalAudioControl_HPP

class AIGCPortalAudioControl_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class APortalTransporter_C* Portal;                                               // 0x0328 (size: 0x8)
    bool PlayAudio;                                                                   // 0x0330 (size: 0x1)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_IGCPortalAudioControl(int32 EntryPoint);
}; // Size: 0x331

#endif
