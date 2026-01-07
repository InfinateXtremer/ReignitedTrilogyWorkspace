#ifndef UE4SS_SDK_HideCutsceneDenizen_HPP
#define UE4SS_SDK_HideCutsceneDenizen_HPP

class AHideCutsceneDenizen_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class AQuestMobileDenizenController_C* Controller;                                // 0x0328 (size: 0x8)
    bool HideActorForCutscene;                                                        // 0x0330 (size: 0x1)
    class ATfbLevelSequenceActor* TfbLevelSequenceActor;                              // 0x0338 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__TfBLevelSequenceActor_K2Node_ComponentBoundEvent_2_OnMovieSceneSequencePlayerEvent__DelegateSignature();
    void BndEvt__TfBLevelSequenceActor_K2Node_ComponentBoundEvent_3_OnMovieSceneSequencePlayerEvent__DelegateSignature();
    void ExecuteUbergraph_HideCutsceneDenizen(int32 EntryPoint);
}; // Size: 0x340

#endif
