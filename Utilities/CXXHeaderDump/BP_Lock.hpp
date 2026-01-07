#ifndef UE4SS_SDK_BP_Lock_HPP
#define UE4SS_SDK_BP_Lock_HPP

class ABP_Lock_C : public ABP_Base_Flammable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0480 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade1;                               // 0x0488 (size: 0x8)
    class UDestructibleComponent* Destructible_Lock;                                  // 0x0490 (size: 0x8)
    class UDestructibleComponent* Destructible_LockHolder;                            // 0x0498 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x04A0 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x04A8 (size: 0x8)
    class UStaticMeshComponent* Lock;                                                 // 0x04B0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x04B8 (size: 0x8)
    FVector Impulse;                                                                  // 0x04C0 (size: 0xC)
    class AActor* MySaveGameObject;                                                   // 0x04D0 (size: 0x8)

    void UserConstructionScript();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void ExecuteUbergraph_BP_Lock(int32 EntryPoint);
}; // Size: 0x4D8

#endif
