#ifndef UE4SS_SDK_BP_Target_Base_HPP
#define UE4SS_SDK_BP_Target_Base_HPP

class ABP_Target_Base_C : public ABP_Base_Flammable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0480 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x0488 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0490 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x0498 (size: 0x8)
    class UTfbAkComponent* AkAudio;                                                   // 0x04A0 (size: 0x8)
    class UFalconLevelActorStateComponent* State_Destroy;                             // 0x04A8 (size: 0x8)
    TArray<class AActor*> MyOtherPieces;                                              // 0x04B0 (size: 0x10)
    class AActor* MySaveGameObject;                                                   // 0x04C0 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__State_Destroy_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_Target_Base(int32 EntryPoint);
}; // Size: 0x4C8

#endif
