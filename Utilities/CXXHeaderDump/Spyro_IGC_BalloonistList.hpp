#ifndef UE4SS_SDK_Spyro_IGC_BalloonistList_HPP
#define UE4SS_SDK_Spyro_IGC_BalloonistList_HPP

class ASpyro_IGC_BalloonistList_C : public ASpyro_IGC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    FDataTableRowHandle VO_Question;                                                  // 0x04E8 (size: 0x10)
    TArray<FText> VO_AnswerText;                                                      // 0x04F8 (size: 0x10)
    bool QuestionActive;                                                              // 0x0508 (size: 0x1)
    FText DebugTextAnswers;                                                           // 0x0510 (size: 0x18)
    FPhasmidSoftReference BalloonSoftRef;                                             // 0x0528 (size: 0x28)
    class AActor* Balloon;                                                            // 0x0550 (size: 0x8)
    FDataTableRowHandle CurrentLevel;                                                 // 0x0558 (size: 0x10)
    FText StayHere;                                                                   // 0x0568 (size: 0x18)
    TArray<FS1_BalloonistStruct> DataTableRow;                                        // 0x0580 (size: 0x10)
    TArray<class AActor*> NotifyActors;                                               // 0x0590 (size: 0x10)
    int32 NotifyValue;                                                                // 0x05A0 (size: 0x4)
    FText NotifyPatchMsg;                                                             // 0x05A8 (size: 0x18)
    FText NotifyPatchResponse;                                                        // 0x05C0 (size: 0x18)
    bool StopChecking;                                                                // 0x05D8 (size: 0x1)

    void CreateAnswerArray();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void All Dialogue Played();
    void AskQuestion_VO(int32 EventID, EWwiseEvent WWiseEvent, class UAkComponent* GameObjectID);
    void QuestionFinished();
    void HudDialogOptionSelected(int32 selectedIndex);
    void question menu - response(int32 button clicked index);
    void ExecuteUbergraph_Spyro_IGC_BalloonistList(int32 EntryPoint);
}; // Size: 0x5D9

#endif
