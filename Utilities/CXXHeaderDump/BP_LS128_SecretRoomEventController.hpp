#ifndef UE4SS_SDK_BP_LS128_SecretRoomEventController_HPP
#define UE4SS_SDK_BP_LS128_SecretRoomEventController_HPP

class ABP_LS128_SecretRoomEventController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class ATriggerBox* ResetStartArea;                                                // 0x0330 (size: 0x8)
    class ATriggerBox* StartSecretArea;                                               // 0x0338 (size: 0x8)
    bool GameStarto!;                                                                 // 0x0340 (size: 0x1)
    class ABP_CES1065_BlueWeatherWizard_C* BlueWeatherWizard;                         // 0x0348 (size: 0x8)
    TArray<class ABP_CES1062_HauntedTinSoldier_C*> HauntedTinSoldiers;                // 0x0350 (size: 0x10)

    void UserConstructionScript();
    void BndEvt__StartSecretArea_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__ResetStartArea_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_BP_LS128_SecretRoomEventController(int32 EntryPoint);
}; // Size: 0x360

#endif
