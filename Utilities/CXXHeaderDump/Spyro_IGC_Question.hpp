#ifndef UE4SS_SDK_Spyro_IGC_Question_HPP
#define UE4SS_SDK_Spyro_IGC_Question_HPP

class ASpyro_IGC_Question_C : public ASpyro_IGC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    FDataTableRowHandle VO_Question;                                                  // 0x04E8 (size: 0x10)
    TArray<FSpyro_IGC_Answer_Struct> VO_Answers;                                      // 0x04F8 (size: 0x10)
    TArray<FText> VO_AnswerText;                                                      // 0x0508 (size: 0x10)
    bool QuestionActive;                                                              // 0x0518 (size: 0x1)
    FText DebugTextAnswers;                                                           // 0x0520 (size: 0x18)
    class AActor* FlightSuspendActor;                                                 // 0x0538 (size: 0x8)
    bool FlightSuspend;                                                               // 0x0540 (size: 0x1)
    bool FlightRestore;                                                               // 0x0541 (size: 0x1)
    bool ShowGemCount;                                                                // 0x0542 (size: 0x1)
    int32 TempIndex;                                                                  // 0x0544 (size: 0x4)

    void CreateAnswerArray();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void All Dialogue Played();
    void AskQuestion_VO(int32 EventID, EWwiseEvent WWiseEvent, class UAkComponent* GameObjectID);
    void QuestionFinished();
    void HudDialogOptionSelected(int32 selectedIndex);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void ExecuteUbergraph_Spyro_IGC_Question(int32 EntryPoint);
}; // Size: 0x548

#endif
