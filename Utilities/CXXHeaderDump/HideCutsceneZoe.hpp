#ifndef UE4SS_SDK_HideCutsceneZoe_HPP
#define UE4SS_SDK_HideCutsceneZoe_HPP

class AHideCutsceneZoe_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class AQuestZoeController_C* Controller;                                          // 0x0328 (size: 0x8)
    bool HideActorForCutscene;                                                        // 0x0330 (size: 0x1)
    class ATfbLevelSequenceActor* TfbLevelSequenceActor;                              // 0x0338 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__TfBLevelSequenceActor_K2Node_ComponentBoundEvent_4_OnMovieSceneSequencePlayerEvent__DelegateSignature();
    void BndEvt__TfBLevelSequenceActor_K2Node_ComponentBoundEvent_5_OnMovieSceneSequencePlayerEvent__DelegateSignature();
    void ExecuteUbergraph_HideCutsceneZoe(int32 EntryPoint);
}; // Size: 0x340

#endif
