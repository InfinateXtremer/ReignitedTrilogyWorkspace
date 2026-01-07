#ifndef UE4SS_SDK_BP_AirshipController_HPP
#define UE4SS_SDK_BP_AirshipController_HPP

class ABP_AirshipController_C : public AAirshipController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UArrowComponent* BossWorldFloatingAirship;                                  // 0x0468 (size: 0x8)
    float LS301Descent_Heigh_A13917744490A83B495FD7ABEAF9F402;                        // 0x0470 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LS301Descent__Direction_A13917744490A83B495FD7ABEAF9F402; // 0x0474 (size: 0x1)
    class UTimelineComponent* LS301Descent;                                           // 0x0478 (size: 0x8)
    float Descent_Height_17881D4B461CE2A4E9678882EA908CFC;                            // 0x0480 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Descent__Direction_17881D4B461CE2A4E9678882EA908CFC; // 0x0484 (size: 0x1)
    class UTimelineComponent* Descent;                                                // 0x0488 (size: 0x8)
    int32 bossLevel;                                                                  // 0x0490 (size: 0x4)
    bool Rocket;                                                                      // 0x0494 (size: 0x1)
    TArray<TSoftObjectPtr<AQuestBalloonistController_C>> LS301Balloonists;            // 0x0498 (size: 0x10)
    bool LS301Start;                                                                  // 0x04A8 (size: 0x1)

    void UserConstructionScript();
    void Descent__FinishedFunc();
    void Descent__UpdateFunc();
    void LS301Descent__FinishedFunc();
    void LS301Descent__UpdateFunc();
    void CreatedController();
    void Unlocked(class UQuestActionsComponent* Actions);
    void Locked(class UQuestActionsComponent* Actions);
    void ReceiveActorBound(class AActor* Actor);
    void ReadyForNextRealm(class UQuestActionsComponent* Actions);
    void LS301 Top();
    void LS301 Descent();
    void ExecuteUbergraph_BP_AirshipController(int32 EntryPoint);
}; // Size: 0x4A9

#endif
