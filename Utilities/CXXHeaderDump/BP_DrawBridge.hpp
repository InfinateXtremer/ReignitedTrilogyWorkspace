#ifndef UE4SS_SDK_BP_DrawBridge_HPP
#define UE4SS_SDK_BP_DrawBridge_HPP

class ABP_DrawBridge_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0320 (size: 0x8)
    class UStaticMeshComponent* bridge_01;                                            // 0x0328 (size: 0x8)
    float Up2Down_Up2Down_ACA13D8A4F37D1CF8A142FB322C7D5B6;                           // 0x0330 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Up2Down__Direction_ACA13D8A4F37D1CF8A142FB322C7D5B6; // 0x0334 (size: 0x1)
    class UTimelineComponent* Up2Down;                                                // 0x0338 (size: 0x8)
    float Down2Up_Down2Up_E03526B84B66266341D5D6B8D90B2E26;                           // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Down2Up__Direction_E03526B84B66266341D5D6B8D90B2E26; // 0x0344 (size: 0x1)
    class UTimelineComponent* Down2Up;                                                // 0x0348 (size: 0x8)
    float DownRotation;                                                               // 0x0350 (size: 0x4)
    float UpRotation;                                                                 // 0x0354 (size: 0x4)
    bool BirdgeDown;                                                                  // 0x0358 (size: 0x1)
    bool NewVar_0;                                                                    // 0x0359 (size: 0x1)
    class AActor* SuperChargeAssistVolume;                                            // 0x0360 (size: 0x8)

    void UserConstructionScript();
    void Down2Up__FinishedFunc();
    void Down2Up__UpdateFunc();
    void Up2Down__FinishedFunc();
    void Up2Down__UpdateFunc();
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void ExecuteUbergraph_BP_DrawBridge(int32 EntryPoint);
}; // Size: 0x368

#endif
