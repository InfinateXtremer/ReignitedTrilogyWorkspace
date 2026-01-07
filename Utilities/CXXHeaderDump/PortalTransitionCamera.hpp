#ifndef UE4SS_SDK_PortalTransitionCamera_HPP
#define UE4SS_SDK_PortalTransitionCamera_HPP

class APortalTransitionCamera_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class AActor* CurrentPortalActor;                                                 // 0x0330 (size: 0x8)
    bool CameraCrossedPortal;                                                         // 0x0338 (size: 0x1)
    FVector OffsetFromCharacter;                                                      // 0x033C (size: 0xC)
    float BlendTime;                                                                  // 0x0348 (size: 0x4)
    class AActor* TargetPortalActor;                                                  // 0x0350 (size: 0x8)

    void UpdateCameraPosition();
    void UserConstructionScript();
    void StartCamera();
    void StopCamera();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PortalTransitionCamera(int32 EntryPoint);
}; // Size: 0x358

#endif
