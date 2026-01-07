#ifndef UE4SS_SDK_Spyro_IGC_BalloonistDestination_HPP
#define UE4SS_SDK_Spyro_IGC_BalloonistDestination_HPP

class ASpyro_IGC_BalloonistDestination_C : public ASpyro_IGC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    FDataTableRowHandle VO_Question;                                                  // 0x04E8 (size: 0x10)
    TArray<FText> VO_AnswerText;                                                      // 0x04F8 (size: 0x10)
    bool QuestionActive;                                                              // 0x0508 (size: 0x1)
    FText DebugTextAnswers;                                                           // 0x0510 (size: 0x18)
    FPhasmidSoftReference BalloonSoftRef;                                             // 0x0528 (size: 0x28)
    class AActor* Balloon;                                                            // 0x0550 (size: 0x8)
    FText StayHere;                                                                   // 0x0558 (size: 0x18)
    FS1_BalloonistStruct DataTableRow;                                                // 0x0570 (size: 0x58)
    FName Destination;                                                                // 0x05C8 (size: 0x8)
    TArray<class AActor*> NotifyActors;                                               // 0x05D0 (size: 0x10)
    int32 NotifyValue;                                                                // 0x05E0 (size: 0x4)
    FText NotifyPatchMsg;                                                             // 0x05E8 (size: 0x18)
    FText NotifyPatchResponse;                                                        // 0x0600 (size: 0x18)

    void CreateAnswerArray();
    void UserConstructionScript();
    void InpActEvt_Y_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void All Dialogue Played();
    void AskQuestion_VO(int32 EventID, EWwiseEvent WWiseEvent, class UAkComponent* GameObjectID);
    void QuestionFinished();
    void HudDialogOptionSelected(int32 selectedIndex);
    void question menu - response(int32 button clicked index);
    void ExecuteUbergraph_Spyro_IGC_BalloonistDestination(int32 EntryPoint);
}; // Size: 0x618

#endif
