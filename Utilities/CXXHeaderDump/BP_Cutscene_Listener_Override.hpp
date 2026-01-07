#ifndef UE4SS_SDK_BP_Cutscene_Listener_Override_HPP
#define UE4SS_SDK_BP_Cutscene_Listener_Override_HPP

class ABP_Cutscene_Listener_Override_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0320 (size: 0x8)
    class ATfbLevelSequenceActor* Cutscene;                                           // 0x0328 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Cutscene_K2Node_ComponentBoundEvent_0_OnMovieSceneSequencePlayerEvent__DelegateSignature();
    void BndEvt__Cutscene_K2Node_ComponentBoundEvent_1_OnMovieSceneSequencePlayerEvent__DelegateSignature();
    void ExecuteUbergraph_BP_Cutscene_Listener_Override(int32 EntryPoint);
}; // Size: 0x330

#endif
