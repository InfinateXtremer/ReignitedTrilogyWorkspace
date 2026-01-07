#ifndef UE4SS_SDK_Spyro3_IGC_BalloonistList_HPP
#define UE4SS_SDK_Spyro3_IGC_BalloonistList_HPP

class ASpyro3_IGC_BalloonistList_C : public ASpyro_IGC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x04E8 (size: 0x8)
    FDataTableRowHandle VO_Question;                                                  // 0x04F0 (size: 0x10)
    TArray<FText> VO_AnswerText;                                                      // 0x0500 (size: 0x10)
    bool QuestionActive;                                                              // 0x0510 (size: 0x1)
    FText DebugTextAnswers;                                                           // 0x0518 (size: 0x18)
    class AActor* Airship;                                                            // 0x0530 (size: 0x8)
    FDataTableRowHandle CurrentLevel;                                                 // 0x0538 (size: 0x10)
    FText StayHere;                                                                   // 0x0548 (size: 0x18)
    TArray<FS1_BalloonistStruct> DataTableRow;                                        // 0x0560 (size: 0x10)
    TArray<class AActor*> NotifyActors;                                               // 0x0570 (size: 0x10)
    int32 NotifyValue;                                                                // 0x0580 (size: 0x4)
    FText NotifyPatchMsg;                                                             // 0x0588 (size: 0x18)
    FText NotifyPatchResponse;                                                        // 0x05A0 (size: 0x18)
    bool StopChecking;                                                                // 0x05B8 (size: 0x1)
    bool Psuedo;                                                                      // 0x05B9 (size: 0x1)
    bool OpenSpike;                                                                   // 0x05BA (size: 0x1)
    bool OpenScorch;                                                                  // 0x05BB (size: 0x1)
    bool IsOn?;                                                                       // 0x05BC (size: 0x1)
    class APhasmidLightingManager* Lighting Manager;                                  // 0x05C0 (size: 0x8)
    class ABP_AirshipController_C* AirshipController;                                 // 0x05C8 (size: 0x8)
    class ACharacter* PlayerChara;                                                    // 0x05D0 (size: 0x8)
    bool DEBUGMODE;                                                                   // 0x05D8 (size: 0x1)
    FDataTableRowHandle VO Text Default Data Table;                                   // 0x05E0 (size: 0x10)

    void Fill In Default VO Text If Null Question Data();
    void CreateAnswerArray();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void All Dialogue Played();
    void AskQuestion_VO(int32 EventID, EWwiseEvent WWiseEvent, class UAkComponent* GameObjectID);
    void QuestionFinished();
    void HudDialogOptionSelected(int32 selectedIndex);
    void question menu - response(int32 button clicked index);
    void Go Spyro Go(class ACharacter* PlayerChara, class APortal* Airship);
    void bossLevel(FS1_BalloonistStruct Destination);
    void ExecuteUbergraph_Spyro3_IGC_BalloonistList(int32 EntryPoint);
}; // Size: 0x5F0

#endif
