#ifndef UE4SS_SDK_QuestBalloonistController_HPP
#define UE4SS_SDK_QuestBalloonistController_HPP

class AQuestBalloonistController_C : public ABalloonistController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0418 (size: 0x8)
    class ABalloonistRope_C* Rope;                                                    // 0x0420 (size: 0x8)
    FVector LastLoc;                                                                  // 0x0428 (size: 0xC)
    FName RopeSocket;                                                                 // 0x0438 (size: 0x8)
    FVector RopeOffset;                                                               // 0x0440 (size: 0xC)
    class AActor* TransformForEmptyRope;                                              // 0x0450 (size: 0x8)
    class ABalloonistRope_C* EmptyRope;                                               // 0x0458 (size: 0x8)
    bool NoLandingDust?;                                                              // 0x0460 (size: 0x1)
    TSoftObjectPtr<ABP_AirshipController_C> Airship;                                  // 0x0468 (size: 0x28)

    void UserConstructionScript();
    void Ballooning(class UQuestActionsComponent* Actions);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void CreatedController();
    void ExecuteUbergraph_QuestBalloonistController(int32 EntryPoint);
}; // Size: 0x490

#endif
