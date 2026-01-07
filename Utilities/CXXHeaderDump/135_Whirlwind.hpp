#ifndef UE4SS_SDK_135_Whirlwind_HPP
#define UE4SS_SDK_135_Whirlwind_HPP

class A135_Whirlwind_C : public AWhirlwindTransporter_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1018 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x1020 (size: 0x8)
    float Timeline_0_Alpha_67A48CB84C0B2563E99DD79C1FF2C307;                          // 0x1028 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_67A48CB84C0B2563E99DD79C1FF2C307; // 0x102C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x1030 (size: 0x8)
    FDataTableRowHandle BackToArtisans;                                               // 0x1038 (size: 0x10)
    class UFileMediaSource* SpecialCredits;                                           // 0x1048 (size: 0x8)
    class UUserWidget* UI Ref;                                                        // 0x1050 (size: 0x8)
    FDataTableRowHandle OwnRowHandle;                                                 // 0x1058 (size: 0x10)
    class UDataTable* tfbSubtitleDataTable;                                           // 0x1068 (size: 0x8)

    void Play FMV();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_0(FKey Key);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void StartFlyoutOfWhirlwindTimeline();
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_135_Whirlwind(int32 EntryPoint);
}; // Size: 0x1070

#endif
