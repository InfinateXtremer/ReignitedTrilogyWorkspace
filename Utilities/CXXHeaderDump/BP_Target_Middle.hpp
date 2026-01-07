#ifndef UE4SS_SDK_BP_Target_Middle_HPP
#define UE4SS_SDK_BP_Target_Middle_HPP

class ABP_Target_Middle_C : public ABP_Base_Flammable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0480 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x0488 (size: 0x8)
    class UTfbAkComponent* AkAudio;                                                   // 0x0490 (size: 0x8)
    class UFalconLevelActorStateComponent* State_Destroy;                             // 0x0498 (size: 0x8)
    TArray<class AActor*> MyOtherPieces;                                              // 0x04A0 (size: 0x10)

    void UserConstructionScript();
    void BndEvt__State_Destroy_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_Target_Middle(int32 EntryPoint);
}; // Size: 0x4B0

#endif
